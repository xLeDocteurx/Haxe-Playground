#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_AttribAccess_Impl_
#include <haxe/xml/_Access/AttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_HasNodeAccess_Impl_
#include <haxe/xml/_Access/HasNodeAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_NodeAccess_Impl_
#include <haxe/xml/_Access/NodeAccess_Impl_.h>
#endif
#ifndef INCLUDED_hxd_fmt_bfnt_FontParser
#include <hxd/fmt/bfnt/FontParser.h>
#endif
#ifndef INCLUDED_hxd_fmt_bfnt_Reader
#include <hxd/fmt/bfnt/Reader.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e5ec865a474489a1_12_parse,"hxd.fmt.bfnt.FontParser","parse",0x0f84f85c,"hxd.fmt.bfnt.FontParser.parse","hxd/fmt/bfnt/FontParser.hx",12,0x51b55fa8)
HX_LOCAL_STACK_FRAME(_hx_pos_e5ec865a474489a1_49_parse,"hxd.fmt.bfnt.FontParser","parse",0x0f84f85c,"hxd.fmt.bfnt.FontParser.parse","hxd/fmt/bfnt/FontParser.hx",49,0x51b55fa8)
namespace hxd{
namespace fmt{
namespace bfnt{

void FontParser_obj::__construct() { }

Dynamic FontParser_obj::__CreateEmpty() { return new FontParser_obj; }

void *FontParser_obj::_hx_vtable = 0;

Dynamic FontParser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FontParser_obj > _hx_result = new FontParser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FontParser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4655ec39;
}

 ::h2d::Font FontParser_obj::parse( ::haxe::io::Bytes bytes,::String path, ::Dynamic resolveTile){
            	HX_GC_STACKFRAME(&_hx_pos_e5ec865a474489a1_12_parse)
HXLINE(  16)		::Array< ::Dynamic> tile = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE(  17)		 ::h2d::Font font =  ::h2d::Font_obj::__alloc( HX_CTX ,null(),0,null());
HXLINE(  18)		 ::haxe::ds::IntMap glyphs = font->glyphs;
HXLINE(  45)		font->baseLine = ( (Float)(0) );
HXLINE(  47)		{
HXLINE(  47)			int _g = (((( (int)(bytes->b->__get(0)) ) | (( (int)(bytes->b->__get(1)) ) << 8)) | (( (int)(bytes->b->__get(2)) ) << 16)) | (( (int)(bytes->b->__get(3)) ) << 24));
HXDLIN(  47)			switch((int)(_g)){
            				case (int)54938946: {
HXLINE( 203)					 ::haxe::io::BytesInput bytes1 =  ::haxe::io::BytesInput_obj::__alloc( HX_CTX ,bytes,null(),null());
HXLINE( 204)					bytes1->set_position((bytes1->pos + 4));
HXLINE( 205)					int pageCount = 0;
HXLINE( 207)					while((bytes1->pos < bytes1->totlen)){
HXLINE( 208)						int id = bytes1->readByte();
HXLINE( 209)						int length = bytes1->readInt32();
HXLINE( 210)						int pos = bytes1->pos;
HXLINE( 212)						switch((int)(id)){
            							case (int)1: {
HXLINE( 214)								font->size = (font->initSize = bytes1->readInt16());
HXLINE( 216)								bytes1->set_position((bytes1->pos + 12));
HXLINE( 217)								font->name = bytes1->readUntil(0);
            							}
            							break;
            							case (int)2: {
HXLINE( 219)								font->lineHeight = ( (Float)(bytes1->readUInt16()) );
HXLINE( 220)								font->baseLine = ( (Float)(bytes1->readUInt16()) );
HXLINE( 222)								bytes1->set_position((bytes1->pos + 4));
HXLINE( 223)								pageCount = bytes1->readUInt16();
HXLINE( 224)								if ((pageCount != 1)) {
HXLINE( 224)									::haxe::Log_obj::trace(HX_("Warning: BMF format only supports one page at the moment.",bf,d0,43,a7),::hx::SourceInfo(HX_("hxd/fmt/bfnt/FontParser.hx",a8,5f,b5,51),224,HX_("hxd.fmt.bfnt.FontParser",d7,d3,9d,fc),HX_("parse",33,90,55,bd)));
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 227)								::String name = bytes1->readUntil(0);
HXLINE( 228)								try {
            									HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 228)									font->tilePath = name;
HXDLIN( 228)									 ::Dynamic resolveTile1 = resolveTile;
HXDLIN( 228)									tile[0] = ( ( ::h2d::Tile)(resolveTile1(::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,::haxe::io::Path_obj::directory(path))->init(1,name)))) );
            								} catch( ::Dynamic _hx_e) {
            									if (_hx_e.IsClass<  ::Dynamic >() ){
            										HX_STACK_BEGIN_CATCH
            										 ::Dynamic _g = _hx_e;
HXLINE(  29)										{
HXLINE(  29)											null();
            										}
HXLINE( 228)										::haxe::Log_obj::trace(((HX_("Warning: Could not find referenced font texture at \"",3d,45,d3,b7) + name) + HX_("\", trying to resolve same name as fnt!",52,eb,fb,13)),::hx::SourceInfo(HX_("hxd/fmt/bfnt/FontParser.hx",a8,5f,b5,51),30,HX_("hxd.fmt.bfnt.FontParser",d7,d3,9d,fc),HX_("parse",33,90,55,bd)));
HXDLIN( 228)										{
HXLINE( 228)											font->tilePath = ( ::haxe::io::Path_obj::__alloc( HX_CTX ,path)->file + HX_(".png",3b,2d,bd,1e));
HXDLIN( 228)											 ::Dynamic resolveTile1 = resolveTile;
HXDLIN( 228)											tile[0] = ( ( ::h2d::Tile)(resolveTile1(::haxe::io::Path_obj::withExtension(path,HX_("png",a9,5c,55,00)))) );
            										}
            									}
            									else {
            										HX_STACK_DO_THROW(_hx_e);
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 230)								int count = ::Std_obj::_hx_int((( (Float)(length) ) / ( (Float)(20) )));
HXLINE( 231)								while((count > 0)){
HXLINE( 232)									int cid = bytes1->readInt32();
HXLINE( 233)									 ::h2d::Tile tile1 = tile->__get(0).StaticCast<  ::h2d::Tile >();
HXDLIN( 233)									int t = bytes1->readUInt16();
HXDLIN( 233)									int t1 = bytes1->readUInt16();
HXDLIN( 233)									int t2 = bytes1->readUInt16();
HXDLIN( 233)									int t3 = bytes1->readUInt16();
HXDLIN( 233)									int t4 = bytes1->readInt16();
HXDLIN( 233)									 ::h2d::Tile t5 = tile1->sub(( (Float)(t) ),( (Float)(t1) ),( (Float)(t2) ),( (Float)(t3) ),t4,bytes1->readInt16());
HXLINE( 234)									 ::h2d::FontChar fc =  ::h2d::FontChar_obj::__alloc( HX_CTX ,t5,( (Float)(bytes1->readInt16()) ));
HXLINE( 235)									glyphs->set(cid,fc);
HXLINE( 236)									bytes1->set_position((bytes1->pos + 2));
HXLINE( 237)									count = (count - 1);
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 240)								int count = ::Std_obj::_hx_int((( (Float)(length) ) / ( (Float)(10) )));
HXLINE( 241)								while((count > 0)){
HXLINE( 242)									int first = bytes1->readInt32();
HXLINE( 243)									 ::h2d::FontChar fc = ( ( ::h2d::FontChar)(glyphs->get(bytes1->readInt32())) );
HXLINE( 244)									if (::hx::IsNotNull( fc )) {
HXLINE( 245)										fc->addKerning(first,bytes1->readInt16());
            									}
            									else {
HXLINE( 247)										bytes1->set_position((bytes1->pos + 2));
            									}
HXLINE( 248)									count = (count - 1);
            								}
            							}
            							break;
            						}
HXLINE( 252)						bytes1->set_position((pos + length));
            					}
            				}
            				break;
            				case (int)1414415938: {
            					HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0,::String,path,::Array< ::Dynamic>,tile, ::Dynamic,resolveTile, ::h2d::Font,font) HXARGC(1)
            					 ::h2d::Tile _hx_run(::String tp){
            						HX_GC_STACKFRAME(&_hx_pos_e5ec865a474489a1_49_parse)
HXLINE(  49)						try {
            							HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  49)							font->tilePath = tp;
HXDLIN(  49)							 ::Dynamic resolveTile1 = resolveTile;
HXDLIN(  49)							tile[0] = ( ( ::h2d::Tile)(resolveTile1(::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,::haxe::io::Path_obj::directory(path))->init(1,tp)))) );
            						} catch( ::Dynamic _hx_e) {
            							if (_hx_e.IsClass<  ::Dynamic >() ){
            								HX_STACK_BEGIN_CATCH
            								 ::Dynamic _g = _hx_e;
HXLINE(  29)								{
HXLINE(  29)									null();
            								}
HXLINE(  49)								::haxe::Log_obj::trace(((HX_("Warning: Could not find referenced font texture at \"",3d,45,d3,b7) + tp) + HX_("\", trying to resolve same name as fnt!",52,eb,fb,13)),::hx::SourceInfo(HX_("hxd/fmt/bfnt/FontParser.hx",a8,5f,b5,51),30,HX_("hxd.fmt.bfnt.FontParser",d7,d3,9d,fc),HX_("parse",33,90,55,bd)));
HXDLIN(  49)								{
HXLINE(  49)									font->tilePath = ( ::haxe::io::Path_obj::__alloc( HX_CTX ,path)->file + HX_(".png",3b,2d,bd,1e));
HXDLIN(  49)									 ::Dynamic resolveTile1 = resolveTile;
HXDLIN(  49)									tile[0] = ( ( ::h2d::Tile)(resolveTile1(::haxe::io::Path_obj::withExtension(path,HX_("png",a9,5c,55,00)))) );
            								}
            							}
            							else {
            								HX_STACK_DO_THROW(_hx_e);
            							}
            						}
HXDLIN(  49)						return tile->__get(0).StaticCast<  ::h2d::Tile >();
            					}
            					HX_END_LOCAL_FUNC1(return)

HXLINE(  49)					return  ::hxd::fmt::bfnt::Reader_obj::__alloc( HX_CTX , ::haxe::io::BytesInput_obj::__alloc( HX_CTX ,bytes,null(),null()))->read( ::Dynamic(new _hx_Closure_0(path,tile,resolveTile,font)));
            				}
            				break;
            				case (int)1836597052: case (int)1852794428: {
HXLINE(  53)					 ::Xml xml = ::Xml_obj::parse(bytes->toString());
HXLINE(  54)					 ::Xml x = xml->firstElement();
HXDLIN(  54)					bool _hx_tmp;
HXDLIN(  54)					if ((x->nodeType != ::Xml_obj::Document)) {
HXLINE(  54)						_hx_tmp = (x->nodeType != ::Xml_obj::Element);
            					}
            					else {
HXLINE(  54)						_hx_tmp = false;
            					}
HXDLIN(  54)					if (_hx_tmp) {
HXLINE(  54)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid nodeType ",3b,e0,cb,e1) + ::_Xml::XmlType_Impl__obj::toString(x->nodeType))));
            					}
HXDLIN(  54)					 ::Xml this1 = x;
HXDLIN(  54)					 ::Xml xml1 = this1;
HXLINE(  55)					if (::haxe::xml::_Access::HasNodeAccess_Impl__obj::resolve(xml1,HX_("info",6e,38,bb,45))) {
HXLINE(  57)						 ::Xml _hx_tmp = ::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(xml1,HX_("info",6e,38,bb,45));
HXDLIN(  57)						font->name = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(_hx_tmp,HX_("face",9d,b4,b5,43));
HXLINE(  58)						::String _hx_tmp1 = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(xml1,HX_("info",6e,38,bb,45)),HX_("size",c1,a0,53,4c));
HXDLIN(  58)						font->size = (font->initSize = ( (int)(::Std_obj::parseInt(_hx_tmp1)) ));
HXLINE(  59)						::String _hx_tmp2 = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(xml1,HX_("common",2b,75,2e,c7)),HX_("lineHeight",fb,02,f4,d6));
HXDLIN(  59)						font->lineHeight = ( (Float)(::Std_obj::parseInt(_hx_tmp2)) );
HXLINE(  60)						::String _hx_tmp3 = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(xml1,HX_("common",2b,75,2e,c7)),HX_("base",11,e8,10,41));
HXDLIN(  60)						font->baseLine = ( (Float)(::Std_obj::parseInt(_hx_tmp3)) );
HXLINE(  62)						{
HXLINE(  62)							 ::Dynamic p = ::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(xml1,HX_("pages",44,2b,4d,bd))->elements();
HXDLIN(  62)							while(( (bool)(p->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  62)								 ::Xml p1 = ( ( ::Xml)(p->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  63)								if ((::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(p1,HX_("id",db,5b,00,00)) == HX_("0",30,00,00,00))) {
HXLINE(  64)									::String tilePath = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(p1,HX_("file",7c,ce,bb,43));
HXDLIN(  64)									try {
            										HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  64)										font->tilePath = tilePath;
HXDLIN(  64)										 ::Dynamic resolveTile1 = resolveTile;
HXDLIN(  64)										tile[0] = ( ( ::h2d::Tile)(resolveTile1(::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,::haxe::io::Path_obj::directory(path))->init(1,tilePath)))) );
            									} catch( ::Dynamic _hx_e) {
            										if (_hx_e.IsClass<  ::Dynamic >() ){
            											HX_STACK_BEGIN_CATCH
            											 ::Dynamic _g = _hx_e;
HXLINE(  29)											{
HXLINE(  29)												null();
            											}
HXLINE(  64)											::haxe::Log_obj::trace(((HX_("Warning: Could not find referenced font texture at \"",3d,45,d3,b7) + tilePath) + HX_("\", trying to resolve same name as fnt!",52,eb,fb,13)),::hx::SourceInfo(HX_("hxd/fmt/bfnt/FontParser.hx",a8,5f,b5,51),30,HX_("hxd.fmt.bfnt.FontParser",d7,d3,9d,fc),HX_("parse",33,90,55,bd)));
HXDLIN(  64)											{
HXLINE(  64)												font->tilePath = ( ::haxe::io::Path_obj::__alloc( HX_CTX ,path)->file + HX_(".png",3b,2d,bd,1e));
HXDLIN(  64)												 ::Dynamic resolveTile1 = resolveTile;
HXDLIN(  64)												tile[0] = ( ( ::h2d::Tile)(resolveTile1(::haxe::io::Path_obj::withExtension(path,HX_("png",a9,5c,55,00)))) );
            											}
            										}
            										else {
            											HX_STACK_DO_THROW(_hx_e);
            										}
            									}
            								}
            								else {
HXLINE(  66)									::haxe::Log_obj::trace(HX_("Warning: BMF format only supports one page at the moment.",bf,d0,43,a7),::hx::SourceInfo(HX_("hxd/fmt/bfnt/FontParser.hx",a8,5f,b5,51),66,HX_("hxd.fmt.bfnt.FontParser",d7,d3,9d,fc),HX_("parse",33,90,55,bd)));
            								}
            							}
            						}
HXLINE(  70)						 ::Dynamic chars = ::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(xml1,HX_("chars",dd,9c,b3,45))->elements();
HXLINE(  71)						{
HXLINE(  71)							 ::Dynamic c = chars;
HXDLIN(  71)							while(( (bool)(c->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  71)								 ::Xml c1 = ( ( ::Xml)(c->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  72)								 ::h2d::Tile tile1 = tile->__get(0).StaticCast<  ::h2d::Tile >();
HXDLIN(  72)								 ::Dynamic t = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(c1,HX_("x",78,00,00,00)));
HXDLIN(  72)								 ::Dynamic t1 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(c1,HX_("y",79,00,00,00)));
HXDLIN(  72)								 ::Dynamic t2 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(c1,HX_("width",06,b6,62,ca)));
HXDLIN(  72)								 ::Dynamic t3 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(c1,HX_("height",e7,07,4c,02)));
HXDLIN(  72)								 ::Dynamic t4 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(c1,HX_("xoffset",0b,42,4f,de)));
HXDLIN(  72)								 ::h2d::Tile t5 = tile1->sub(( (Float)(t) ),( (Float)(t1) ),( (Float)(t2) ),( (Float)(t3) ),t4,::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(c1,HX_("yoffset",cc,b8,e4,07))));
HXLINE(  73)								 ::h2d::FontChar fc =  ::h2d::FontChar_obj::__alloc( HX_CTX ,t5,( (Float)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(c1,HX_("xadvance",0a,87,b1,be)))) ));
HXLINE(  74)								 ::Dynamic kerns = ::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(xml1,HX_("kernings",27,b8,8b,80))->elements();
HXLINE(  75)								{
HXLINE(  75)									 ::Dynamic k = kerns;
HXDLIN(  75)									while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  75)										 ::Xml k1 = ( ( ::Xml)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  76)										::String _hx_tmp = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(k1,HX_("second",74,cf,47,64));
HXDLIN(  76)										if ((_hx_tmp == ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(c1,HX_("id",db,5b,00,00)))) {
HXLINE(  77)											 ::Dynamic _hx_tmp = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(k1,HX_("first",30,78,9d,00)));
HXDLIN(  77)											fc->addKerning(( (int)(_hx_tmp) ),( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(k1,HX_("amount",d8,11,03,d5)))) ));
            										}
            									}
            								}
HXLINE(  79)								glyphs->set(( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(c1,HX_("id",db,5b,00,00)))) ),fc);
            							}
            						}
            					}
            					else {
HXLINE(  83)						{
HXLINE(  83)							font->tilePath = ( ::haxe::io::Path_obj::__alloc( HX_CTX ,path)->file + HX_(".png",3b,2d,bd,1e));
HXDLIN(  83)							 ::Dynamic resolveTile1 = resolveTile;
HXDLIN(  83)							tile[0] = ( ( ::h2d::Tile)(resolveTile1(::haxe::io::Path_obj::withExtension(path,HX_("png",a9,5c,55,00)))) );
            						}
HXLINE(  85)						font->name = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(xml1,HX_("family",a4,5f,a1,ea));
HXLINE(  86)						::String _hx_tmp = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(xml1,HX_("size",c1,a0,53,4c));
HXDLIN(  86)						font->size = (font->initSize = ( (int)(::Std_obj::parseInt(_hx_tmp)) ));
HXLINE(  87)						::String _hx_tmp1 = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(xml1,HX_("height",e7,07,4c,02));
HXDLIN(  87)						font->lineHeight = ( (Float)(::Std_obj::parseInt(_hx_tmp1)) );
HXLINE(  91)						::Array< ::Dynamic> kernings = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  92)						{
HXLINE(  92)							 ::Dynamic c = xml1->elements();
HXDLIN(  92)							while(( (bool)(c->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  92)								 ::Xml c1 = ( ( ::Xml)(c->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  93)								::Array< ::String > r = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(c1,HX_("rect",24,4d,a7,4b)).split(HX_(" ",20,00,00,00));
HXLINE(  94)								::Array< ::String > o = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(c1,HX_("offset",93,97,3f,60)).split(HX_(" ",20,00,00,00));
HXLINE(  95)								 ::h2d::Tile tile1 = tile->__get(0).StaticCast<  ::h2d::Tile >();
HXDLIN(  95)								 ::Dynamic t = ::Std_obj::parseInt(r->__get(0));
HXDLIN(  95)								 ::Dynamic t1 = ::Std_obj::parseInt(r->__get(1));
HXDLIN(  95)								 ::Dynamic t2 = ::Std_obj::parseInt(r->__get(2));
HXDLIN(  95)								 ::Dynamic t3 = ::Std_obj::parseInt(r->__get(3));
HXDLIN(  95)								 ::Dynamic t4 = ::Std_obj::parseInt(o->__get(0));
HXDLIN(  95)								 ::h2d::Tile t5 = tile1->sub(( (Float)(t) ),( (Float)(t1) ),( (Float)(t2) ),( (Float)(t3) ),t4,::Std_obj::parseInt(o->__get(1)));
HXLINE(  96)								 ::h2d::FontChar fc =  ::h2d::FontChar_obj::__alloc( HX_CTX ,t5,( (Float)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(c1,HX_("width",06,b6,62,ca)))) ));
HXLINE(  97)								::String code = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(c1,HX_("code",2d,b1,c4,41));
HXDLIN(  97)								int code1;
HXDLIN(  97)								if (::StringTools_obj::startsWith(code,HX_("&#",3d,21,00,00))) {
HXLINE(  97)									code1 = ( (int)(::Std_obj::parseInt(code.substr(2,(code.length - 3)))) );
            								}
            								else {
HXLINE(  97)									code1 = ( (int)(code.charCodeAt(0)) );
            								}
HXLINE(  98)								{
HXLINE(  98)									 ::Dynamic k = c1->elements();
HXDLIN(  98)									while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  98)										 ::Xml k1 = ( ( ::Xml)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  99)										::String code = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(k1,HX_("id",db,5b,00,00));
HXDLIN(  99)										int next;
HXDLIN(  99)										if (::StringTools_obj::startsWith(code,HX_("&#",3d,21,00,00))) {
HXLINE(  99)											next = ( (int)(::Std_obj::parseInt(code.substr(2,(code.length - 3)))) );
            										}
            										else {
HXLINE(  99)											next = ( (int)(code.charCodeAt(0)) );
            										}
HXLINE( 100)										 ::Dynamic adv = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(k1,HX_("advance",82,08,0c,ef)));
HXLINE( 101)										if (glyphs->exists(next)) {
HXLINE( 102)											( ( ::h2d::FontChar)(glyphs->get(next)) )->addKerning(code1,( (int)(adv) ));
            										}
            										else {
HXLINE( 104)											kernings->push( ::Dynamic(::hx::Anon_obj::Create(3)
            												->setFixed(0,HX_("adv",33,f2,49,00),adv)
            												->setFixed(1,HX_("next",f3,84,02,49),next)
            												->setFixed(2,HX_("prev",f3,be,5e,4a),code1)));
            										}
            									}
            								}
HXLINE( 106)								glyphs->set(code1,fc);
            							}
            						}
HXLINE( 108)						{
HXLINE( 108)							int _g = 0;
HXDLIN( 108)							while((_g < kernings->length)){
HXLINE( 108)								 ::Dynamic k = kernings->__get(_g);
HXDLIN( 108)								_g = (_g + 1);
HXLINE( 109)								 ::h2d::FontChar g = ( ( ::h2d::FontChar)(glyphs->get( ::Dynamic(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)))) );
HXLINE( 110)								if (::hx::IsNull( g )) {
HXLINE( 110)									continue;
            								}
HXLINE( 111)								g->addKerning(( (int)(k->__Field(HX_("prev",f3,be,5e,4a),::hx::paccDynamic)) ),( (int)(k->__Field(HX_("adv",33,f2,49,00),::hx::paccDynamic)) ));
            							}
            						}
            					}
            				}
            				break;
            				case (int)1868983913: {
HXLINE( 117)					::Array< ::String > lines = bytes->toString().split(HX_("\n",0a,00,00,00));
HXLINE( 120)					 ::EReg reg =  ::EReg_obj::__alloc( HX_CTX ,HX_(" *?([0-9a-zA-Z]+)=(\"[^\"]+\"|.+?)(?:[ \r]|$)",07,b2,56,49),HX_("",00,00,00,00));
HXLINE( 121)					int idx;
HXLINE( 136)					int pageCount = 0;
HXLINE( 138)					{
HXLINE( 138)						int _g = 0;
HXDLIN( 138)						while((_g < lines->length)){
HXLINE( 138)							::String line = lines->__get(_g);
HXDLIN( 138)							_g = (_g + 1);
HXLINE( 139)							idx = line.indexOf(HX_(" ",20,00,00,00),null());
HXLINE( 140)							::String _hx_switch_0 = line.substr(0,idx);
            							if (  (_hx_switch_0==HX_("char",d6,5e,bf,41)) ){
HXLINE( 169)								int id = 0;
HXDLIN( 169)								int x = 0;
HXDLIN( 169)								int y = 0;
HXDLIN( 169)								int width = 0;
HXDLIN( 169)								int height = 0;
HXDLIN( 169)								int xoffset = 0;
HXDLIN( 169)								int yoffset = 0;
HXDLIN( 169)								int xadvance = 0;
HXLINE( 170)								while(true){
HXLINE( 170)									bool _hx_tmp;
HXDLIN( 170)									if ((idx < line.length)) {
HXLINE( 170)										_hx_tmp = reg->matchSub(line,idx,null());
            									}
            									else {
HXLINE( 170)										_hx_tmp = false;
            									}
HXDLIN( 170)									if (!(_hx_tmp)) {
HXLINE( 170)										goto _hx_goto_11;
            									}
HXLINE( 171)									::String _hx_switch_1 = reg->matched(1);
            									if (  (_hx_switch_1==HX_("height",e7,07,4c,02)) ){
HXLINE( 176)										::String v = reg->matched(2);
HXDLIN( 176)										::String height1;
HXDLIN( 176)										if (::hx::IsEq( v.charCodeAt(0),34 )) {
HXLINE( 176)											height1 = v.substring(1,(v.length - 1));
            										}
            										else {
HXLINE( 176)											height1 = v;
            										}
HXDLIN( 176)										height = ( (int)(::Std_obj::parseInt(height1)) );
HXDLIN( 176)										goto _hx_goto_12;
            									}
            									if (  (_hx_switch_1==HX_("id",db,5b,00,00)) ){
HXLINE( 172)										::String v = reg->matched(2);
HXDLIN( 172)										::String id1;
HXDLIN( 172)										if (::hx::IsEq( v.charCodeAt(0),34 )) {
HXLINE( 172)											id1 = v.substring(1,(v.length - 1));
            										}
            										else {
HXLINE( 172)											id1 = v;
            										}
HXDLIN( 172)										id = ( (int)(::Std_obj::parseInt(id1)) );
HXDLIN( 172)										goto _hx_goto_12;
            									}
            									if (  (_hx_switch_1==HX_("width",06,b6,62,ca)) ){
HXLINE( 175)										::String v = reg->matched(2);
HXDLIN( 175)										::String width1;
HXDLIN( 175)										if (::hx::IsEq( v.charCodeAt(0),34 )) {
HXLINE( 175)											width1 = v.substring(1,(v.length - 1));
            										}
            										else {
HXLINE( 175)											width1 = v;
            										}
HXDLIN( 175)										width = ( (int)(::Std_obj::parseInt(width1)) );
HXDLIN( 175)										goto _hx_goto_12;
            									}
            									if (  (_hx_switch_1==HX_("x",78,00,00,00)) ){
HXLINE( 173)										::String v = reg->matched(2);
HXDLIN( 173)										::String x1;
HXDLIN( 173)										if (::hx::IsEq( v.charCodeAt(0),34 )) {
HXLINE( 173)											x1 = v.substring(1,(v.length - 1));
            										}
            										else {
HXLINE( 173)											x1 = v;
            										}
HXDLIN( 173)										x = ( (int)(::Std_obj::parseInt(x1)) );
HXDLIN( 173)										goto _hx_goto_12;
            									}
            									if (  (_hx_switch_1==HX_("xadvance",0a,87,b1,be)) ){
HXLINE( 179)										::String v = reg->matched(2);
HXDLIN( 179)										::String xadvance1;
HXDLIN( 179)										if (::hx::IsEq( v.charCodeAt(0),34 )) {
HXLINE( 179)											xadvance1 = v.substring(1,(v.length - 1));
            										}
            										else {
HXLINE( 179)											xadvance1 = v;
            										}
HXDLIN( 179)										xadvance = ( (int)(::Std_obj::parseInt(xadvance1)) );
HXDLIN( 179)										goto _hx_goto_12;
            									}
            									if (  (_hx_switch_1==HX_("xoffset",0b,42,4f,de)) ){
HXLINE( 177)										::String v = reg->matched(2);
HXDLIN( 177)										::String xoffset1;
HXDLIN( 177)										if (::hx::IsEq( v.charCodeAt(0),34 )) {
HXLINE( 177)											xoffset1 = v.substring(1,(v.length - 1));
            										}
            										else {
HXLINE( 177)											xoffset1 = v;
            										}
HXDLIN( 177)										xoffset = ( (int)(::Std_obj::parseInt(xoffset1)) );
HXDLIN( 177)										goto _hx_goto_12;
            									}
            									if (  (_hx_switch_1==HX_("y",79,00,00,00)) ){
HXLINE( 174)										::String v = reg->matched(2);
HXDLIN( 174)										::String y1;
HXDLIN( 174)										if (::hx::IsEq( v.charCodeAt(0),34 )) {
HXLINE( 174)											y1 = v.substring(1,(v.length - 1));
            										}
            										else {
HXLINE( 174)											y1 = v;
            										}
HXDLIN( 174)										y = ( (int)(::Std_obj::parseInt(y1)) );
HXDLIN( 174)										goto _hx_goto_12;
            									}
            									if (  (_hx_switch_1==HX_("yoffset",cc,b8,e4,07)) ){
HXLINE( 178)										::String v = reg->matched(2);
HXDLIN( 178)										::String yoffset1;
HXDLIN( 178)										if (::hx::IsEq( v.charCodeAt(0),34 )) {
HXLINE( 178)											yoffset1 = v.substring(1,(v.length - 1));
            										}
            										else {
HXLINE( 178)											yoffset1 = v;
            										}
HXDLIN( 178)										yoffset = ( (int)(::Std_obj::parseInt(yoffset1)) );
HXDLIN( 178)										goto _hx_goto_12;
            									}
            									_hx_goto_12:;
HXLINE( 181)									{
HXLINE( 181)										 ::Dynamic pos = reg->matchedPos();
HXDLIN( 181)										idx = ( (int)((pos->__Field(HX_("pos",94,5d,55,00),::hx::paccDynamic) + pos->__Field(HX_("len",d5,4b,52,00),::hx::paccDynamic))) );
            									}
            								}
            								_hx_goto_11:;
HXLINE( 183)								 ::h2d::Tile t = tile->__get(0).StaticCast<  ::h2d::Tile >()->sub(( (Float)(x) ),( (Float)(y) ),( (Float)(width) ),( (Float)(height) ),xoffset,yoffset);
HXLINE( 184)								 ::h2d::FontChar fc =  ::h2d::FontChar_obj::__alloc( HX_CTX ,t,( (Float)(xadvance) ));
HXLINE( 185)								glyphs->set(id,fc);
HXLINE( 168)								goto _hx_goto_10;
            							}
            							if (  (_hx_switch_0==HX_("common",2b,75,2e,c7)) ){
HXLINE( 151)								while(true){
HXLINE( 151)									bool _hx_tmp;
HXDLIN( 151)									if ((idx < line.length)) {
HXLINE( 151)										_hx_tmp = reg->matchSub(line,idx,null());
            									}
            									else {
HXLINE( 151)										_hx_tmp = false;
            									}
HXDLIN( 151)									if (!(_hx_tmp)) {
HXLINE( 151)										goto _hx_goto_13;
            									}
HXLINE( 152)									::String _hx_switch_2 = reg->matched(1);
            									if (  (_hx_switch_2==HX_("base",11,e8,10,41)) ){
HXLINE( 154)										::String v = reg->matched(2);
HXDLIN( 154)										::String _hx_tmp;
HXDLIN( 154)										if (::hx::IsEq( v.charCodeAt(0),34 )) {
HXLINE( 154)											_hx_tmp = v.substring(1,(v.length - 1));
            										}
            										else {
HXLINE( 154)											_hx_tmp = v;
            										}
HXDLIN( 154)										font->baseLine = ( (Float)(( (int)(::Std_obj::parseInt(_hx_tmp)) )) );
HXDLIN( 154)										goto _hx_goto_14;
            									}
            									if (  (_hx_switch_2==HX_("lineHeight",fb,02,f4,d6)) ){
HXLINE( 153)										::String v = reg->matched(2);
HXDLIN( 153)										::String _hx_tmp;
HXDLIN( 153)										if (::hx::IsEq( v.charCodeAt(0),34 )) {
HXLINE( 153)											_hx_tmp = v.substring(1,(v.length - 1));
            										}
            										else {
HXLINE( 153)											_hx_tmp = v;
            										}
HXDLIN( 153)										font->lineHeight = ( (Float)(( (int)(::Std_obj::parseInt(_hx_tmp)) )) );
HXDLIN( 153)										goto _hx_goto_14;
            									}
            									if (  (_hx_switch_2==HX_("pages",44,2b,4d,bd)) ){
HXLINE( 156)										::String v = reg->matched(2);
HXDLIN( 156)										::String pageCount1;
HXDLIN( 156)										if (::hx::IsEq( v.charCodeAt(0),34 )) {
HXLINE( 156)											pageCount1 = v.substring(1,(v.length - 1));
            										}
            										else {
HXLINE( 156)											pageCount1 = v;
            										}
HXDLIN( 156)										pageCount = ( (int)(::Std_obj::parseInt(pageCount1)) );
HXLINE( 157)										if ((pageCount != 1)) {
HXLINE( 157)											::haxe::Log_obj::trace(HX_("Warning: BMF format only supports one page at the moment.",bf,d0,43,a7),::hx::SourceInfo(HX_("hxd/fmt/bfnt/FontParser.hx",a8,5f,b5,51),157,HX_("hxd.fmt.bfnt.FontParser",d7,d3,9d,fc),HX_("parse",33,90,55,bd)));
            										}
HXLINE( 155)										goto _hx_goto_14;
            									}
            									_hx_goto_14:;
HXLINE( 159)									{
HXLINE( 159)										 ::Dynamic pos = reg->matchedPos();
HXDLIN( 159)										idx = ( (int)((pos->__Field(HX_("pos",94,5d,55,00),::hx::paccDynamic) + pos->__Field(HX_("len",d5,4b,52,00),::hx::paccDynamic))) );
            									}
            								}
            								_hx_goto_13:;
HXLINE( 151)								goto _hx_goto_10;
            							}
            							if (  (_hx_switch_0==HX_("info",6e,38,bb,45)) ){
HXLINE( 143)								while(true){
HXLINE( 143)									bool _hx_tmp;
HXDLIN( 143)									if ((idx < line.length)) {
HXLINE( 143)										_hx_tmp = reg->matchSub(line,idx,null());
            									}
            									else {
HXLINE( 143)										_hx_tmp = false;
            									}
HXDLIN( 143)									if (!(_hx_tmp)) {
HXLINE( 143)										goto _hx_goto_15;
            									}
HXLINE( 144)									::String _hx_switch_3 = reg->matched(1);
            									if (  (_hx_switch_3==HX_("face",9d,b4,b5,43)) ){
HXLINE( 145)										::String v = reg->matched(2);
HXDLIN( 145)										::String _hx_tmp;
HXDLIN( 145)										if (::hx::IsEq( v.charCodeAt(0),34 )) {
HXLINE( 145)											_hx_tmp = v.substring(1,(v.length - 1));
            										}
            										else {
HXLINE( 145)											_hx_tmp = v;
            										}
HXDLIN( 145)										font->name = _hx_tmp;
HXDLIN( 145)										goto _hx_goto_16;
            									}
            									if (  (_hx_switch_3==HX_("size",c1,a0,53,4c)) ){
HXLINE( 146)										::String v = reg->matched(2);
HXDLIN( 146)										::String _hx_tmp;
HXDLIN( 146)										if (::hx::IsEq( v.charCodeAt(0),34 )) {
HXLINE( 146)											_hx_tmp = v.substring(1,(v.length - 1));
            										}
            										else {
HXLINE( 146)											_hx_tmp = v;
            										}
HXDLIN( 146)										font->size = (font->initSize = ( (int)(::Std_obj::parseInt(_hx_tmp)) ));
HXDLIN( 146)										goto _hx_goto_16;
            									}
            									_hx_goto_16:;
HXLINE( 148)									{
HXLINE( 148)										 ::Dynamic pos = reg->matchedPos();
HXDLIN( 148)										idx = ( (int)((pos->__Field(HX_("pos",94,5d,55,00),::hx::paccDynamic) + pos->__Field(HX_("len",d5,4b,52,00),::hx::paccDynamic))) );
            									}
            								}
            								_hx_goto_15:;
HXLINE( 143)								goto _hx_goto_10;
            							}
            							if (  (_hx_switch_0==HX_("kerning",cc,ba,37,b0)) ){
HXLINE( 187)								int first = 0;
HXDLIN( 187)								int second = 0;
HXDLIN( 187)								int advance = 0;
HXLINE( 188)								while(true){
HXLINE( 188)									bool _hx_tmp;
HXDLIN( 188)									if ((idx < line.length)) {
HXLINE( 188)										_hx_tmp = reg->matchSub(line,idx,null());
            									}
            									else {
HXLINE( 188)										_hx_tmp = false;
            									}
HXDLIN( 188)									if (!(_hx_tmp)) {
HXLINE( 188)										goto _hx_goto_17;
            									}
HXLINE( 189)									::String _hx_switch_4 = reg->matched(1);
            									if (  (_hx_switch_4==HX_("amount",d8,11,03,d5)) ){
HXLINE( 192)										::String v = reg->matched(2);
HXDLIN( 192)										::String advance1;
HXDLIN( 192)										if (::hx::IsEq( v.charCodeAt(0),34 )) {
HXLINE( 192)											advance1 = v.substring(1,(v.length - 1));
            										}
            										else {
HXLINE( 192)											advance1 = v;
            										}
HXDLIN( 192)										advance = ( (int)(::Std_obj::parseInt(advance1)) );
HXDLIN( 192)										goto _hx_goto_18;
            									}
            									if (  (_hx_switch_4==HX_("first",30,78,9d,00)) ){
HXLINE( 190)										::String v = reg->matched(2);
HXDLIN( 190)										::String first1;
HXDLIN( 190)										if (::hx::IsEq( v.charCodeAt(0),34 )) {
HXLINE( 190)											first1 = v.substring(1,(v.length - 1));
            										}
            										else {
HXLINE( 190)											first1 = v;
            										}
HXDLIN( 190)										first = ( (int)(::Std_obj::parseInt(first1)) );
HXDLIN( 190)										goto _hx_goto_18;
            									}
            									if (  (_hx_switch_4==HX_("second",74,cf,47,64)) ){
HXLINE( 191)										::String v = reg->matched(2);
HXDLIN( 191)										::String second1;
HXDLIN( 191)										if (::hx::IsEq( v.charCodeAt(0),34 )) {
HXLINE( 191)											second1 = v.substring(1,(v.length - 1));
            										}
            										else {
HXLINE( 191)											second1 = v;
            										}
HXDLIN( 191)										second = ( (int)(::Std_obj::parseInt(second1)) );
HXDLIN( 191)										goto _hx_goto_18;
            									}
            									_hx_goto_18:;
HXLINE( 194)									{
HXLINE( 194)										 ::Dynamic pos = reg->matchedPos();
HXDLIN( 194)										idx = ( (int)((pos->__Field(HX_("pos",94,5d,55,00),::hx::paccDynamic) + pos->__Field(HX_("len",d5,4b,52,00),::hx::paccDynamic))) );
            									}
            								}
            								_hx_goto_17:;
HXLINE( 196)								 ::h2d::FontChar fc = ( ( ::h2d::FontChar)(glyphs->get(second)) );
HXLINE( 197)								if (::hx::IsNotNull( fc )) {
HXLINE( 198)									fc->addKerning(first,advance);
            								}
HXLINE( 186)								goto _hx_goto_10;
            							}
            							if (  (_hx_switch_0==HX_("page",4f,da,51,4a)) ){
HXLINE( 162)								while(true){
HXLINE( 162)									bool _hx_tmp;
HXDLIN( 162)									if ((idx < line.length)) {
HXLINE( 162)										_hx_tmp = reg->matchSub(line,idx,null());
            									}
            									else {
HXLINE( 162)										_hx_tmp = false;
            									}
HXDLIN( 162)									if (!(_hx_tmp)) {
HXLINE( 162)										goto _hx_goto_19;
            									}
HXLINE( 163)									if ((reg->matched(1) == HX_("file",7c,ce,bb,43))) {
HXLINE( 164)										::String v = reg->matched(2);
HXDLIN( 164)										::String tilePath;
HXDLIN( 164)										if (::hx::IsEq( v.charCodeAt(0),34 )) {
HXLINE( 164)											tilePath = v.substring(1,(v.length - 1));
            										}
            										else {
HXLINE( 164)											tilePath = v;
            										}
HXDLIN( 164)										try {
            											HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 164)											font->tilePath = tilePath;
HXDLIN( 164)											 ::Dynamic resolveTile1 = resolveTile;
HXDLIN( 164)											tile[0] = ( ( ::h2d::Tile)(resolveTile1(::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,::haxe::io::Path_obj::directory(path))->init(1,tilePath)))) );
            										} catch( ::Dynamic _hx_e) {
            											if (_hx_e.IsClass<  ::Dynamic >() ){
            												HX_STACK_BEGIN_CATCH
            												 ::Dynamic _g = _hx_e;
HXLINE(  29)												{
HXLINE(  29)													null();
            												}
HXLINE( 164)												::haxe::Log_obj::trace(((HX_("Warning: Could not find referenced font texture at \"",3d,45,d3,b7) + tilePath) + HX_("\", trying to resolve same name as fnt!",52,eb,fb,13)),::hx::SourceInfo(HX_("hxd/fmt/bfnt/FontParser.hx",a8,5f,b5,51),30,HX_("hxd.fmt.bfnt.FontParser",d7,d3,9d,fc),HX_("parse",33,90,55,bd)));
HXDLIN( 164)												{
HXLINE( 164)													font->tilePath = ( ::haxe::io::Path_obj::__alloc( HX_CTX ,path)->file + HX_(".png",3b,2d,bd,1e));
HXDLIN( 164)													 ::Dynamic resolveTile1 = resolveTile;
HXDLIN( 164)													tile[0] = ( ( ::h2d::Tile)(resolveTile1(::haxe::io::Path_obj::withExtension(path,HX_("png",a9,5c,55,00)))) );
            												}
            											}
            											else {
            												HX_STACK_DO_THROW(_hx_e);
            											}
            										}
            									}
HXLINE( 166)									{
HXLINE( 166)										 ::Dynamic pos = reg->matchedPos();
HXDLIN( 166)										idx = ( (int)((pos->__Field(HX_("pos",94,5d,55,00),::hx::paccDynamic) + pos->__Field(HX_("len",d5,4b,52,00),::hx::paccDynamic))) );
            									}
            								}
            								_hx_goto_19:;
HXLINE( 162)								goto _hx_goto_10;
            							}
            							_hx_goto_10:;
            						}
            					}
            				}
            				break;
            				default:{
HXLINE( 254)					int sign = _g;
HXLINE( 255)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unknown font signature ",23,28,b9,e1) + ::StringTools_obj::hex(sign,8))));
            				}
            			}
            		}
HXLINE( 257)		if (::hx::IsNull( ( ( ::h2d::FontChar)(glyphs->get(32)) ) )) {
HXLINE( 258)			 ::h2d::Tile value = tile->__get(0).StaticCast<  ::h2d::Tile >()->sub(( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),null(),null());
HXDLIN( 258)			glyphs->set(32, ::h2d::FontChar_obj::__alloc( HX_CTX ,value,( (Float)((font->size >> 1)) )));
            		}
HXLINE( 260)		font->tile = tile->__get(0).StaticCast<  ::h2d::Tile >();
HXLINE( 262)		if ((font->baseLine == 0)) {
HXLINE( 263)			Float padding = ( (Float)(0) );
HXLINE( 264)			 ::h2d::FontChar space = ( ( ::h2d::FontChar)(glyphs->get(32)) );
HXLINE( 265)			if (::hx::IsNotNull( space )) {
HXLINE( 266)				padding = (space->t->height * ((Float).5));
            			}
HXLINE( 268)			 ::h2d::FontChar a = ( ( ::h2d::FontChar)(glyphs->get(65)) );
HXLINE( 269)			if (::hx::IsNull( a )) {
HXLINE( 270)				a = ( ( ::h2d::FontChar)(glyphs->get(97)) );
            			}
HXLINE( 271)			if (::hx::IsNull( a )) {
HXLINE( 272)				a = ( ( ::h2d::FontChar)(glyphs->get(48)) );
            			}
HXLINE( 273)			if (::hx::IsNull( a )) {
HXLINE( 274)				font->baseLine = ((font->lineHeight - ( (Float)(2) )) - padding);
            			}
            			else {
HXLINE( 276)				font->baseLine = ((a->t->dy + a->t->height) - padding);
            			}
            		}
HXLINE( 279)		 ::h2d::FontChar fallback = ( ( ::h2d::FontChar)(glyphs->get(65533)) );
HXLINE( 280)		if (::hx::IsNull( fallback )) {
HXLINE( 281)			fallback = ( ( ::h2d::FontChar)(glyphs->get(9633)) );
            		}
HXLINE( 282)		if (::hx::IsNull( fallback )) {
HXLINE( 283)			fallback = ( ( ::h2d::FontChar)(glyphs->get(63)) );
            		}
HXLINE( 284)		if (::hx::IsNotNull( fallback )) {
HXLINE( 285)			font->defaultChar = fallback;
            		}
HXLINE( 287)		return font;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FontParser_obj,parse,return )


FontParser_obj::FontParser_obj()
{
}

bool FontParser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FontParser_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FontParser_obj_sStaticStorageInfo = 0;
#endif

::hx::Class FontParser_obj::__mClass;

static ::String FontParser_obj_sStaticFields[] = {
	HX_("parse",33,90,55,bd),
	::String(null())
};

void FontParser_obj::__register()
{
	FontParser_obj _hx_dummy;
	FontParser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.bfnt.FontParser",d7,d3,9d,fc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FontParser_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FontParser_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FontParser_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FontParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FontParser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fmt
} // end namespace bfnt
