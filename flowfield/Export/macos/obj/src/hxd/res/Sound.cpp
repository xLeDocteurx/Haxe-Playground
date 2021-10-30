#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_fs_FileEntry
#include <hxd/fs/FileEntry.h>
#endif
#ifndef INCLUDED_hxd_res_Resource
#include <hxd/res/Resource.h>
#endif
#ifndef INCLUDED_hxd_res_Sound
#include <hxd/res/Sound.h>
#endif
#ifndef INCLUDED_hxd_res_SoundFormat
#include <hxd/res/SoundFormat.h>
#endif
#ifndef INCLUDED_hxd_snd_Channel
#include <hxd/snd/Channel.h>
#endif
#ifndef INCLUDED_hxd_snd_ChannelBase
#include <hxd/snd/ChannelBase.h>
#endif
#ifndef INCLUDED_hxd_snd_ChannelGroup
#include <hxd/snd/ChannelGroup.h>
#endif
#ifndef INCLUDED_hxd_snd_Data
#include <hxd/snd/Data.h>
#endif
#ifndef INCLUDED_hxd_snd_Manager
#include <hxd/snd/Manager.h>
#endif
#ifndef INCLUDED_hxd_snd_Mp3Data
#include <hxd/snd/Mp3Data.h>
#endif
#ifndef INCLUDED_hxd_snd_SampleFormat
#include <hxd/snd/SampleFormat.h>
#endif
#ifndef INCLUDED_hxd_snd_SoundGroup
#include <hxd/snd/SoundGroup.h>
#endif
#ifndef INCLUDED_hxd_snd_WavData
#include <hxd/snd/WavData.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_08c0dfd34452014a_9_new,"hxd.res.Sound","new",0x111cf5f9,"hxd.res.Sound.new","hxd/res/Sound.hx",9,0xc98f9219)
HX_LOCAL_STACK_FRAME(_hx_pos_08c0dfd34452014a_30_getData,"hxd.res.Sound","getData",0xa9f46bf9,"hxd.res.Sound.getData","hxd/res/Sound.hx",30,0xc98f9219)
HX_LOCAL_STACK_FRAME(_hx_pos_08c0dfd34452014a_60_dispose,"hxd.res.Sound","dispose",0x505ae6b8,"hxd.res.Sound.dispose","hxd/res/Sound.hx",60,0xc98f9219)
HX_LOCAL_STACK_FRAME(_hx_pos_08c0dfd34452014a_66_stop,"hxd.res.Sound","stop",0xeb93b049,"hxd.res.Sound.stop","hxd/res/Sound.hx",66,0xc98f9219)
HX_LOCAL_STACK_FRAME(_hx_pos_08c0dfd34452014a_72_play,"hxd.res.Sound","play",0xe991ee3b,"hxd.res.Sound.play","hxd/res/Sound.hx",72,0xc98f9219)
HX_LOCAL_STACK_FRAME(_hx_pos_08c0dfd34452014a_85_watchCallb,"hxd.res.Sound","watchCallb",0xbd213cbc,"hxd.res.Sound.watchCallb","hxd/res/Sound.hx",85,0xc98f9219)
HX_LOCAL_STACK_FRAME(_hx_pos_08c0dfd34452014a_18_supportedFormat,"hxd.res.Sound","supportedFormat",0x6318471e,"hxd.res.Sound.supportedFormat","hxd/res/Sound.hx",18,0xc98f9219)
HX_LOCAL_STACK_FRAME(_hx_pos_08c0dfd34452014a_81_startWorker,"hxd.res.Sound","startWorker",0xb9c27519,"hxd.res.Sound.startWorker","hxd/res/Sound.hx",81,0xc98f9219)
HX_LOCAL_STACK_FRAME(_hx_pos_08c0dfd34452014a_11_boot,"hxd.res.Sound","boot",0xe0534479,"hxd.res.Sound.boot","hxd/res/Sound.hx",11,0xc98f9219)
namespace hxd{
namespace res{

void Sound_obj::__construct( ::hxd::fs::FileEntry entry){
            	HX_STACKFRAME(&_hx_pos_08c0dfd34452014a_9_new)
HXLINE(  15)		this->lastPlay = ((Float)0.);
HXLINE(   9)		super::__construct(entry);
            	}

Dynamic Sound_obj::__CreateEmpty() { return new Sound_obj; }

void *Sound_obj::_hx_vtable = 0;

Dynamic Sound_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Sound_obj > _hx_result = new Sound_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Sound_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x09c9e03a) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x09c9e03a;
	} else {
		return inClassId==(int)0x272dede3;
	}
}

 ::hxd::snd::Data Sound_obj::getData(){
            	HX_GC_STACKFRAME(&_hx_pos_08c0dfd34452014a_30_getData)
HXLINE(  31)		if (::hx::IsNotNull( this->data )) {
HXLINE(  32)			return this->data;
            		}
HXLINE(  33)		 ::haxe::io::Bytes bytes = this->entry->getBytes();
HXLINE(  40)		switch((int)(( (int)(bytes->b->__get(0)) ))){
            			case (int)73: case (int)255: {
HXLINE(  44)				this->data =  ::hxd::snd::Mp3Data_obj::__alloc( HX_CTX ,bytes);
            			}
            			break;
            			case (int)79: {
HXLINE(  49)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("OGG format requires -lib stb_ogg_sound (for ",f2,43,f5,d1) + this->entry->get_path()) + HX_(")",29,00,00,00))));
            			}
            			break;
            			case (int)82: {
HXLINE(  42)				this->data =  ::hxd::snd::WavData_obj::__alloc( HX_CTX ,bytes);
            			}
            			break;
            			default:{
            			}
            		}
HXLINE(  53)		if (::hx::IsNull( this->data )) {
HXLINE(  54)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported sound format ",ed,c3,b1,f5) + this->entry->get_path())));
            		}
HXLINE(  55)		if (::hxd::res::Sound_obj::ENABLE_AUTO_WATCH) {
HXLINE(  56)			this->watch(this->watchCallb_dyn());
            		}
HXLINE(  57)		return this->data;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,getData,return )

void Sound_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_08c0dfd34452014a_60_dispose)
HXLINE(  61)		this->stop();
HXLINE(  62)		this->data = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,dispose,(void))

void Sound_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_08c0dfd34452014a_66_stop)
HXDLIN(  66)		if (::hx::IsNotNull( this->channel )) {
HXLINE(  67)			this->channel->stop();
HXLINE(  68)			this->channel = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,stop,(void))

 ::hxd::snd::Channel Sound_obj::play( ::Dynamic __o_loop, ::Dynamic __o_volume, ::hxd::snd::ChannelGroup channelGroup, ::hxd::snd::SoundGroup soundGroup){
            		 ::Dynamic loop = __o_loop;
            		if (::hx::IsNull(__o_loop)) loop = false;
            		 ::Dynamic volume = __o_volume;
            		if (::hx::IsNull(__o_volume)) volume = ((Float)1.);
            	HX_STACKFRAME(&_hx_pos_08c0dfd34452014a_72_play)
HXLINE(  73)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  73)		Float _hx_tmp;
HXDLIN(  73)		if ((timer > 0)) {
HXLINE(  73)			_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE(  73)			_hx_tmp = ( (Float)(0) );
            		}
HXDLIN(  73)		this->lastPlay = _hx_tmp;
HXLINE(  74)		this->channel = ::hxd::snd::Manager_obj::get()->play(::hx::ObjectPtr<OBJ_>(this),channelGroup,soundGroup);
HXLINE(  75)		this->channel->loop = ( (bool)(loop) );
HXLINE(  76)		this->channel->set_volume(( (Float)(volume) ));
HXLINE(  77)		return this->channel;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Sound_obj,play,return )

void Sound_obj::watchCallb(){
            	HX_STACKFRAME(&_hx_pos_08c0dfd34452014a_85_watchCallb)
HXLINE(  86)		 ::hxd::snd::Data old = this->data;
HXLINE(  87)		this->data = null();
HXLINE(  88)		 ::hxd::snd::Data data = this->getData();
HXLINE(  89)		if (::hx::IsNotNull( old )) {
HXLINE(  90)			bool _hx_tmp;
HXDLIN(  90)			bool _hx_tmp1;
HXDLIN(  90)			bool _hx_tmp2;
HXDLIN(  90)			if ((old->channels == data->channels)) {
HXLINE(  90)				_hx_tmp2 = (old->samples != data->samples);
            			}
            			else {
HXLINE(  90)				_hx_tmp2 = true;
            			}
HXDLIN(  90)			if (!(_hx_tmp2)) {
HXLINE(  90)				_hx_tmp1 = ::hx::IsPointerNotEq( old->sampleFormat,data->sampleFormat );
            			}
            			else {
HXLINE(  90)				_hx_tmp1 = true;
            			}
HXDLIN(  90)			if (!(_hx_tmp1)) {
HXLINE(  90)				_hx_tmp = (old->samplingRate != data->samplingRate);
            			}
            			else {
HXLINE(  90)				_hx_tmp = true;
            			}
HXDLIN(  90)			if (_hx_tmp) {
HXLINE(  91)				 ::hxd::snd::Manager manager = ::hxd::snd::Manager_obj::get();
HXLINE(  92)				{
HXLINE(  92)					 ::Dynamic ch = manager->getAll(::hx::ObjectPtr<OBJ_>(this));
HXDLIN(  92)					while(( (bool)(ch->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  92)						 ::hxd::snd::Channel ch1 = ( ( ::hxd::snd::Channel)(ch->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  93)						ch1->duration = data->get_duration();
HXLINE(  94)						ch1->set_position(ch1->position);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,watchCallb,(void))

bool Sound_obj::ENABLE_AUTO_WATCH;

bool Sound_obj::supportedFormat( ::hxd::res::SoundFormat fmt){
            	HX_STACKFRAME(&_hx_pos_08c0dfd34452014a_18_supportedFormat)
HXDLIN(  18)		switch((int)(fmt->_hx_getIndex())){
            			case (int)0: case (int)1: {
HXLINE(  20)				return true;
            			}
            			break;
            			case (int)2: {
HXLINE(  25)				return false;
            			}
            			break;
            		}
HXLINE(  18)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,supportedFormat,return )

bool Sound_obj::startWorker(){
            	HX_STACKFRAME(&_hx_pos_08c0dfd34452014a_81_startWorker)
HXDLIN(  81)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,startWorker,return )


::hx::ObjectPtr< Sound_obj > Sound_obj::__new( ::hxd::fs::FileEntry entry) {
	::hx::ObjectPtr< Sound_obj > __this = new Sound_obj();
	__this->__construct(entry);
	return __this;
}

::hx::ObjectPtr< Sound_obj > Sound_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxd::fs::FileEntry entry) {
	Sound_obj *__this = (Sound_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Sound_obj), true, "hxd.res.Sound"));
	*(void **)__this = Sound_obj::_hx_vtable;
	__this->__construct(entry);
	return __this;
}

Sound_obj::Sound_obj()
{
}

void Sound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sound);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(channel,"channel");
	HX_MARK_MEMBER_NAME(lastPlay,"lastPlay");
	 ::hxd::res::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(channel,"channel");
	HX_VISIT_MEMBER_NAME(lastPlay,"lastPlay");
	 ::hxd::res::Resource_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Sound_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"channel") ) { return ::hx::Val( channel ); }
		if (HX_FIELD_EQ(inName,"getData") ) { return ::hx::Val( getData_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastPlay") ) { return ::hx::Val( lastPlay ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"watchCallb") ) { return ::hx::Val( watchCallb_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Sound_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"startWorker") ) { outValue = startWorker_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"supportedFormat") ) { outValue = supportedFormat_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ENABLE_AUTO_WATCH") ) { outValue = ( ENABLE_AUTO_WATCH ); return true; }
	}
	return false;
}

::hx::Val Sound_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::hxd::snd::Data >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"channel") ) { channel=inValue.Cast<  ::hxd::snd::Channel >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastPlay") ) { lastPlay=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Sound_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"ENABLE_AUTO_WATCH") ) { ENABLE_AUTO_WATCH=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void Sound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("channel",c3,00,d2,cc));
	outFields->push(HX_("lastPlay",6a,47,a3,dd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Sound_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::snd::Data */ ,(int)offsetof(Sound_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsObject /*  ::hxd::snd::Channel */ ,(int)offsetof(Sound_obj,channel),HX_("channel",c3,00,d2,cc)},
	{::hx::fsFloat,(int)offsetof(Sound_obj,lastPlay),HX_("lastPlay",6a,47,a3,dd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Sound_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &Sound_obj::ENABLE_AUTO_WATCH,HX_("ENABLE_AUTO_WATCH",9b,c5,f6,f6)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Sound_obj_sMemberFields[] = {
	HX_("data",2a,56,63,42),
	HX_("channel",c3,00,d2,cc),
	HX_("lastPlay",6a,47,a3,dd),
	HX_("getData",e0,05,e6,14),
	HX_("dispose",9f,80,4c,bb),
	HX_("stop",02,f0,5b,4c),
	HX_("play",f4,2d,5a,4a),
	HX_("watchCallb",35,8d,25,b9),
	::String(null()) };

static void Sound_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sound_obj::ENABLE_AUTO_WATCH,"ENABLE_AUTO_WATCH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Sound_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sound_obj::ENABLE_AUTO_WATCH,"ENABLE_AUTO_WATCH");
};

#endif

::hx::Class Sound_obj::__mClass;

static ::String Sound_obj_sStaticFields[] = {
	HX_("ENABLE_AUTO_WATCH",9b,c5,f6,f6),
	HX_("supportedFormat",05,a0,a0,46),
	HX_("startWorker",80,8e,84,41),
	::String(null())
};

void Sound_obj::__register()
{
	Sound_obj _hx_dummy;
	Sound_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.res.Sound",87,85,22,b3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sound_obj::__GetStatic;
	__mClass->mSetStaticField = &Sound_obj::__SetStatic;
	__mClass->mMarkFunc = Sound_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Sound_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Sound_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Sound_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Sound_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sound_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sound_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Sound_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_08c0dfd34452014a_11_boot)
HXDLIN(  11)		ENABLE_AUTO_WATCH = true;
            	}
}

} // end namespace hxd
} // end namespace res
