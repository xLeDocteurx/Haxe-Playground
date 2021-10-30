#include <hxcpp.h>

#ifndef INCLUDED_h2d_FontChar
#include <h2d/FontChar.h>
#endif
#ifndef INCLUDED_h2d_Kerning
#include <h2d/Kerning.h>
#endif
#ifndef INCLUDED_h2d_Tile
#include <h2d/Tile.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_237b8ef00e886359_58_new,"h2d.FontChar","new",0x1120766b,"h2d.FontChar.new","h2d/Font.hx",58,0x32d64c3a)
HX_LOCAL_STACK_FRAME(_hx_pos_237b8ef00e886359_66_addKerning,"h2d.FontChar","addKerning",0x23a0e800,"h2d.FontChar.addKerning","h2d/Font.hx",66,0x32d64c3a)
HX_LOCAL_STACK_FRAME(_hx_pos_237b8ef00e886359_75_getKerningOffset,"h2d.FontChar","getKerningOffset",0x0f04c01e,"h2d.FontChar.getKerningOffset","h2d/Font.hx",75,0x32d64c3a)
HX_LOCAL_STACK_FRAME(_hx_pos_237b8ef00e886359_88_clone,"h2d.FontChar","clone",0xa22d9228,"h2d.FontChar.clone","h2d/Font.hx",88,0x32d64c3a)
namespace h2d{

void FontChar_obj::__construct( ::h2d::Tile t,Float w){
            	HX_STACKFRAME(&_hx_pos_237b8ef00e886359_58_new)
HXLINE(  59)		this->t = t;
HXLINE(  60)		this->width = w;
            	}

Dynamic FontChar_obj::__CreateEmpty() { return new FontChar_obj; }

void *FontChar_obj::_hx_vtable = 0;

Dynamic FontChar_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FontChar_obj > _hx_result = new FontChar_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FontChar_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5a3f8b3f;
}

void FontChar_obj::addKerning(int prevChar,int offset){
            	HX_GC_STACKFRAME(&_hx_pos_237b8ef00e886359_66_addKerning)
HXLINE(  67)		 ::h2d::Kerning k =  ::h2d::Kerning_obj::__alloc( HX_CTX ,prevChar,( (Float)(offset) ));
HXLINE(  68)		k->next = this->kerning;
HXLINE(  69)		this->kerning = k;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FontChar_obj,addKerning,(void))

Float FontChar_obj::getKerningOffset(int prevChar){
            	HX_STACKFRAME(&_hx_pos_237b8ef00e886359_75_getKerningOffset)
HXLINE(  76)		 ::h2d::Kerning k = this->kerning;
HXLINE(  77)		while(::hx::IsNotNull( k )){
HXLINE(  78)			if ((k->prevChar == prevChar)) {
HXLINE(  79)				return k->offset;
            			}
HXLINE(  80)			k = k->next;
            		}
HXLINE(  82)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FontChar_obj,getKerningOffset,return )

 ::h2d::FontChar FontChar_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_237b8ef00e886359_88_clone)
HXLINE(  89)		 ::h2d::Tile c = this->t->clone();
HXDLIN(  89)		 ::h2d::FontChar c1 =  ::h2d::FontChar_obj::__alloc( HX_CTX ,c,this->width);
HXLINE(  91)		 ::h2d::Kerning k = this->kerning;
HXLINE(  92)		if (::hx::IsNotNull( k )) {
HXLINE(  93)			 ::h2d::Kerning kc =  ::h2d::Kerning_obj::__alloc( HX_CTX ,k->prevChar,k->offset);
HXLINE(  94)			c1->kerning = kc;
HXLINE(  95)			k = k->next;
HXLINE(  96)			while(::hx::IsNotNull( k )){
HXLINE(  97)				 ::h2d::Kerning kn =  ::h2d::Kerning_obj::__alloc( HX_CTX ,k->prevChar,k->offset);
HXLINE(  98)				kc = (kc->next = kn);
HXLINE(  99)				k = k->next;
            			}
            		}
HXLINE( 102)		return c1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FontChar_obj,clone,return )


::hx::ObjectPtr< FontChar_obj > FontChar_obj::__new( ::h2d::Tile t,Float w) {
	::hx::ObjectPtr< FontChar_obj > __this = new FontChar_obj();
	__this->__construct(t,w);
	return __this;
}

::hx::ObjectPtr< FontChar_obj > FontChar_obj::__alloc(::hx::Ctx *_hx_ctx, ::h2d::Tile t,Float w) {
	FontChar_obj *__this = (FontChar_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FontChar_obj), true, "h2d.FontChar"));
	*(void **)__this = FontChar_obj::_hx_vtable;
	__this->__construct(t,w);
	return __this;
}

FontChar_obj::FontChar_obj()
{
}

void FontChar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FontChar);
	HX_MARK_MEMBER_NAME(t,"t");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(kerning,"kerning");
	HX_MARK_END_CLASS();
}

void FontChar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(t,"t");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(kerning,"kerning");
}

::hx::Val FontChar_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"t") ) { return ::hx::Val( t ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"kerning") ) { return ::hx::Val( kerning ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addKerning") ) { return ::hx::Val( addKerning_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getKerningOffset") ) { return ::hx::Val( getKerningOffset_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FontChar_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"t") ) { t=inValue.Cast<  ::h2d::Tile >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"kerning") ) { kerning=inValue.Cast<  ::h2d::Kerning >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FontChar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("t",74,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("kerning",cc,ba,37,b0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FontChar_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h2d::Tile */ ,(int)offsetof(FontChar_obj,t),HX_("t",74,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FontChar_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsObject /*  ::h2d::Kerning */ ,(int)offsetof(FontChar_obj,kerning),HX_("kerning",cc,ba,37,b0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FontChar_obj_sStaticStorageInfo = 0;
#endif

static ::String FontChar_obj_sMemberFields[] = {
	HX_("t",74,00,00,00),
	HX_("width",06,b6,62,ca),
	HX_("kerning",cc,ba,37,b0),
	HX_("addKerning",ab,e6,c1,17),
	HX_("getKerningOffset",09,91,ce,ed),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class FontChar_obj::__mClass;

void FontChar_obj::__register()
{
	FontChar_obj _hx_dummy;
	FontChar_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.FontChar",f9,64,9c,83);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FontChar_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FontChar_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FontChar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FontChar_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
