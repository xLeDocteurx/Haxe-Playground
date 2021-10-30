#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_hxd_snd_Effect
#include <hxd/snd/Effect.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_Source
#include <hxd/snd/openal/Source.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_SourceHandle
#include <hxd/snd/openal/SourceHandle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_53b391566b2aa105_27_new,"hxd.snd.openal.SourceHandle","new",0xcd7bd6af,"hxd.snd.openal.SourceHandle.new","hxd/snd/openal/AudioTypes.hx",27,0x057d4e22)
HX_LOCAL_STACK_FRAME(_hx_pos_53b391566b2aa105_34_acquireAuxiliarySend,"hxd.snd.openal.SourceHandle","acquireAuxiliarySend",0x30df0689,"hxd.snd.openal.SourceHandle.acquireAuxiliarySend","hxd/snd/openal/AudioTypes.hx",34,0x057d4e22)
HX_LOCAL_STACK_FRAME(_hx_pos_53b391566b2aa105_43_getAuxiliarySend,"hxd.snd.openal.SourceHandle","getAuxiliarySend",0x1523dd49,"hxd.snd.openal.SourceHandle.getAuxiliarySend","hxd/snd/openal/AudioTypes.hx",43,0x057d4e22)
HX_LOCAL_STACK_FRAME(_hx_pos_53b391566b2aa105_46_releaseAuxiliarySend,"hxd.snd.openal.SourceHandle","releaseAuxiliarySend",0xd7f1a9f8,"hxd.snd.openal.SourceHandle.releaseAuxiliarySend","hxd/snd/openal/AudioTypes.hx",46,0x057d4e22)
namespace hxd{
namespace snd{
namespace openal{

void SourceHandle_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_53b391566b2aa105_27_new)
HXLINE(  28)		this->sampleOffset = 0;
HXLINE(  29)		this->nextAuxiliarySend = 0;
HXLINE(  30)		this->freeAuxiliarySends = ::Array_obj< int >::__new(0);
HXLINE(  31)		this->effectToAuxiliarySend =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            	}

Dynamic SourceHandle_obj::__CreateEmpty() { return new SourceHandle_obj; }

void *SourceHandle_obj::_hx_vtable = 0;

Dynamic SourceHandle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SourceHandle_obj > _hx_result = new SourceHandle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SourceHandle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7bd58231;
}

int SourceHandle_obj::acquireAuxiliarySend( ::hxd::snd::Effect effect){
            	HX_STACKFRAME(&_hx_pos_53b391566b2aa105_34_acquireAuxiliarySend)
HXLINE(  35)		 ::Dynamic send;
HXDLIN(  35)		if ((this->freeAuxiliarySends->length > 0)) {
HXLINE(  35)			send = this->freeAuxiliarySends->shift();
            		}
            		else {
HXLINE(  35)			send = this->nextAuxiliarySend++;
            		}
HXLINE(  38)		this->effectToAuxiliarySend->set(effect,send);
HXLINE(  39)		return ( (int)(send) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(SourceHandle_obj,acquireAuxiliarySend,return )

int SourceHandle_obj::getAuxiliarySend( ::hxd::snd::Effect effect){
            	HX_STACKFRAME(&_hx_pos_53b391566b2aa105_43_getAuxiliarySend)
HXDLIN(  43)		return this->effectToAuxiliarySend->get_int(effect);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SourceHandle_obj,getAuxiliarySend,return )

int SourceHandle_obj::releaseAuxiliarySend( ::hxd::snd::Effect effect){
            	HX_STACKFRAME(&_hx_pos_53b391566b2aa105_46_releaseAuxiliarySend)
HXLINE(  47)		 ::Dynamic send = this->effectToAuxiliarySend->get(effect);
HXLINE(  48)		this->effectToAuxiliarySend->remove(effect);
HXLINE(  49)		this->freeAuxiliarySends->push(send);
HXLINE(  50)		return ( (int)(send) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(SourceHandle_obj,releaseAuxiliarySend,return )


::hx::ObjectPtr< SourceHandle_obj > SourceHandle_obj::__new() {
	::hx::ObjectPtr< SourceHandle_obj > __this = new SourceHandle_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SourceHandle_obj > SourceHandle_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SourceHandle_obj *__this = (SourceHandle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SourceHandle_obj), true, "hxd.snd.openal.SourceHandle"));
	*(void **)__this = SourceHandle_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SourceHandle_obj::SourceHandle_obj()
{
}

void SourceHandle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SourceHandle);
	HX_MARK_MEMBER_NAME(inst,"inst");
	HX_MARK_MEMBER_NAME(sampleOffset,"sampleOffset");
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(nextAuxiliarySend,"nextAuxiliarySend");
	HX_MARK_MEMBER_NAME(freeAuxiliarySends,"freeAuxiliarySends");
	HX_MARK_MEMBER_NAME(effectToAuxiliarySend,"effectToAuxiliarySend");
	HX_MARK_END_CLASS();
}

void SourceHandle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(inst,"inst");
	HX_VISIT_MEMBER_NAME(sampleOffset,"sampleOffset");
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(nextAuxiliarySend,"nextAuxiliarySend");
	HX_VISIT_MEMBER_NAME(freeAuxiliarySends,"freeAuxiliarySends");
	HX_VISIT_MEMBER_NAME(effectToAuxiliarySend,"effectToAuxiliarySend");
}

::hx::Val SourceHandle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"inst") ) { return ::hx::Val( inst ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { return ::hx::Val( playing ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sampleOffset") ) { return ::hx::Val( sampleOffset ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getAuxiliarySend") ) { return ::hx::Val( getAuxiliarySend_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nextAuxiliarySend") ) { return ::hx::Val( nextAuxiliarySend ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"freeAuxiliarySends") ) { return ::hx::Val( freeAuxiliarySends ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"acquireAuxiliarySend") ) { return ::hx::Val( acquireAuxiliarySend_dyn() ); }
		if (HX_FIELD_EQ(inName,"releaseAuxiliarySend") ) { return ::hx::Val( releaseAuxiliarySend_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"effectToAuxiliarySend") ) { return ::hx::Val( effectToAuxiliarySend ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SourceHandle_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"inst") ) { inst=inValue.Cast<  ::hxd::snd::openal::Source >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { playing=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sampleOffset") ) { sampleOffset=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nextAuxiliarySend") ) { nextAuxiliarySend=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"freeAuxiliarySends") ) { freeAuxiliarySends=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"effectToAuxiliarySend") ) { effectToAuxiliarySend=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SourceHandle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("inst",c6,43,bb,45));
	outFields->push(HX_("sampleOffset",5d,e7,ab,a4));
	outFields->push(HX_("playing",6e,0f,18,8a));
	outFields->push(HX_("nextAuxiliarySend",7b,ae,eb,9c));
	outFields->push(HX_("freeAuxiliarySends",11,c7,3d,41));
	outFields->push(HX_("effectToAuxiliarySend",62,51,db,90));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SourceHandle_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::snd::openal::Source */ ,(int)offsetof(SourceHandle_obj,inst),HX_("inst",c6,43,bb,45)},
	{::hx::fsInt,(int)offsetof(SourceHandle_obj,sampleOffset),HX_("sampleOffset",5d,e7,ab,a4)},
	{::hx::fsBool,(int)offsetof(SourceHandle_obj,playing),HX_("playing",6e,0f,18,8a)},
	{::hx::fsInt,(int)offsetof(SourceHandle_obj,nextAuxiliarySend),HX_("nextAuxiliarySend",7b,ae,eb,9c)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(SourceHandle_obj,freeAuxiliarySends),HX_("freeAuxiliarySends",11,c7,3d,41)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(SourceHandle_obj,effectToAuxiliarySend),HX_("effectToAuxiliarySend",62,51,db,90)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SourceHandle_obj_sStaticStorageInfo = 0;
#endif

static ::String SourceHandle_obj_sMemberFields[] = {
	HX_("inst",c6,43,bb,45),
	HX_("sampleOffset",5d,e7,ab,a4),
	HX_("playing",6e,0f,18,8a),
	HX_("nextAuxiliarySend",7b,ae,eb,9c),
	HX_("freeAuxiliarySends",11,c7,3d,41),
	HX_("effectToAuxiliarySend",62,51,db,90),
	HX_("acquireAuxiliarySend",b8,15,97,46),
	HX_("getAuxiliarySend",f8,e8,da,d7),
	HX_("releaseAuxiliarySend",27,b9,a9,ed),
	::String(null()) };

::hx::Class SourceHandle_obj::__mClass;

void SourceHandle_obj::__register()
{
	SourceHandle_obj _hx_dummy;
	SourceHandle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.openal.SourceHandle",3d,53,a9,44);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SourceHandle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SourceHandle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SourceHandle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SourceHandle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace snd
} // end namespace openal
