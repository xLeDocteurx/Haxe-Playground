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
#ifndef INCLUDED_h2d_Kerning
#include <h2d/Kerning.h>
#endif
#ifndef INCLUDED_h2d_Tile
#include <h2d/Tile.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_hxd_Charset
#include <hxd/Charset.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9ae5a50562143632_151_new,"h2d.Font","new",0x75bf7af5,"h2d.Font.new","h2d/Font.hx",151,0x32d64c3a)
HX_LOCAL_STACK_FRAME(_hx_pos_9ae5a50562143632_222_getChar,"h2d.Font","getChar",0x047f27a1,"h2d.Font.getChar","h2d/Font.hx",222,0x32d64c3a)
HX_LOCAL_STACK_FRAME(_hx_pos_9ae5a50562143632_238_setOffset,"h2d.Font","setOffset",0x0c6c552a,"h2d.Font.setOffset","h2d/Font.hx",238,0x32d64c3a)
HX_LOCAL_STACK_FRAME(_hx_pos_9ae5a50562143632_253_clone,"h2d.Font","clone",0xaffe4d32,"h2d.Font.clone","h2d/Font.hx",253,0x32d64c3a)
HX_LOCAL_STACK_FRAME(_hx_pos_9ae5a50562143632_279_resizeTo,"h2d.Font","resizeTo",0xe6b5e1da,"h2d.Font.resizeTo","h2d/Font.hx",279,0x32d64c3a)
HX_LOCAL_STACK_FRAME(_hx_pos_9ae5a50562143632_303_hasChar,"h2d.Font","hasChar",0x01409865,"h2d.Font.hasChar","h2d/Font.hx",303,0x32d64c3a)
HX_LOCAL_STACK_FRAME(_hx_pos_9ae5a50562143632_310_dispose,"h2d.Font","dispose",0xab8999b4,"h2d.Font.dispose","h2d/Font.hx",310,0x32d64c3a)
namespace h2d{

void Font_obj::__construct(::String name,int size, ::h2d::FontType type){
            	HX_GC_STACKFRAME(&_hx_pos_9ae5a50562143632_151_new)
HXLINE( 193)		this->offsetY = ((Float)0);
HXLINE( 192)		this->offsetX = ((Float)0);
HXLINE( 202)		this->name = name;
HXLINE( 203)		this->size = size;
HXLINE( 204)		this->initSize = size;
HXLINE( 205)		this->glyphs =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 206)		this->defaultChar = (this->nullChar =  ::h2d::FontChar_obj::__alloc( HX_CTX , ::h2d::Tile_obj::__alloc( HX_CTX ,null(),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),null(),null()),( (Float)(0) )));
HXLINE( 207)		this->charset = ::hxd::Charset_obj::getDefault();
HXLINE( 208)		if (::hx::IsNotNull( name )) {
HXLINE( 209)			this->tilePath = ::haxe::io::Path_obj::withExtension(name,HX_("png",a9,5c,55,00));
            		}
HXLINE( 210)		if (::hx::IsNull( type )) {
HXLINE( 211)			this->type = ::h2d::FontType_obj::BitmapFont_dyn();
            		}
            		else {
HXLINE( 213)			this->type = type;
            		}
            	}

Dynamic Font_obj::__CreateEmpty() { return new Font_obj; }

void *Font_obj::_hx_vtable = 0;

Dynamic Font_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Font_obj > _hx_result = new Font_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Font_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x52e3b9e5;
}

 ::h2d::FontChar Font_obj::getChar(int code){
            	HX_STACKFRAME(&_hx_pos_9ae5a50562143632_222_getChar)
HXLINE( 223)		 ::h2d::FontChar c = ( ( ::h2d::FontChar)(this->glyphs->get(code)) );
HXLINE( 224)		if (::hx::IsNull( c )) {
HXLINE( 225)			c = this->charset->resolveChar(code,this->glyphs).StaticCast<  ::h2d::FontChar >();
HXLINE( 226)			if (::hx::IsNull( c )) {
HXLINE( 227)				bool c1;
HXDLIN( 227)				if ((code != 13)) {
HXLINE( 227)					c1 = (code == 10);
            				}
            				else {
HXLINE( 227)					c1 = true;
            				}
HXDLIN( 227)				if (c1) {
HXLINE( 227)					c = this->nullChar;
            				}
            				else {
HXLINE( 227)					c = this->defaultChar;
            				}
            			}
            		}
HXLINE( 229)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,getChar,return )

void Font_obj::setOffset(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_9ae5a50562143632_238_setOffset)
HXLINE( 239)		Float dx = (x - this->offsetX);
HXLINE( 240)		Float dy = (y - this->offsetY);
HXLINE( 241)		bool _hx_tmp;
HXDLIN( 241)		if ((dx == 0)) {
HXLINE( 241)			_hx_tmp = (dy == 0);
            		}
            		else {
HXLINE( 241)			_hx_tmp = false;
            		}
HXDLIN( 241)		if (_hx_tmp) {
HXLINE( 241)			return;
            		}
HXLINE( 242)		{
HXLINE( 242)			 ::Dynamic g = this->glyphs->iterator();
HXDLIN( 242)			while(( (bool)(g->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 242)				 ::h2d::FontChar g1 = ( ( ::h2d::FontChar)(g->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 243)				 ::h2d::Tile fh = g1->t;
HXDLIN( 243)				fh->dx = (fh->dx + dx);
HXLINE( 244)				 ::h2d::Tile fh1 = g1->t;
HXDLIN( 244)				fh1->dy = (fh1->dy + dy);
            			}
            		}
HXLINE( 246)		 ::h2d::Font _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)		_hx_tmp1->offsetX = (_hx_tmp1->offsetX + dx);
HXLINE( 247)		 ::h2d::Font _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)		_hx_tmp2->offsetY = (_hx_tmp2->offsetY + dy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Font_obj,setOffset,(void))

 ::h2d::Font Font_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_9ae5a50562143632_253_clone)
HXLINE( 254)		 ::h2d::Font f =  ::h2d::Font_obj::__alloc( HX_CTX ,this->name,this->size,null());
HXLINE( 255)		f->baseLine = this->baseLine;
HXLINE( 256)		f->lineHeight = this->lineHeight;
HXLINE( 257)		f->tile = this->tile->clone();
HXLINE( 258)		f->charset = this->charset;
HXLINE( 259)		f->defaultChar = this->defaultChar->clone();
HXLINE( 260)		f->type = this->type;
HXLINE( 261)		{
HXLINE( 261)			 ::Dynamic g = this->glyphs->keys();
HXDLIN( 261)			while(( (bool)(g->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 261)				int g1 = ( (int)(g->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 262)				 ::h2d::FontChar c = ( ( ::h2d::FontChar)(this->glyphs->get(g1)) );
HXLINE( 263)				 ::h2d::FontChar c2 = c->clone();
HXLINE( 264)				if (::hx::IsInstanceEq( c,this->defaultChar )) {
HXLINE( 265)					f->defaultChar = c2;
            				}
HXLINE( 266)				f->glyphs->set(g1,c2);
            			}
            		}
HXLINE( 268)		return f;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,clone,return )

void Font_obj::resizeTo(int size){
            	HX_STACKFRAME(&_hx_pos_9ae5a50562143632_279_resizeTo)
HXLINE( 280)		Float ratio = (( (Float)(size) ) / ( (Float)(this->initSize) ));
HXLINE( 281)		{
HXLINE( 281)			 ::Dynamic c = this->glyphs->iterator();
HXDLIN( 281)			while(( (bool)(c->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 281)				 ::h2d::FontChar c1 = ( ( ::h2d::FontChar)(c->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 282)				 ::h2d::FontChar c2 = c1;
HXDLIN( 282)				c2->width = (c2->width * ratio);
HXLINE( 283)				c1->t->scaleToSize((c1->t->width * ratio),(c1->t->height * ratio));
HXLINE( 284)				 ::h2d::Tile fh = c1->t;
HXDLIN( 284)				fh->dx = (fh->dx * ratio);
HXLINE( 285)				 ::h2d::Tile fh1 = c1->t;
HXDLIN( 285)				fh1->dy = (fh1->dy * ratio);
HXLINE( 286)				 ::h2d::Kerning k = c1->kerning;
HXLINE( 287)				while(::hx::IsNotNull( k )){
HXLINE( 288)					 ::h2d::Kerning k1 = k;
HXDLIN( 288)					k1->offset = (k1->offset * ratio);
HXLINE( 289)					k = k->next;
            				}
            			}
            		}
HXLINE( 292)		this->lineHeight = (this->lineHeight * ratio);
HXLINE( 293)		this->baseLine = (this->baseLine * ratio);
HXLINE( 294)		this->size = size;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,resizeTo,(void))

bool Font_obj::hasChar(int code){
            	HX_STACKFRAME(&_hx_pos_9ae5a50562143632_303_hasChar)
HXDLIN( 303)		return ::hx::IsNotNull( this->glyphs->get(code) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,hasChar,return )

void Font_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_9ae5a50562143632_310_dispose)
HXDLIN( 310)		this->tile->dispose();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,dispose,(void))


::hx::ObjectPtr< Font_obj > Font_obj::__new(::String name,int size, ::h2d::FontType type) {
	::hx::ObjectPtr< Font_obj > __this = new Font_obj();
	__this->__construct(name,size,type);
	return __this;
}

::hx::ObjectPtr< Font_obj > Font_obj::__alloc(::hx::Ctx *_hx_ctx,::String name,int size, ::h2d::FontType type) {
	Font_obj *__this = (Font_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Font_obj), true, "h2d.Font"));
	*(void **)__this = Font_obj::_hx_vtable;
	__this->__construct(name,size,type);
	return __this;
}

Font_obj::Font_obj()
{
}

void Font_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Font);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(baseLine,"baseLine");
	HX_MARK_MEMBER_NAME(lineHeight,"lineHeight");
	HX_MARK_MEMBER_NAME(tile,"tile");
	HX_MARK_MEMBER_NAME(tilePath,"tilePath");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(charset,"charset");
	HX_MARK_MEMBER_NAME(glyphs,"glyphs");
	HX_MARK_MEMBER_NAME(nullChar,"nullChar");
	HX_MARK_MEMBER_NAME(defaultChar,"defaultChar");
	HX_MARK_MEMBER_NAME(initSize,"initSize");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_END_CLASS();
}

void Font_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(baseLine,"baseLine");
	HX_VISIT_MEMBER_NAME(lineHeight,"lineHeight");
	HX_VISIT_MEMBER_NAME(tile,"tile");
	HX_VISIT_MEMBER_NAME(tilePath,"tilePath");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(charset,"charset");
	HX_VISIT_MEMBER_NAME(glyphs,"glyphs");
	HX_VISIT_MEMBER_NAME(nullChar,"nullChar");
	HX_VISIT_MEMBER_NAME(defaultChar,"defaultChar");
	HX_VISIT_MEMBER_NAME(initSize,"initSize");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
}

::hx::Val Font_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size ); }
		if (HX_FIELD_EQ(inName,"tile") ) { return ::hx::Val( tile ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { return ::hx::Val( glyphs ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"charset") ) { return ::hx::Val( charset ); }
		if (HX_FIELD_EQ(inName,"offsetX") ) { return ::hx::Val( offsetX ); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return ::hx::Val( offsetY ); }
		if (HX_FIELD_EQ(inName,"getChar") ) { return ::hx::Val( getChar_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasChar") ) { return ::hx::Val( hasChar_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"baseLine") ) { return ::hx::Val( baseLine ); }
		if (HX_FIELD_EQ(inName,"tilePath") ) { return ::hx::Val( tilePath ); }
		if (HX_FIELD_EQ(inName,"nullChar") ) { return ::hx::Val( nullChar ); }
		if (HX_FIELD_EQ(inName,"initSize") ) { return ::hx::Val( initSize ); }
		if (HX_FIELD_EQ(inName,"resizeTo") ) { return ::hx::Val( resizeTo_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setOffset") ) { return ::hx::Val( setOffset_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lineHeight") ) { return ::hx::Val( lineHeight ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultChar") ) { return ::hx::Val( defaultChar ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Font_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tile") ) { tile=inValue.Cast<  ::h2d::Tile >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::h2d::FontType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { glyphs=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"charset") ) { charset=inValue.Cast<  ::hxd::Charset >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"baseLine") ) { baseLine=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tilePath") ) { tilePath=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nullChar") ) { nullChar=inValue.Cast<  ::h2d::FontChar >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initSize") ) { initSize=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lineHeight") ) { lineHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultChar") ) { defaultChar=inValue.Cast<  ::h2d::FontChar >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Font_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("baseLine",a5,08,01,fc));
	outFields->push(HX_("lineHeight",fb,02,f4,d6));
	outFields->push(HX_("tile",2e,cb,fc,4c));
	outFields->push(HX_("tilePath",f3,0b,58,84));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("charset",8c,a6,7a,cf));
	outFields->push(HX_("glyphs",47,f9,58,ae));
	outFields->push(HX_("nullChar",fd,78,66,1f));
	outFields->push(HX_("defaultChar",37,58,7e,13));
	outFields->push(HX_("initSize",f1,cf,0a,51));
	outFields->push(HX_("offsetX",65,09,65,d7));
	outFields->push(HX_("offsetY",66,09,65,d7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Font_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Font_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsInt,(int)offsetof(Font_obj,size),HX_("size",c1,a0,53,4c)},
	{::hx::fsFloat,(int)offsetof(Font_obj,baseLine),HX_("baseLine",a5,08,01,fc)},
	{::hx::fsFloat,(int)offsetof(Font_obj,lineHeight),HX_("lineHeight",fb,02,f4,d6)},
	{::hx::fsObject /*  ::h2d::Tile */ ,(int)offsetof(Font_obj,tile),HX_("tile",2e,cb,fc,4c)},
	{::hx::fsString,(int)offsetof(Font_obj,tilePath),HX_("tilePath",f3,0b,58,84)},
	{::hx::fsObject /*  ::h2d::FontType */ ,(int)offsetof(Font_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsObject /*  ::hxd::Charset */ ,(int)offsetof(Font_obj,charset),HX_("charset",8c,a6,7a,cf)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Font_obj,glyphs),HX_("glyphs",47,f9,58,ae)},
	{::hx::fsObject /*  ::h2d::FontChar */ ,(int)offsetof(Font_obj,nullChar),HX_("nullChar",fd,78,66,1f)},
	{::hx::fsObject /*  ::h2d::FontChar */ ,(int)offsetof(Font_obj,defaultChar),HX_("defaultChar",37,58,7e,13)},
	{::hx::fsInt,(int)offsetof(Font_obj,initSize),HX_("initSize",f1,cf,0a,51)},
	{::hx::fsFloat,(int)offsetof(Font_obj,offsetX),HX_("offsetX",65,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(Font_obj,offsetY),HX_("offsetY",66,09,65,d7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Font_obj_sStaticStorageInfo = 0;
#endif

static ::String Font_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("size",c1,a0,53,4c),
	HX_("baseLine",a5,08,01,fc),
	HX_("lineHeight",fb,02,f4,d6),
	HX_("tile",2e,cb,fc,4c),
	HX_("tilePath",f3,0b,58,84),
	HX_("type",ba,f2,08,4d),
	HX_("charset",8c,a6,7a,cf),
	HX_("glyphs",47,f9,58,ae),
	HX_("nullChar",fd,78,66,1f),
	HX_("defaultChar",37,58,7e,13),
	HX_("initSize",f1,cf,0a,51),
	HX_("offsetX",65,09,65,d7),
	HX_("offsetY",66,09,65,d7),
	HX_("getChar",8c,0e,42,14),
	HX_("setOffset",d5,0c,e7,bf),
	HX_("clone",5d,13,63,48),
	HX_("resizeTo",8f,08,7d,a1),
	HX_("hasChar",50,7f,03,11),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class Font_obj::__mClass;

void Font_obj::__register()
{
	Font_obj _hx_dummy;
	Font_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.Font",83,dc,67,02);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Font_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Font_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Font_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Font_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
