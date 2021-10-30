#include <hxcpp.h>

#ifndef INCLUDED_h2d_Kerning
#include <h2d/Kerning.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b926a7118f3b7537_25_new,"h2d.Kerning","new",0x33f3318a,"h2d.Kerning.new","h2d/Font.hx",25,0x32d64c3a)
namespace h2d{

void Kerning_obj::__construct(int c,Float o){
            	HX_STACKFRAME(&_hx_pos_b926a7118f3b7537_25_new)
HXLINE(  26)		this->prevChar = c;
HXLINE(  27)		this->offset = o;
            	}

Dynamic Kerning_obj::__CreateEmpty() { return new Kerning_obj; }

void *Kerning_obj::_hx_vtable = 0;

Dynamic Kerning_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Kerning_obj > _hx_result = new Kerning_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Kerning_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x24d62912;
}


Kerning_obj::Kerning_obj()
{
}

void Kerning_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Kerning);
	HX_MARK_MEMBER_NAME(prevChar,"prevChar");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void Kerning_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(prevChar,"prevChar");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(next,"next");
}

::hx::Val Kerning_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"prevChar") ) { return ::hx::Val( prevChar ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Kerning_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::h2d::Kerning >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"prevChar") ) { prevChar=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Kerning_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("prevChar",69,3f,8d,0a));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("next",f3,84,02,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Kerning_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Kerning_obj,prevChar),HX_("prevChar",69,3f,8d,0a)},
	{::hx::fsFloat,(int)offsetof(Kerning_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsObject /*  ::h2d::Kerning */ ,(int)offsetof(Kerning_obj,next),HX_("next",f3,84,02,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Kerning_obj_sStaticStorageInfo = 0;
#endif

static ::String Kerning_obj_sMemberFields[] = {
	HX_("prevChar",69,3f,8d,0a),
	HX_("offset",93,97,3f,60),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class Kerning_obj::__mClass;

void Kerning_obj::__register()
{
	Kerning_obj _hx_dummy;
	Kerning_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.Kerning",98,64,cd,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Kerning_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Kerning_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Kerning_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Kerning_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
