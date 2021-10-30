#include <hxcpp.h>

#ifndef INCLUDED_hxd_res_Resource
#include <hxd/res/Resource.h>
#endif
#ifndef INCLUDED_hxd_res_Sound
#include <hxd/res/Sound.h>
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
#ifndef INCLUDED_hxd_snd_Effect
#include <hxd/snd/Effect.h>
#endif
#ifndef INCLUDED_hxd_snd_Manager
#include <hxd/snd/Manager.h>
#endif
#ifndef INCLUDED_hxd_snd_SoundGroup
#include <hxd/snd/SoundGroup.h>
#endif
#ifndef INCLUDED_hxd_snd_Source
#include <hxd/snd/Source.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_74f39a42c6ea7c2d_4_new,"hxd.snd.Channel","new",0x290a4576,"hxd.snd.Channel.new","hxd/snd/Channel.hx",4,0xc23ba5bc)
HX_LOCAL_STACK_FRAME(_hx_pos_74f39a42c6ea7c2d_39___default_onEnd,"hxd.snd.Channel","__default_onEnd",0xd57f35b4,"hxd.snd.Channel.__default_onEnd","hxd/snd/Channel.hx",39,0xc23ba5bc)
HX_LOCAL_STACK_FRAME(_hx_pos_74f39a42c6ea7c2d_42_set_position,"hxd.snd.Channel","set_position",0x34c6b050,"hxd.snd.Channel.set_position","hxd/snd/Channel.hx",42,0xc23ba5bc)
HX_LOCAL_STACK_FRAME(_hx_pos_74f39a42c6ea7c2d_50_set_pause,"hxd.snd.Channel","set_pause",0x5ba688ef,"hxd.snd.Channel.set_pause","hxd/snd/Channel.hx",50,0xc23ba5bc)
HX_LOCAL_STACK_FRAME(_hx_pos_74f39a42c6ea7c2d_55_updateCurrentVolume,"hxd.snd.Channel","updateCurrentVolume",0xfadb2440,"hxd.snd.Channel.updateCurrentVolume","hxd/snd/Channel.hx",55,0xc23ba5bc)
HX_LOCAL_STACK_FRAME(_hx_pos_74f39a42c6ea7c2d_72_calcAudibleVolume,"hxd.snd.Channel","calcAudibleVolume",0x9eed34bd,"hxd.snd.Channel.calcAudibleVolume","hxd/snd/Channel.hx",72,0xc23ba5bc)
HX_LOCAL_STACK_FRAME(_hx_pos_74f39a42c6ea7c2d_87_queueSound,"hxd.snd.Channel","queueSound",0x43f79b28,"hxd.snd.Channel.queueSound","hxd/snd/Channel.hx",87,0xc23ba5bc)
HX_LOCAL_STACK_FRAME(_hx_pos_74f39a42c6ea7c2d_91_stop,"hxd.snd.Channel","stop",0xc34bee2c,"hxd.snd.Channel.stop","hxd/snd/Channel.hx",91,0xc23ba5bc)
HX_LOCAL_STACK_FRAME(_hx_pos_74f39a42c6ea7c2d_95_isReleased,"hxd.snd.Channel","isReleased",0xe41e9471,"hxd.snd.Channel.isReleased","hxd/snd/Channel.hx",95,0xc23ba5bc)
HX_LOCAL_STACK_FRAME(_hx_pos_74f39a42c6ea7c2d_5_boot,"hxd.snd.Channel","boot",0xb80b825c,"hxd.snd.Channel.boot","hxd/snd/Channel.hx",5,0xc23ba5bc)
namespace hxd{
namespace snd{

void Channel_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_74f39a42c6ea7c2d_4_new)
HXLINE(  27)		this->queue = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  26)		this->positionChanged = false;
HXLINE(  25)		this->isLoading = false;
HXLINE(  24)		this->isVirtual = false;
HXLINE(  23)		this->lastStamp = ((Float)0.0);
HXLINE(  22)		this->audibleVolume = ((Float)1.0);
HXLINE(  20)		this->allowVirtual = true;
HXLINE(  19)		this->loop = false;
HXLINE(  18)		this->pause = false;
HXLINE(  17)		this->position = ((Float)0.0);
HXLINE(  30)		super::__construct();
HXLINE(  31)		this->id = ::hxd::snd::Channel_obj::ID++;
            	}

Dynamic Channel_obj::__CreateEmpty() { return new Channel_obj; }

void *Channel_obj::_hx_vtable = 0;

Dynamic Channel_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Channel_obj > _hx_result = new Channel_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Channel_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x431c9717) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x431c9717;
	} else {
		return inClassId==(int)0x5c50fbae;
	}
}

HX_BEGIN_DEFAULT_FUNC(__default_onEnd,Channel_obj)
void _hx_run(){
            	HX_STACKFRAME(&_hx_pos_74f39a42c6ea7c2d_39___default_onEnd)
            	}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

Float Channel_obj::set_position(Float v){
            	HX_STACKFRAME(&_hx_pos_74f39a42c6ea7c2d_42_set_position)
HXLINE(  43)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  43)		Float _hx_tmp;
HXDLIN(  43)		if ((timer > 0)) {
HXLINE(  43)			_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE(  43)			_hx_tmp = ( (Float)(0) );
            		}
HXDLIN(  43)		this->lastStamp = _hx_tmp;
HXLINE(  44)		this->positionChanged = true;
HXLINE(  45)		if ((v > this->duration)) {
HXLINE(  45)			v = this->duration;
            		}
            		else {
HXLINE(  46)			if ((v < 0)) {
HXLINE(  46)				v = ( (Float)(0) );
            			}
            		}
HXLINE(  47)		return (this->position = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Channel_obj,set_position,return )

bool Channel_obj::set_pause(bool v){
            	HX_STACKFRAME(&_hx_pos_74f39a42c6ea7c2d_50_set_pause)
HXLINE(  51)		if (!(v)) {
HXLINE(  51)			int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  51)			Float _hx_tmp;
HXDLIN(  51)			if ((timer > 0)) {
HXLINE(  51)				_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            			}
            			else {
HXLINE(  51)				_hx_tmp = ( (Float)(0) );
            			}
HXDLIN(  51)			this->lastStamp = _hx_tmp;
            		}
HXLINE(  52)		return (this->pause = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Channel_obj,set_pause,return )

void Channel_obj::updateCurrentVolume(Float now){
            	HX_STACKFRAME(&_hx_pos_74f39a42c6ea7c2d_55_updateCurrentVolume)
HXLINE(  56)		bool _hx_tmp;
HXDLIN(  56)		if (this->pause) {
HXLINE(  56)			_hx_tmp = ::hx::IsNotNull( this->currentFade );
            		}
            		else {
HXLINE(  56)			_hx_tmp = false;
            		}
HXDLIN(  56)		if (_hx_tmp) {
HXLINE(  57)			 ::Dynamic f = this->currentFade;
HXLINE(  58)			this->currentFade = null();
HXLINE(  59)			this->updateCurrentVolume(now);
HXLINE(  60)			this->currentFade = f;
            		}
HXLINE(  62)		this->super::updateCurrentVolume(now);
HXLINE(  63)		this->channelGroup->updateCurrentVolume(now);
HXLINE(  64)		 ::hxd::snd::Channel _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  64)		_hx_tmp1->currentVolume = (_hx_tmp1->currentVolume * (this->channelGroup->currentVolume * this->soundGroup->volume));
HXLINE(  66)		if (::hx::IsNotNull( this->manager )) {
HXLINE(  67)			{
HXLINE(  67)				int _g = 0;
HXDLIN(  67)				::Array< ::Dynamic> _g1 = this->channelGroup->effects;
HXDLIN(  67)				while((_g < _g1->length)){
HXLINE(  67)					 ::hxd::snd::Effect e = _g1->__get(_g).StaticCast<  ::hxd::snd::Effect >();
HXDLIN(  67)					_g = (_g + 1);
HXDLIN(  67)					 ::hxd::snd::Channel _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  67)					Float _hx_tmp1 = _hx_tmp->currentVolume;
HXDLIN(  67)					_hx_tmp->currentVolume = (_hx_tmp1 * e->getVolumeModifier());
            				}
            			}
HXLINE(  68)			{
HXLINE(  68)				int _g2 = 0;
HXDLIN(  68)				::Array< ::Dynamic> _g3 = this->effects;
HXDLIN(  68)				while((_g2 < _g3->length)){
HXLINE(  68)					 ::hxd::snd::Effect e = _g3->__get(_g2).StaticCast<  ::hxd::snd::Effect >();
HXDLIN(  68)					_g2 = (_g2 + 1);
HXDLIN(  68)					 ::hxd::snd::Channel _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  68)					Float _hx_tmp1 = _hx_tmp->currentVolume;
HXDLIN(  68)					_hx_tmp->currentVolume = (_hx_tmp1 * e->getVolumeModifier());
            				}
            			}
            		}
            	}


void Channel_obj::calcAudibleVolume(Float now){
            	HX_STACKFRAME(&_hx_pos_74f39a42c6ea7c2d_72_calcAudibleVolume)
HXLINE(  73)		this->updateCurrentVolume(now);
HXLINE(  74)		this->audibleVolume = this->currentVolume;
HXLINE(  76)		if (::hx::IsNotNull( this->manager )) {
HXLINE(  77)			{
HXLINE(  77)				int _g = 0;
HXDLIN(  77)				::Array< ::Dynamic> _g1 = this->channelGroup->effects;
HXDLIN(  77)				while((_g < _g1->length)){
HXLINE(  77)					 ::hxd::snd::Effect e = _g1->__get(_g).StaticCast<  ::hxd::snd::Effect >();
HXDLIN(  77)					_g = (_g + 1);
HXDLIN(  77)					this->audibleVolume = e->applyAudibleVolumeModifier(this->audibleVolume);
            				}
            			}
HXLINE(  78)			{
HXLINE(  78)				int _g2 = 0;
HXDLIN(  78)				::Array< ::Dynamic> _g3 = this->effects;
HXDLIN(  78)				while((_g2 < _g3->length)){
HXLINE(  78)					 ::hxd::snd::Effect e = _g3->__get(_g2).StaticCast<  ::hxd::snd::Effect >();
HXDLIN(  78)					_g2 = (_g2 + 1);
HXDLIN(  78)					this->audibleVolume = e->applyAudibleVolumeModifier(this->audibleVolume);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Channel_obj,calcAudibleVolume,(void))

void Channel_obj::queueSound( ::hxd::res::Sound sound){
            	HX_STACKFRAME(&_hx_pos_74f39a42c6ea7c2d_87_queueSound)
HXDLIN(  87)		this->queue->push(sound);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Channel_obj,queueSound,(void))

void Channel_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_74f39a42c6ea7c2d_91_stop)
HXDLIN(  91)		if (::hx::IsNotNull( this->manager )) {
HXDLIN(  91)			this->manager->releaseChannel(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Channel_obj,stop,(void))

bool Channel_obj::isReleased(){
            	HX_STACKFRAME(&_hx_pos_74f39a42c6ea7c2d_95_isReleased)
HXDLIN(  95)		return ::hx::IsNull( this->manager );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Channel_obj,isReleased,return )

int Channel_obj::ID;


void Channel_obj::__alloc_dynamic_functions(::hx::Ctx *_hx_ctx,Channel_obj *_hx_obj) {
	if (!_hx_obj->onEnd.mPtr) _hx_obj->onEnd = new __default_onEnd(_hx_obj);
}
::hx::ObjectPtr< Channel_obj > Channel_obj::__new() {
	::hx::ObjectPtr< Channel_obj > __this = new Channel_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Channel_obj > Channel_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Channel_obj *__this = (Channel_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Channel_obj), true, "hxd.snd.Channel"));
	*(void **)__this = Channel_obj::_hx_vtable;
	hxd::snd::Channel_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct();
	return __this;
}

Channel_obj::Channel_obj()
{
	onEnd = new __default_onEnd(this);
}

void Channel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Channel);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(source,"source");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(sound,"sound");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(soundGroup,"soundGroup");
	HX_MARK_MEMBER_NAME(channelGroup,"channelGroup");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(pause,"pause");
	HX_MARK_MEMBER_NAME(loop,"loop");
	HX_MARK_MEMBER_NAME(allowVirtual,"allowVirtual");
	HX_MARK_MEMBER_NAME(audibleVolume,"audibleVolume");
	HX_MARK_MEMBER_NAME(lastStamp,"lastStamp");
	HX_MARK_MEMBER_NAME(isVirtual,"isVirtual");
	HX_MARK_MEMBER_NAME(isLoading,"isLoading");
	HX_MARK_MEMBER_NAME(positionChanged,"positionChanged");
	HX_MARK_MEMBER_NAME(queue,"queue");
	HX_MARK_MEMBER_NAME(onEnd,"onEnd");
	 ::hxd::snd::ChannelBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Channel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(manager,"manager");
	HX_VISIT_MEMBER_NAME(source,"source");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(sound,"sound");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(soundGroup,"soundGroup");
	HX_VISIT_MEMBER_NAME(channelGroup,"channelGroup");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(pause,"pause");
	HX_VISIT_MEMBER_NAME(loop,"loop");
	HX_VISIT_MEMBER_NAME(allowVirtual,"allowVirtual");
	HX_VISIT_MEMBER_NAME(audibleVolume,"audibleVolume");
	HX_VISIT_MEMBER_NAME(lastStamp,"lastStamp");
	HX_VISIT_MEMBER_NAME(isVirtual,"isVirtual");
	HX_VISIT_MEMBER_NAME(isLoading,"isLoading");
	HX_VISIT_MEMBER_NAME(positionChanged,"positionChanged");
	HX_VISIT_MEMBER_NAME(queue,"queue");
	HX_VISIT_MEMBER_NAME(onEnd,"onEnd");
	 ::hxd::snd::ChannelBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Channel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		if (HX_FIELD_EQ(inName,"loop") ) { return ::hx::Val( loop ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { return ::hx::Val( sound ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause ); }
		if (HX_FIELD_EQ(inName,"queue") ) { return ::hx::Val( queue ); }
		if (HX_FIELD_EQ(inName,"onEnd") ) { return ::hx::Val( onEnd ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { return ::hx::Val( source ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return ::hx::Val( manager ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return ::hx::Val( duration ); }
		if (HX_FIELD_EQ(inName,"position") ) { return ::hx::Val( position ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastStamp") ) { return ::hx::Val( lastStamp ); }
		if (HX_FIELD_EQ(inName,"isVirtual") ) { return ::hx::Val( isVirtual ); }
		if (HX_FIELD_EQ(inName,"isLoading") ) { return ::hx::Val( isLoading ); }
		if (HX_FIELD_EQ(inName,"set_pause") ) { return ::hx::Val( set_pause_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"soundGroup") ) { return ::hx::Val( soundGroup ); }
		if (HX_FIELD_EQ(inName,"queueSound") ) { return ::hx::Val( queueSound_dyn() ); }
		if (HX_FIELD_EQ(inName,"isReleased") ) { return ::hx::Val( isReleased_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"channelGroup") ) { return ::hx::Val( channelGroup ); }
		if (HX_FIELD_EQ(inName,"allowVirtual") ) { return ::hx::Val( allowVirtual ); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return ::hx::Val( set_position_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"audibleVolume") ) { return ::hx::Val( audibleVolume ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"positionChanged") ) { return ::hx::Val( positionChanged ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"calcAudibleVolume") ) { return ::hx::Val( calcAudibleVolume_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateCurrentVolume") ) { return ::hx::Val( updateCurrentVolume_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Channel_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { outValue = ( ID ); return true; }
	}
	return false;
}

::hx::Val Channel_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::hxd::snd::Channel >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loop") ) { loop=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast<  ::hxd::res::Sound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pause") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pause(inValue.Cast< bool >()) );pause=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"queue") ) { queue=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onEnd") ) { onEnd=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { source=inValue.Cast<  ::hxd::snd::Source >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast<  ::hxd::snd::Manager >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_position(inValue.Cast< Float >()) );position=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastStamp") ) { lastStamp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isVirtual") ) { isVirtual=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isLoading") ) { isLoading=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"soundGroup") ) { soundGroup=inValue.Cast<  ::hxd::snd::SoundGroup >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"channelGroup") ) { channelGroup=inValue.Cast<  ::hxd::snd::ChannelGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowVirtual") ) { allowVirtual=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"audibleVolume") ) { audibleVolume=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"positionChanged") ) { positionChanged=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Channel_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Channel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("next",f3,84,02,49));
	outFields->push(HX_("manager",6d,92,c1,13));
	outFields->push(HX_("source",db,b0,31,32));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("sound",cf,8c,cc,80));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("soundGroup",f0,c7,39,03));
	outFields->push(HX_("channelGroup",7c,7f,a7,9e));
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("pause",f6,d6,57,bd));
	outFields->push(HX_("loop",64,a6,b7,47));
	outFields->push(HX_("allowVirtual",82,b4,4a,58));
	outFields->push(HX_("audibleVolume",fc,86,6b,8d));
	outFields->push(HX_("lastStamp",cd,9d,b8,d0));
	outFields->push(HX_("isVirtual",41,1b,10,1b));
	outFields->push(HX_("isLoading",b2,4b,f1,0c));
	outFields->push(HX_("positionChanged",4b,8f,04,cc));
	outFields->push(HX_("queue",91,8d,ea,5d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Channel_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::snd::Channel */ ,(int)offsetof(Channel_obj,next),HX_("next",f3,84,02,49)},
	{::hx::fsObject /*  ::hxd::snd::Manager */ ,(int)offsetof(Channel_obj,manager),HX_("manager",6d,92,c1,13)},
	{::hx::fsObject /*  ::hxd::snd::Source */ ,(int)offsetof(Channel_obj,source),HX_("source",db,b0,31,32)},
	{::hx::fsInt,(int)offsetof(Channel_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsObject /*  ::hxd::res::Sound */ ,(int)offsetof(Channel_obj,sound),HX_("sound",cf,8c,cc,80)},
	{::hx::fsFloat,(int)offsetof(Channel_obj,duration),HX_("duration",54,0f,8e,14)},
	{::hx::fsObject /*  ::hxd::snd::SoundGroup */ ,(int)offsetof(Channel_obj,soundGroup),HX_("soundGroup",f0,c7,39,03)},
	{::hx::fsObject /*  ::hxd::snd::ChannelGroup */ ,(int)offsetof(Channel_obj,channelGroup),HX_("channelGroup",7c,7f,a7,9e)},
	{::hx::fsFloat,(int)offsetof(Channel_obj,position),HX_("position",a9,a0,fa,ca)},
	{::hx::fsBool,(int)offsetof(Channel_obj,pause),HX_("pause",f6,d6,57,bd)},
	{::hx::fsBool,(int)offsetof(Channel_obj,loop),HX_("loop",64,a6,b7,47)},
	{::hx::fsBool,(int)offsetof(Channel_obj,allowVirtual),HX_("allowVirtual",82,b4,4a,58)},
	{::hx::fsFloat,(int)offsetof(Channel_obj,audibleVolume),HX_("audibleVolume",fc,86,6b,8d)},
	{::hx::fsFloat,(int)offsetof(Channel_obj,lastStamp),HX_("lastStamp",cd,9d,b8,d0)},
	{::hx::fsBool,(int)offsetof(Channel_obj,isVirtual),HX_("isVirtual",41,1b,10,1b)},
	{::hx::fsBool,(int)offsetof(Channel_obj,isLoading),HX_("isLoading",b2,4b,f1,0c)},
	{::hx::fsBool,(int)offsetof(Channel_obj,positionChanged),HX_("positionChanged",4b,8f,04,cc)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Channel_obj,queue),HX_("queue",91,8d,ea,5d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Channel_obj,onEnd),HX_("onEnd",fc,97,64,32)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Channel_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Channel_obj::ID,HX_("ID",db,3f,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Channel_obj_sMemberFields[] = {
	HX_("next",f3,84,02,49),
	HX_("manager",6d,92,c1,13),
	HX_("source",db,b0,31,32),
	HX_("id",db,5b,00,00),
	HX_("sound",cf,8c,cc,80),
	HX_("duration",54,0f,8e,14),
	HX_("soundGroup",f0,c7,39,03),
	HX_("channelGroup",7c,7f,a7,9e),
	HX_("position",a9,a0,fa,ca),
	HX_("pause",f6,d6,57,bd),
	HX_("loop",64,a6,b7,47),
	HX_("allowVirtual",82,b4,4a,58),
	HX_("audibleVolume",fc,86,6b,8d),
	HX_("lastStamp",cd,9d,b8,d0),
	HX_("isVirtual",41,1b,10,1b),
	HX_("isLoading",b2,4b,f1,0c),
	HX_("positionChanged",4b,8f,04,cc),
	HX_("queue",91,8d,ea,5d),
	HX_("onEnd",fc,97,64,32),
	HX_("set_position",26,78,0d,95),
	HX_("set_pause",59,1f,52,e4),
	HX_("updateCurrentVolume",2a,a3,36,d6),
	HX_("calcAudibleVolume",27,45,14,16),
	HX_("queueSound",7e,a1,6f,51),
	HX_("stop",02,f0,5b,4c),
	HX_("isReleased",c7,9a,96,f1),
	::String(null()) };

static void Channel_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Channel_obj::ID,"ID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Channel_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Channel_obj::ID,"ID");
};

#endif

::hx::Class Channel_obj::__mClass;

static ::String Channel_obj_sStaticFields[] = {
	HX_("ID",db,3f,00,00),
	::String(null())
};

void Channel_obj::__register()
{
	Channel_obj _hx_dummy;
	Channel_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.Channel",84,12,79,a2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Channel_obj::__GetStatic;
	__mClass->mSetStaticField = &Channel_obj::__SetStatic;
	__mClass->mMarkFunc = Channel_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Channel_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Channel_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Channel_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Channel_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Channel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Channel_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Channel_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_74f39a42c6ea7c2d_5_boot)
HXDLIN(   5)		ID = 0;
            	}
}

} // end namespace hxd
} // end namespace snd
