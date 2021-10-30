#include <hxcpp.h>

#ifndef INCLUDED_hxd_snd_SoundGroup
#include <hxd/snd/SoundGroup.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f87c74ff6fa5cd39_13_new,"hxd.snd.SoundGroup","new",0x55e53941,"hxd.snd.SoundGroup.new","hxd/snd/SoundGroup.hx",13,0x572cab8d)
namespace hxd{
namespace snd{

void SoundGroup_obj::__construct(::String name){
            	HX_STACKFRAME(&_hx_pos_f87c74ff6fa5cd39_13_new)
HXLINE(  14)		this->name = name;
HXLINE(  15)		this->maxAudible = -1;
HXLINE(  16)		this->volume = ( (Float)(1) );
HXLINE(  17)		this->mono = false;
            	}

Dynamic SoundGroup_obj::__CreateEmpty() { return new SoundGroup_obj; }

void *SoundGroup_obj::_hx_vtable = 0;

Dynamic SoundGroup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SoundGroup_obj > _hx_result = new SoundGroup_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SoundGroup_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x082eb63d;
}


SoundGroup_obj::SoundGroup_obj()
{
}

void SoundGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundGroup);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_MEMBER_NAME(maxAudible,"maxAudible");
	HX_MARK_MEMBER_NAME(mono,"mono");
	HX_MARK_MEMBER_NAME(numAudible,"numAudible");
	HX_MARK_MEMBER_NAME(lastUpdate,"lastUpdate");
	HX_MARK_END_CLASS();
}

void SoundGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(volume,"volume");
	HX_VISIT_MEMBER_NAME(maxAudible,"maxAudible");
	HX_VISIT_MEMBER_NAME(mono,"mono");
	HX_VISIT_MEMBER_NAME(numAudible,"numAudible");
	HX_VISIT_MEMBER_NAME(lastUpdate,"lastUpdate");
}

::hx::Val SoundGroup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"mono") ) { return ::hx::Val( mono ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return ::hx::Val( volume ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxAudible") ) { return ::hx::Val( maxAudible ); }
		if (HX_FIELD_EQ(inName,"numAudible") ) { return ::hx::Val( numAudible ); }
		if (HX_FIELD_EQ(inName,"lastUpdate") ) { return ::hx::Val( lastUpdate ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SoundGroup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mono") ) { mono=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxAudible") ) { maxAudible=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numAudible") ) { numAudible=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastUpdate") ) { lastUpdate=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("volume",da,29,53,5f));
	outFields->push(HX_("maxAudible",3e,d5,4b,cd));
	outFields->push(HX_("mono",23,dc,60,48));
	outFields->push(HX_("numAudible",dc,99,47,93));
	outFields->push(HX_("lastUpdate",ff,68,e0,51));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SoundGroup_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(SoundGroup_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsFloat,(int)offsetof(SoundGroup_obj,volume),HX_("volume",da,29,53,5f)},
	{::hx::fsInt,(int)offsetof(SoundGroup_obj,maxAudible),HX_("maxAudible",3e,d5,4b,cd)},
	{::hx::fsBool,(int)offsetof(SoundGroup_obj,mono),HX_("mono",23,dc,60,48)},
	{::hx::fsInt,(int)offsetof(SoundGroup_obj,numAudible),HX_("numAudible",dc,99,47,93)},
	{::hx::fsFloat,(int)offsetof(SoundGroup_obj,lastUpdate),HX_("lastUpdate",ff,68,e0,51)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SoundGroup_obj_sStaticStorageInfo = 0;
#endif

static ::String SoundGroup_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("volume",da,29,53,5f),
	HX_("maxAudible",3e,d5,4b,cd),
	HX_("mono",23,dc,60,48),
	HX_("numAudible",dc,99,47,93),
	HX_("lastUpdate",ff,68,e0,51),
	::String(null()) };

::hx::Class SoundGroup_obj::__mClass;

void SoundGroup_obj::__register()
{
	SoundGroup_obj _hx_dummy;
	SoundGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.SoundGroup",cf,84,25,ac);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SoundGroup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SoundGroup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SoundGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SoundGroup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace snd
