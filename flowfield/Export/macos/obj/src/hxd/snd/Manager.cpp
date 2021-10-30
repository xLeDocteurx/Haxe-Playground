#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_MainEvent
#include <haxe/MainEvent.h>
#endif
#ifndef INCLUDED_haxe_MainLoop
#include <haxe/MainLoop.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_fs_FileEntry
#include <hxd/fs/FileEntry.h>
#endif
#ifndef INCLUDED_hxd_impl_ArrayIterator_hxd_snd_Channel
#include <hxd/impl/ArrayIterator_hxd_snd_Channel.h>
#endif
#ifndef INCLUDED_hxd_res_Resource
#include <hxd/res/Resource.h>
#endif
#ifndef INCLUDED_hxd_res_Sound
#include <hxd/res/Sound.h>
#endif
#ifndef INCLUDED_hxd_snd_Buffer
#include <hxd/snd/Buffer.h>
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
#ifndef INCLUDED_hxd_snd_Driver
#include <hxd/snd/Driver.h>
#endif
#ifndef INCLUDED_hxd_snd_DriverFeature
#include <hxd/snd/DriverFeature.h>
#endif
#ifndef INCLUDED_hxd_snd_Effect
#include <hxd/snd/Effect.h>
#endif
#ifndef INCLUDED_hxd_snd_EffectDriver
#include <hxd/snd/EffectDriver.h>
#endif
#ifndef INCLUDED_hxd_snd_Listener
#include <hxd/snd/Listener.h>
#endif
#ifndef INCLUDED_hxd_snd_Manager
#include <hxd/snd/Manager.h>
#endif
#ifndef INCLUDED_hxd_snd_SampleFormat
#include <hxd/snd/SampleFormat.h>
#endif
#ifndef INCLUDED_hxd_snd_SoundGroup
#include <hxd/snd/SoundGroup.h>
#endif
#ifndef INCLUDED_hxd_snd_Source
#include <hxd/snd/Source.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_BufferHandle
#include <hxd/snd/openal/BufferHandle.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_Driver
#include <hxd/snd/openal/Driver.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_Emulator
#include <hxd/snd/openal/Emulator.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_SourceHandle
#include <hxd/snd/openal/SourceHandle.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3d66295943142d0c_60_new,"hxd.snd.Manager","new",0x0fb4f420,"hxd.snd.Manager.new","hxd/snd/Manager.hx",60,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_135_getTmpBytes,"hxd.snd.Manager","getTmpBytes",0xecfbce8a,"hxd.snd.Manager.getTmpBytes","hxd/snd/Manager.hx",135,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_141_getResampleBytes,"hxd.snd.Manager","getResampleBytes",0x1b9e90d8,"hxd.snd.Manager.getResampleBytes","hxd/snd/Manager.hx",141,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_157_stopAll,"hxd.snd.Manager","stopAll",0xaa5c31ff,"hxd.snd.Manager.stopAll","hxd/snd/Manager.hx",157,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_161_stopAllNotLooping,"hxd.snd.Manager","stopAllNotLooping",0x8b77af0a,"hxd.snd.Manager.stopAllNotLooping","hxd/snd/Manager.hx",161,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_170_stopByName,"hxd.snd.Manager","stopByName",0x122c51a4,"hxd.snd.Manager.stopByName","hxd/snd/Manager.hx",170,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_182_getAll,"hxd.snd.Manager","getAll",0x47b8e66b,"hxd.snd.Manager.getAll","hxd/snd/Manager.hx",182,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_193_cleanCache,"hxd.snd.Manager","cleanCache",0x56e03c39,"hxd.snd.Manager.cleanCache","hxd/snd/Manager.hx",193,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_208_dispose,"hxd.snd.Manager","dispose",0x226a845f,"hxd.snd.Manager.dispose","hxd/snd/Manager.hx",208,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_229_play,"hxd.snd.Manager","play",0xaff85234,"hxd.snd.Manager.play","hxd/snd/Manager.hx",229,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_250_updateVirtualChannels,"hxd.snd.Manager","updateVirtualChannels",0x30734f32,"hxd.snd.Manager.updateVirtualChannels","hxd/snd/Manager.hx",250,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_283_update,"hxd.snd.Manager","update",0x2ba53a49,"hxd.snd.Manager.update","hxd/snd/Manager.hx",283,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_571_progressiveDecodeBuffer,"hxd.snd.Manager","progressiveDecodeBuffer",0x64b29f79,"hxd.snd.Manager.progressiveDecodeBuffer","hxd/snd/Manager.hx",571,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_595_queueBuffer,"hxd.snd.Manager","queueBuffer",0x9d6ea531,"hxd.snd.Manager.queueBuffer","hxd/snd/Manager.hx",595,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_618_unqueueBuffer,"hxd.snd.Manager","unqueueBuffer",0x31f98b78,"hxd.snd.Manager.unqueueBuffer","hxd/snd/Manager.hx",618,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_637_bindEffect,"hxd.snd.Manager","bindEffect",0x62fc046e,"hxd.snd.Manager.bindEffect","hxd/snd/Manager.hx",637,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_644_unbindEffect,"hxd.snd.Manager","unbindEffect",0xd798c407,"hxd.snd.Manager.unbindEffect","hxd/snd/Manager.hx",644,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_653_releaseSource,"hxd.snd.Manager","releaseSource",0x2b700dc2,"hxd.snd.Manager.releaseSource","hxd/snd/Manager.hx",653,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_674_checkTargetFormat,"hxd.snd.Manager","checkTargetFormat",0x4471ee10,"hxd.snd.Manager.checkTargetFormat","hxd/snd/Manager.hx",674,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_694_getSoundBuffer,"hxd.snd.Manager","getSoundBuffer",0x612e0a79,"hxd.snd.Manager.getSoundBuffer","hxd/snd/Manager.hx",694,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_706_getSoundBuffer,"hxd.snd.Manager","getSoundBuffer",0x612e0a79,"hxd.snd.Manager.getSoundBuffer","hxd/snd/Manager.hx",706,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_716_fillSoundBuffer,"hxd.snd.Manager","fillSoundBuffer",0x85ac292c,"hxd.snd.Manager.fillSoundBuffer","hxd/snd/Manager.hx",716,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_728_getStreamBuffer,"hxd.snd.Manager","getStreamBuffer",0x0f6abf16,"hxd.snd.Manager.getStreamBuffer","hxd/snd/Manager.hx",728,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_772_sortChannel,"hxd.snd.Manager","sortChannel",0xc77eacc5,"hxd.snd.Manager.sortChannel","hxd/snd/Manager.hx",772,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_789_sortEffect,"hxd.snd.Manager","sortEffect",0x97b7a4cf,"hxd.snd.Manager.sortEffect","hxd/snd/Manager.hx",789,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_792_releaseChannel,"hxd.snd.Manager","releaseChannel",0xea24edfc,"hxd.snd.Manager.releaseChannel","hxd/snd/Manager.hx",792,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_147_get,"hxd.snd.Manager","get",0x0fafa456,"hxd.snd.Manager.get","hxd/snd/Manager.hx",147,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_627_regEffect,"hxd.snd.Manager","regEffect",0xbe38d2c5,"hxd.snd.Manager.regEffect","hxd/snd/Manager.hx",627,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_62_boot,"hxd.snd.Manager","boot",0xa6b9a872,"hxd.snd.Manager.boot","hxd/snd/Manager.hx",62,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_63_boot,"hxd.snd.Manager","boot",0xa6b9a872,"hxd.snd.Manager.boot","hxd/snd/Manager.hx",63,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_64_boot,"hxd.snd.Manager","boot",0xa6b9a872,"hxd.snd.Manager.boot","hxd/snd/Manager.hx",64,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_65_boot,"hxd.snd.Manager","boot",0xa6b9a872,"hxd.snd.Manager.boot","hxd/snd/Manager.hx",65,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_66_boot,"hxd.snd.Manager","boot",0xa6b9a872,"hxd.snd.Manager.boot","hxd/snd/Manager.hx",66,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_67_boot,"hxd.snd.Manager","boot",0xa6b9a872,"hxd.snd.Manager.boot","hxd/snd/Manager.hx",67,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_3d66295943142d0c_72_boot,"hxd.snd.Manager","boot",0xa6b9a872,"hxd.snd.Manager.boot","hxd/snd/Manager.hx",72,0x82fafa52)
namespace hxd{
namespace snd{

void Manager_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_3d66295943142d0c_60_new)
HXLINE(  99)		this->suspended = false;
HXLINE(  80)		this->timeOffset = ((Float)0.);
HXLINE( 102)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 108)			this->driver =  ::hxd::snd::openal::Driver_obj::__alloc( HX_CTX );
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 102)				if (::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::String >())) {
HXLINE( 111)					this->driver = null();
            				}
            				else {
HXLINE( 102)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 114)		this->masterVolume = ((Float)1.0);
HXLINE( 115)		bool _hx_tmp;
HXDLIN( 115)		if (::hx::IsNull( this->driver )) {
HXLINE( 115)			_hx_tmp = true;
            		}
            		else {
HXLINE( 115)			_hx_tmp = ::hxd::snd::Driver_obj::hasFeature(this->driver,::hxd::snd::DriverFeature_obj::MasterVolume_dyn());
            		}
HXDLIN( 115)		this->hasMasterVolume = _hx_tmp;
HXLINE( 116)		this->masterSoundGroup =  ::hxd::snd::SoundGroup_obj::__alloc( HX_CTX ,HX_("master",a2,80,20,bb));
HXLINE( 117)		this->masterChannelGroup =  ::hxd::snd::ChannelGroup_obj::__alloc( HX_CTX ,HX_("master",a2,80,20,bb));
HXLINE( 118)		this->listener =  ::hxd::snd::Listener_obj::__alloc( HX_CTX );
HXLINE( 119)		this->soundBufferMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 120)		this->soundBufferKeys = ::Array_obj< ::String >::__new(0);
HXLINE( 121)		this->freeStreamBuffers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 122)		this->effectGC = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 123)		this->soundBufferCount = 0;
HXLINE( 125)		if (::hx::IsNotNull( this->driver )) {
HXLINE( 127)			this->sources = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 128)			{
HXLINE( 128)				int _g = 0;
HXDLIN( 128)				int _g1 = ::hxd::snd::Manager_obj::MAX_SOURCES;
HXDLIN( 128)				while((_g < _g1)){
HXLINE( 128)					_g = (_g + 1);
HXDLIN( 128)					int i = (_g - 1);
HXDLIN( 128)					::Array< ::Dynamic> _hx_tmp = this->sources;
HXDLIN( 128)					_hx_tmp->push( ::hxd::snd::Source_obj::__alloc( HX_CTX ,this->driver));
            				}
            			}
            		}
HXLINE( 131)		this->cachedBytes = ::haxe::io::Bytes_obj::alloc(24);
HXLINE( 132)		this->resampleBytes = ::haxe::io::Bytes_obj::alloc((::hxd::snd::Manager_obj::STREAM_BUFFER_SAMPLE_COUNT * 2));
            	}

Dynamic Manager_obj::__CreateEmpty() { return new Manager_obj; }

void *Manager_obj::_hx_vtable = 0;

Dynamic Manager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Manager_obj > _hx_result = new Manager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Manager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f906b08;
}

 ::haxe::io::Bytes Manager_obj::getTmpBytes(int size){
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_135_getTmpBytes)
HXLINE( 136)		if ((this->cachedBytes->length < size)) {
HXLINE( 137)			this->cachedBytes = ::haxe::io::Bytes_obj::alloc(size);
            		}
HXLINE( 138)		return this->cachedBytes;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,getTmpBytes,return )

 ::haxe::io::Bytes Manager_obj::getResampleBytes(int size){
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_141_getResampleBytes)
HXLINE( 142)		if ((this->resampleBytes->length < size)) {
HXLINE( 143)			this->resampleBytes = ::haxe::io::Bytes_obj::alloc(size);
            		}
HXLINE( 144)		return this->resampleBytes;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,getResampleBytes,return )

void Manager_obj::stopAll(){
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_157_stopAll)
HXDLIN( 157)		while(::hx::IsNotNull( this->channels )){
HXLINE( 158)			this->channels->stop();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Manager_obj,stopAll,(void))

void Manager_obj::stopAllNotLooping(){
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_161_stopAllNotLooping)
HXLINE( 162)		 ::hxd::snd::Channel c = this->channels;
HXLINE( 163)		while(::hx::IsNotNull( c )){
HXLINE( 164)			 ::hxd::snd::Channel n = c->next;
HXLINE( 165)			if (!(c->loop)) {
HXLINE( 165)				c->stop();
            			}
HXLINE( 166)			c = n;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Manager_obj,stopAllNotLooping,(void))

void Manager_obj::stopByName(::String name){
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_170_stopByName)
HXLINE( 171)		 ::hxd::snd::Channel c = this->channels;
HXLINE( 172)		while(::hx::IsNotNull( c )){
HXLINE( 173)			 ::hxd::snd::Channel n = c->next;
HXLINE( 174)			bool _hx_tmp;
HXDLIN( 174)			if (::hx::IsNotNull( c->soundGroup )) {
HXLINE( 174)				_hx_tmp = (c->soundGroup->name == name);
            			}
            			else {
HXLINE( 174)				_hx_tmp = false;
            			}
HXDLIN( 174)			if (_hx_tmp) {
HXLINE( 174)				c->stop();
            			}
HXLINE( 175)			c = n;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,stopByName,(void))

 ::Dynamic Manager_obj::getAll( ::hxd::res::Sound sound){
            	HX_GC_STACKFRAME(&_hx_pos_3d66295943142d0c_182_getAll)
HXLINE( 183)		 ::hxd::snd::Channel ch = this->channels;
HXLINE( 184)		::Array< ::Dynamic> result = ::Array_obj< ::Dynamic>::__new();
HXLINE( 185)		while(::hx::IsNotNull( ch )){
HXLINE( 186)			if (::hx::IsInstanceEq( ch->sound,sound )) {
HXLINE( 187)				result->push(ch);
            			}
HXLINE( 188)			ch = ch->next;
            		}
HXLINE( 190)		return  ::hxd::impl::ArrayIterator_hxd_snd_Channel_obj::__alloc( HX_CTX ,result);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,getAll,return )

void Manager_obj::cleanCache(){
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_193_cleanCache)
HXLINE( 194)		int i = 0;
HXLINE( 195)		while((i < this->soundBufferKeys->length)){
HXLINE( 196)			::String k = this->soundBufferKeys->__get(i);
HXLINE( 197)			 ::hxd::snd::Buffer b = ( ( ::hxd::snd::Buffer)(this->soundBufferMap->get(k)) );
HXLINE( 198)			i = (i + 1);
HXLINE( 199)			if ((b->refs > 0)) {
HXLINE( 199)				continue;
            			}
HXLINE( 200)			this->soundBufferMap->remove(k);
HXLINE( 201)			this->soundBufferKeys->remove(k);
HXLINE( 202)			i = (i - 1);
HXLINE( 203)			b->dispose();
HXLINE( 204)			--this->soundBufferCount;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Manager_obj,cleanCache,(void))

void Manager_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_208_dispose)
HXLINE( 209)		this->stopAll();
HXLINE( 211)		if (::hx::IsNotNull( this->driver )) {
HXLINE( 212)			{
HXLINE( 212)				int _g = 0;
HXDLIN( 212)				::Array< ::Dynamic> _g1 = this->sources;
HXDLIN( 212)				while((_g < _g1->length)){
HXLINE( 212)					 ::hxd::snd::Source s = _g1->__get(_g).StaticCast<  ::hxd::snd::Source >();
HXDLIN( 212)					_g = (_g + 1);
HXDLIN( 212)					s->dispose();
            				}
            			}
HXLINE( 213)			{
HXLINE( 213)				 ::Dynamic b = this->soundBufferMap->iterator();
HXDLIN( 213)				while(( (bool)(b->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 213)					 ::hxd::snd::Buffer b1 = ( ( ::hxd::snd::Buffer)(b->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 213)					b1->dispose();
            				}
            			}
HXLINE( 214)			{
HXLINE( 214)				int _g2 = 0;
HXDLIN( 214)				::Array< ::Dynamic> _g3 = this->freeStreamBuffers;
HXDLIN( 214)				while((_g2 < _g3->length)){
HXLINE( 214)					 ::hxd::snd::Buffer b = _g3->__get(_g2).StaticCast<  ::hxd::snd::Buffer >();
HXDLIN( 214)					_g2 = (_g2 + 1);
HXDLIN( 214)					b->dispose();
            				}
            			}
HXLINE( 215)			{
HXLINE( 215)				int _g4 = 0;
HXDLIN( 215)				::Array< ::Dynamic> _g5 = this->effectGC;
HXDLIN( 215)				while((_g4 < _g5->length)){
HXLINE( 215)					 ::hxd::snd::Effect e = _g5->__get(_g4).StaticCast<  ::hxd::snd::Effect >();
HXDLIN( 215)					_g4 = (_g4 + 1);
HXDLIN( 215)					e->driver->release();
            				}
            			}
HXLINE( 216)			::hxd::snd::Driver_obj::dispose(this->driver);
            		}
HXLINE( 219)		this->sources = null();
HXLINE( 220)		this->soundBufferMap = null();
HXLINE( 221)		this->soundBufferKeys = null();
HXLINE( 222)		this->freeStreamBuffers = null();
HXLINE( 223)		this->effectGC = null();
HXLINE( 225)		this->updateEvent->stop();
HXLINE( 226)		::hxd::snd::Manager_obj::instance = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Manager_obj,dispose,(void))

 ::hxd::snd::Channel Manager_obj::play( ::hxd::res::Sound sound, ::hxd::snd::ChannelGroup channelGroup, ::hxd::snd::SoundGroup soundGroup){
            	HX_GC_STACKFRAME(&_hx_pos_3d66295943142d0c_229_play)
HXLINE( 230)		if (::hx::IsNull( soundGroup )) {
HXLINE( 230)			soundGroup = this->masterSoundGroup;
            		}
HXLINE( 231)		if (::hx::IsNull( channelGroup )) {
HXLINE( 231)			channelGroup = this->masterChannelGroup;
            		}
HXLINE( 233)		 ::hxd::snd::Data sdat = sound->getData();
HXLINE( 234)		if ((sdat->samples == 0)) {
HXLINE( 234)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((::Std_obj::string(sound) + HX_(" has no samples",50,1d,5d,89))));
            		}
HXLINE( 236)		 ::hxd::snd::Channel c =  ::hxd::snd::Channel_obj::__alloc( HX_CTX );
HXLINE( 237)		c->sound = sound;
HXLINE( 238)		c->duration = sdat->get_duration();
HXLINE( 239)		c->manager = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 240)		c->soundGroup = soundGroup;
HXLINE( 241)		c->channelGroup = channelGroup;
HXLINE( 242)		c->next = this->channels;
HXLINE( 243)		c->isLoading = sdat->isLoading();
HXLINE( 244)		c->isVirtual = ::hx::IsNull( this->driver );
HXLINE( 246)		this->channels = c;
HXLINE( 247)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Manager_obj,play,return )

void Manager_obj::updateVirtualChannels(Float now){
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_250_updateVirtualChannels)
HXLINE( 251)		 ::hxd::snd::Channel c = this->channels;
HXLINE( 252)		while(::hx::IsNotNull( c )){
HXLINE( 253)			bool _hx_tmp;
HXDLIN( 253)			bool _hx_tmp1;
HXDLIN( 253)			if (!(c->pause)) {
HXLINE( 253)				_hx_tmp1 = !(c->isVirtual);
            			}
            			else {
HXLINE( 253)				_hx_tmp1 = true;
            			}
HXDLIN( 253)			if (!(_hx_tmp1)) {
HXLINE( 253)				_hx_tmp = c->isLoading;
            			}
            			else {
HXLINE( 253)				_hx_tmp = true;
            			}
HXDLIN( 253)			if (_hx_tmp) {
HXLINE( 254)				c = c->next;
HXLINE( 255)				continue;
            			}
HXLINE( 258)			Float a = (now - c->lastStamp);
HXDLIN( 258)			Float _hx_tmp2;
HXDLIN( 258)			if ((a < ((Float)0.0))) {
HXLINE( 258)				_hx_tmp2 = ((Float)0.0);
            			}
            			else {
HXLINE( 258)				_hx_tmp2 = a;
            			}
HXDLIN( 258)			c->set_position((c->position + _hx_tmp2));
HXLINE( 259)			c->lastStamp = now;
HXLINE( 261)			 ::hxd::snd::Channel next = c->next;
HXLINE( 262)			while((c->position >= c->duration)){
HXLINE( 263)				c->set_position((c->position - c->duration));
HXLINE( 264)				c->onEnd();
HXLINE( 267)				bool _hx_tmp;
HXDLIN( 267)				if (::hx::IsNotNull( next )) {
HXLINE( 267)					_hx_tmp = ::hx::IsNull( next->manager );
            				}
            				else {
HXLINE( 267)					_hx_tmp = false;
            				}
HXDLIN( 267)				if (_hx_tmp) {
HXLINE( 268)					next = null();
            				}
HXLINE( 270)				if ((c->queue->length > 0)) {
HXLINE( 271)					c->sound = c->queue->shift().StaticCast<  ::hxd::res::Sound >();
HXLINE( 272)					c->duration = c->sound->getData()->get_duration();
            				}
            				else {
HXLINE( 273)					if (!(c->loop)) {
HXLINE( 274)						this->releaseChannel(c);
HXLINE( 275)						goto _hx_goto_21;
            					}
            				}
            			}
            			_hx_goto_21:;
HXLINE( 279)			c = next;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,updateVirtualChannels,(void))

void Manager_obj::update(){
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_283_update)
HXLINE( 284)		if ((this->timeOffset != 0)) {
HXLINE( 285)			 ::hxd::snd::Channel c = this->channels;
HXLINE( 286)			while(::hx::IsNotNull( c )){
HXLINE( 287)				 ::hxd::snd::Channel c1 = c;
HXDLIN( 287)				c1->lastStamp = (c1->lastStamp + this->timeOffset);
HXLINE( 288)				if (::hx::IsNotNull( c->currentFade )) {
HXLINE( 288)					 ::Dynamic fh = c->currentFade;
HXDLIN( 288)					fh->__SetField(HX_("start",62,74,0b,84),(fh->__Field(HX_("start",62,74,0b,84),::hx::paccDynamic) + this->timeOffset),::hx::paccDynamic);
            				}
HXLINE( 289)				c = c->next;
            			}
HXLINE( 291)			{
HXLINE( 291)				int _g = 0;
HXDLIN( 291)				::Array< ::Dynamic> _g1 = this->sources;
HXDLIN( 291)				while((_g < _g1->length)){
HXLINE( 291)					 ::hxd::snd::Source s = _g1->__get(_g).StaticCast<  ::hxd::snd::Source >();
HXDLIN( 291)					_g = (_g + 1);
HXLINE( 292)					{
HXLINE( 292)						int _g2 = 0;
HXDLIN( 292)						::Array< ::Dynamic> _g3 = s->buffers;
HXDLIN( 292)						while((_g2 < _g3->length)){
HXLINE( 292)							 ::hxd::snd::Buffer b = _g3->__get(_g2).StaticCast<  ::hxd::snd::Buffer >();
HXDLIN( 292)							_g2 = (_g2 + 1);
HXLINE( 293)							 ::hxd::snd::Buffer b1 = b;
HXDLIN( 293)							b1->lastStop = (b1->lastStop + this->timeOffset);
            						}
            					}
            				}
            			}
HXLINE( 294)			this->timeOffset = ( (Float)(0) );
            		}
HXLINE( 296)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 296)		Float _hx_tmp;
HXDLIN( 296)		if ((timer > 0)) {
HXLINE( 296)			_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE( 296)			_hx_tmp = ( (Float)(0) );
            		}
HXDLIN( 296)		this->now = _hx_tmp;
HXLINE( 298)		if (::hx::IsNull( this->driver )) {
HXLINE( 299)			this->updateVirtualChannels(this->now);
HXLINE( 300)			return;
            		}
HXLINE( 307)		{
HXLINE( 307)			int _g = 0;
HXDLIN( 307)			::Array< ::Dynamic> _g1 = this->sources;
HXDLIN( 307)			while((_g < _g1->length)){
HXLINE( 307)				 ::hxd::snd::Source s = _g1->__get(_g).StaticCast<  ::hxd::snd::Source >();
HXDLIN( 307)				_g = (_g + 1);
HXLINE( 308)				 ::hxd::snd::Channel c = s->channel;
HXLINE( 309)				if (::hx::IsNull( c )) {
HXLINE( 309)					continue;
            				}
HXLINE( 312)				if (c->positionChanged) {
HXLINE( 313)					this->releaseSource(s);
HXLINE( 314)					continue;
            				}
HXLINE( 318)				 ::hxd::snd::Buffer lastBuffer = null();
HXLINE( 319)				int count = ::hxd::snd::Driver_obj::getProcessedBuffers(this->driver,s->handle);
HXLINE( 320)				{
HXLINE( 320)					int _g2 = 0;
HXDLIN( 320)					int _g3 = count;
HXDLIN( 320)					while((_g2 < _g3)){
HXLINE( 320)						_g2 = (_g2 + 1);
HXDLIN( 320)						int i = (_g2 - 1);
HXLINE( 321)						 ::hxd::snd::Buffer b = this->unqueueBuffer(s);
HXLINE( 322)						if (::hx::IsNull( b )) {
HXLINE( 322)							continue;
            						}
HXLINE( 323)						lastBuffer = b;
HXLINE( 324)						if (b->isEnd) {
HXLINE( 325)							c->sound = b->sound;
HXLINE( 326)							c->duration = b->sound->getData()->get_duration();
HXLINE( 327)							c->set_position(c->duration);
HXLINE( 328)							c->positionChanged = false;
HXLINE( 329)							c->onEnd();
HXLINE( 330)							s->start = 0;
            						}
            					}
            				}
HXLINE( 335)				if ((s->buffers->length == 0)) {
HXLINE( 336)					if (!(lastBuffer->isEnd)) {
HXLINE( 337)						c->set_position((( (Float)((lastBuffer->start + lastBuffer->samples)) ) / ( (Float)(lastBuffer->sampleRate) )));
HXLINE( 338)						this->releaseSource(s);
            					}
            					else {
HXLINE( 339)						if ((c->queue->length > 0)) {
HXLINE( 340)							c->sound = c->queue->shift().StaticCast<  ::hxd::res::Sound >();
HXLINE( 341)							c->duration = c->sound->getData()->get_duration();
HXLINE( 342)							c->set_position(( (Float)(0) ));
HXLINE( 343)							this->releaseSource(s);
            						}
            						else {
HXLINE( 344)							if (c->loop) {
HXLINE( 345)								c->set_position(( (Float)(0) ));
HXLINE( 346)								this->releaseSource(s);
            							}
            							else {
HXLINE( 348)								this->releaseChannel(c);
            							}
            						}
            					}
HXLINE( 350)					continue;
            				}
HXLINE( 354)				c->sound = s->buffers->__get(0).StaticCast<  ::hxd::snd::Buffer >()->sound;
HXLINE( 355)				c->duration = c->sound->getData()->get_duration();
HXLINE( 357)				int playedSamples = ::hxd::snd::Driver_obj::getPlayedSampleCount(this->driver,s->handle);
HXLINE( 358)				if ((playedSamples < 0)) {
HXLINE( 362)					playedSamples = 0;
            				}
HXLINE( 364)				c->set_position((( (Float)(playedSamples) ) / ( (Float)(s->buffers->__get(0).StaticCast<  ::hxd::snd::Buffer >()->sampleRate) )));
HXLINE( 365)				c->positionChanged = false;
HXLINE( 368)				if ((s->buffers->length < ::hxd::snd::Manager_obj::BUFFER_QUEUE_LENGTH)) {
HXLINE( 369)					 ::hxd::snd::Buffer b = s->buffers->__get((s->buffers->length - 1)).StaticCast<  ::hxd::snd::Buffer >();
HXLINE( 370)					if (!(b->isEnd)) {
HXLINE( 372)						this->queueBuffer(s,b->sound,(b->start + b->samples));
            					}
            					else {
HXLINE( 373)						if ((c->queue->length > 0)) {
HXLINE( 375)							 ::hxd::res::Sound snd = c->queue->__get(0).StaticCast<  ::hxd::res::Sound >();
HXLINE( 376)							if (this->queueBuffer(s,snd,0)) {
HXLINE( 377)								c->queue->shift().StaticCast<  ::hxd::res::Sound >();
            							}
            						}
            						else {
HXLINE( 378)							if (c->loop) {
HXLINE( 380)								this->queueBuffer(s,b->sound,0);
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 389)		 ::hxd::snd::Channel c = this->channels;
HXLINE( 390)		while(::hx::IsNotNull( c )){
HXLINE( 391)			c->calcAudibleVolume(this->now);
HXLINE( 392)			bool _hx_tmp;
HXDLIN( 392)			if (c->isLoading) {
HXLINE( 392)				_hx_tmp = !(c->sound->getData()->isLoading());
            			}
            			else {
HXLINE( 392)				_hx_tmp = false;
            			}
HXDLIN( 392)			if (_hx_tmp) {
HXLINE( 393)				c->isLoading = false;
            			}
HXLINE( 394)			bool _hx_tmp1;
HXDLIN( 394)			bool _hx_tmp2;
HXDLIN( 394)			bool _hx_tmp3;
HXDLIN( 394)			bool _hx_tmp4;
HXDLIN( 394)			bool _hx_tmp5;
HXDLIN( 394)			if (!(this->suspended)) {
HXLINE( 394)				_hx_tmp5 = c->pause;
            			}
            			else {
HXLINE( 394)				_hx_tmp5 = true;
            			}
HXDLIN( 394)			if (!(_hx_tmp5)) {
HXLINE( 394)				_hx_tmp4 = c->mute;
            			}
            			else {
HXLINE( 394)				_hx_tmp4 = true;
            			}
HXDLIN( 394)			if (!(_hx_tmp4)) {
HXLINE( 394)				_hx_tmp3 = c->channelGroup->mute;
            			}
            			else {
HXLINE( 394)				_hx_tmp3 = true;
            			}
HXDLIN( 394)			if (!(_hx_tmp3)) {
HXLINE( 394)				if (c->allowVirtual) {
HXLINE( 394)					_hx_tmp2 = (c->audibleVolume < ::hxd::snd::Manager_obj::VIRTUAL_VOLUME_THRESHOLD);
            				}
            				else {
HXLINE( 394)					_hx_tmp2 = false;
            				}
            			}
            			else {
HXLINE( 394)				_hx_tmp2 = true;
            			}
HXDLIN( 394)			if (!(_hx_tmp2)) {
HXLINE( 394)				_hx_tmp1 = c->isLoading;
            			}
            			else {
HXLINE( 394)				_hx_tmp1 = true;
            			}
HXDLIN( 394)			c->isVirtual = _hx_tmp1;
HXLINE( 395)			c = c->next;
            		}
HXLINE( 402)		 ::hxd::snd::Channel list = this->channels;
HXDLIN( 402)		 ::Dynamic cmp = this->sortChannel_dyn();
HXDLIN( 402)		 ::hxd::snd::Channel _hx_tmp1;
HXDLIN( 402)		if (::hx::IsNull( list )) {
HXLINE( 402)			_hx_tmp1 = null();
            		}
            		else {
HXLINE( 402)			int insize = 1;
HXDLIN( 402)			int nmerges;
HXDLIN( 402)			int psize = 0;
HXDLIN( 402)			int qsize = 0;
HXDLIN( 402)			 ::hxd::snd::Channel p;
HXDLIN( 402)			 ::hxd::snd::Channel q;
HXDLIN( 402)			 ::hxd::snd::Channel e;
HXDLIN( 402)			 ::hxd::snd::Channel tail;
HXDLIN( 402)			while(true){
HXLINE( 402)				p = list;
HXDLIN( 402)				list = null();
HXDLIN( 402)				tail = null();
HXDLIN( 402)				nmerges = 0;
HXDLIN( 402)				while(::hx::IsNotNull( p )){
HXLINE( 402)					nmerges = (nmerges + 1);
HXDLIN( 402)					q = p;
HXDLIN( 402)					psize = 0;
HXDLIN( 402)					{
HXLINE( 402)						int _g = 0;
HXDLIN( 402)						int _g1 = insize;
HXDLIN( 402)						while((_g < _g1)){
HXLINE( 402)							_g = (_g + 1);
HXDLIN( 402)							int i = (_g - 1);
HXDLIN( 402)							psize = (psize + 1);
HXDLIN( 402)							q = q->next;
HXDLIN( 402)							if (::hx::IsNull( q )) {
HXLINE( 402)								goto _hx_goto_31;
            							}
            						}
            						_hx_goto_31:;
            					}
HXDLIN( 402)					qsize = insize;
HXDLIN( 402)					while(true){
HXLINE( 402)						bool _hx_tmp;
HXDLIN( 402)						if ((psize <= 0)) {
HXLINE( 402)							if ((qsize > 0)) {
HXLINE( 402)								_hx_tmp = ::hx::IsNotNull( q );
            							}
            							else {
HXLINE( 402)								_hx_tmp = false;
            							}
            						}
            						else {
HXLINE( 402)							_hx_tmp = true;
            						}
HXDLIN( 402)						if (!(_hx_tmp)) {
HXLINE( 402)							goto _hx_goto_32;
            						}
HXDLIN( 402)						if ((psize == 0)) {
HXLINE( 402)							e = q;
HXDLIN( 402)							q = q->next;
HXDLIN( 402)							qsize = (qsize - 1);
            						}
            						else {
HXLINE( 402)							bool _hx_tmp;
HXDLIN( 402)							bool _hx_tmp1;
HXDLIN( 402)							if ((qsize != 0)) {
HXLINE( 402)								_hx_tmp1 = ::hx::IsNull( q );
            							}
            							else {
HXLINE( 402)								_hx_tmp1 = true;
            							}
HXDLIN( 402)							if (!(_hx_tmp1)) {
HXLINE( 402)								_hx_tmp = ::hx::IsLessEq( cmp(p,q),0 );
            							}
            							else {
HXLINE( 402)								_hx_tmp = true;
            							}
HXDLIN( 402)							if (_hx_tmp) {
HXLINE( 402)								e = p;
HXDLIN( 402)								p = p->next;
HXDLIN( 402)								psize = (psize - 1);
            							}
            							else {
HXLINE( 402)								e = q;
HXDLIN( 402)								q = q->next;
HXDLIN( 402)								qsize = (qsize - 1);
            							}
            						}
HXDLIN( 402)						if (::hx::IsNotNull( tail )) {
HXLINE( 402)							tail->next = e;
            						}
            						else {
HXLINE( 402)							list = e;
            						}
HXDLIN( 402)						tail = e;
            					}
            					_hx_goto_32:;
HXDLIN( 402)					p = q;
            				}
HXDLIN( 402)				tail->next = null();
HXDLIN( 402)				if ((nmerges <= 1)) {
HXLINE( 402)					goto _hx_goto_29;
            				}
HXDLIN( 402)				insize = (insize * 2);
            			}
            			_hx_goto_29:;
HXDLIN( 402)			_hx_tmp1 = list;
            		}
HXDLIN( 402)		this->channels = _hx_tmp1;
HXLINE( 408)		int audibleCount = 0;
HXLINE( 409)		 ::hxd::snd::Channel c1 = this->channels;
HXLINE( 410)		while(true){
HXLINE( 410)			bool _hx_tmp;
HXDLIN( 410)			if (::hx::IsNotNull( c1 )) {
HXLINE( 410)				_hx_tmp = !(c1->isVirtual);
            			}
            			else {
HXLINE( 410)				_hx_tmp = false;
            			}
HXDLIN( 410)			if (!(_hx_tmp)) {
HXLINE( 410)				goto _hx_goto_33;
            			}
HXLINE( 411)			audibleCount = (audibleCount + 1);
HXDLIN( 411)			if ((audibleCount > this->sources->length)) {
HXLINE( 411)				c1->isVirtual = true;
            			}
            			else {
HXLINE( 412)				if ((c1->soundGroup->maxAudible >= 0)) {
HXLINE( 413)					if ((c1->soundGroup->lastUpdate != this->now)) {
HXLINE( 414)						c1->soundGroup->lastUpdate = this->now;
HXLINE( 415)						c1->soundGroup->numAudible = 0;
            					}
HXLINE( 417)					if ((++c1->soundGroup->numAudible > c1->soundGroup->maxAudible)) {
HXLINE( 418)						c1->isVirtual = true;
HXLINE( 419)						audibleCount = (audibleCount - 1);
            					}
            				}
            			}
HXLINE( 422)			c1 = c1->next;
            		}
            		_hx_goto_33:;
HXLINE( 429)		{
HXLINE( 429)			int _g2 = 0;
HXDLIN( 429)			::Array< ::Dynamic> _g3 = this->sources;
HXDLIN( 429)			while((_g2 < _g3->length)){
HXLINE( 429)				 ::hxd::snd::Source s = _g3->__get(_g2).StaticCast<  ::hxd::snd::Source >();
HXDLIN( 429)				_g2 = (_g2 + 1);
HXLINE( 430)				bool _hx_tmp;
HXDLIN( 430)				if (::hx::IsNotNull( s->channel )) {
HXLINE( 430)					_hx_tmp = !(s->channel->isVirtual);
            				}
            				else {
HXLINE( 430)					_hx_tmp = true;
            				}
HXDLIN( 430)				if (_hx_tmp) {
HXLINE( 430)					continue;
            				}
HXLINE( 431)				this->releaseSource(s);
            			}
            		}
HXLINE( 438)		 ::hxd::snd::Channel c2 = this->channels;
HXLINE( 439)		while(::hx::IsNotNull( c2 )){
HXLINE( 440)			bool _hx_tmp;
HXDLIN( 440)			if (::hx::IsNull( c2->source )) {
HXLINE( 440)				_hx_tmp = c2->isVirtual;
            			}
            			else {
HXLINE( 440)				_hx_tmp = true;
            			}
HXDLIN( 440)			if (_hx_tmp) {
HXLINE( 441)				c2 = c2->next;
HXLINE( 442)				continue;
            			}
HXLINE( 446)			 ::hxd::snd::Source s = null();
HXLINE( 447)			{
HXLINE( 447)				int _g = 0;
HXDLIN( 447)				::Array< ::Dynamic> _g1 = this->sources;
HXDLIN( 447)				while((_g < _g1->length)){
HXLINE( 447)					 ::hxd::snd::Source s2 = _g1->__get(_g).StaticCast<  ::hxd::snd::Source >();
HXDLIN( 447)					_g = (_g + 1);
HXDLIN( 447)					if (::hx::IsNull( s2->channel )) {
HXLINE( 448)						s = s2;
HXLINE( 449)						goto _hx_goto_36;
            					}
            				}
            				_hx_goto_36:;
            			}
HXLINE( 452)			if (::hx::IsNull( s )) {
HXLINE( 452)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("could not get a source",b0,96,b3,69)));
            			}
HXLINE( 453)			s->channel = c2;
HXLINE( 454)			c2->source = s;
HXLINE( 456)			 ::hxd::snd::Data _hx_tmp1 = c2->sound->getData();
HXDLIN( 456)			this->checkTargetFormat(_hx_tmp1,c2->soundGroup->mono);
HXLINE( 457)			s->start = ::Math_obj::floor((c2->position * ( (Float)(this->targetRate) )));
HXLINE( 458)			if ((s->start < 0)) {
HXLINE( 458)				s->start = 0;
            			}
HXLINE( 459)			this->queueBuffer(s,c2->sound,s->start);
HXLINE( 460)			c2->positionChanged = false;
HXLINE( 461)			c2 = c2->next;
            		}
HXLINE( 468)		 ::hxd::snd::Effect usedEffects = null();
HXLINE( 469)		Float volume;
HXDLIN( 469)		if (this->hasMasterVolume) {
HXLINE( 469)			volume = ((Float)1.);
            		}
            		else {
HXLINE( 469)			volume = this->masterVolume;
            		}
HXLINE( 470)		{
HXLINE( 470)			int _g4 = 0;
HXDLIN( 470)			::Array< ::Dynamic> _g5 = this->sources;
HXDLIN( 470)			while((_g4 < _g5->length)){
HXLINE( 470)				 ::hxd::snd::Source s = _g5->__get(_g4).StaticCast<  ::hxd::snd::Source >();
HXDLIN( 470)				_g4 = (_g4 + 1);
HXLINE( 471)				 ::hxd::snd::Channel c = s->channel;
HXLINE( 472)				if (::hx::IsNull( c )) {
HXLINE( 472)					continue;
            				}
HXLINE( 474)				Float v = (c->currentVolume * volume);
HXLINE( 475)				if ((s->volume != v)) {
HXLINE( 476)					if ((v < 0)) {
HXLINE( 476)						v = ( (Float)(0) );
            					}
HXLINE( 477)					s->volume = v;
HXLINE( 478)					::hxd::snd::Driver_obj::setSourceVolume(this->driver,s->handle,v);
            				}
HXLINE( 484)				if (!(s->playing)) {
HXLINE( 485)					::hxd::snd::Driver_obj::playSource(this->driver,s->handle);
HXLINE( 486)					s->playing = true;
            				}
HXLINE( 490)				int i = c->bindedEffects->length;
HXLINE( 491)				while(true){
HXLINE( 491)					i = (i - 1);
HXDLIN( 491)					if (!((i >= 0))) {
HXLINE( 491)						goto _hx_goto_38;
            					}
HXLINE( 492)					 ::hxd::snd::Effect e = c->bindedEffects->__get(i).StaticCast<  ::hxd::snd::Effect >();
HXLINE( 493)					bool _hx_tmp;
HXDLIN( 493)					if ((c->effects->indexOf(e,null()) < 0)) {
HXLINE( 493)						_hx_tmp = (c->channelGroup->effects->indexOf(e,null()) < 0);
            					}
            					else {
HXLINE( 493)						_hx_tmp = false;
            					}
HXDLIN( 493)					if (_hx_tmp) {
HXLINE( 494)						this->unbindEffect(c,s,e);
            					}
            				}
            				_hx_goto_38:;
HXLINE( 498)				{
HXLINE( 498)					int _g = 0;
HXDLIN( 498)					::Array< ::Dynamic> _g1 = c->channelGroup->effects;
HXDLIN( 498)					while((_g < _g1->length)){
HXLINE( 498)						 ::hxd::snd::Effect e = _g1->__get(_g).StaticCast<  ::hxd::snd::Effect >();
HXDLIN( 498)						_g = (_g + 1);
HXDLIN( 498)						if ((c->bindedEffects->indexOf(e,null()) < 0)) {
HXLINE( 498)							this->bindEffect(c,s,e);
            						}
            					}
            				}
HXLINE( 499)				{
HXLINE( 499)					int _g2 = 0;
HXDLIN( 499)					::Array< ::Dynamic> _g3 = c->effects;
HXDLIN( 499)					while((_g2 < _g3->length)){
HXLINE( 499)						 ::hxd::snd::Effect e = _g3->__get(_g2).StaticCast<  ::hxd::snd::Effect >();
HXDLIN( 499)						_g2 = (_g2 + 1);
HXDLIN( 499)						if ((c->bindedEffects->indexOf(e,null()) < 0)) {
HXLINE( 499)							this->bindEffect(c,s,e);
            						}
            					}
            				}
HXLINE( 502)				{
HXLINE( 502)					int _g6 = 0;
HXDLIN( 502)					::Array< ::Dynamic> _g7 = c->bindedEffects;
HXDLIN( 502)					while((_g6 < _g7->length)){
HXLINE( 502)						 ::hxd::snd::Effect e = _g7->__get(_g6).StaticCast<  ::hxd::snd::Effect >();
HXDLIN( 502)						_g6 = (_g6 + 1);
HXDLIN( 502)						usedEffects = ::hxd::snd::Manager_obj::regEffect(usedEffects,e);
            					}
            				}
            			}
            		}
HXLINE( 509)		 ::hxd::snd::Effect list1 = usedEffects;
HXDLIN( 509)		 ::Dynamic cmp1 = this->sortEffect_dyn();
HXDLIN( 509)		if (::hx::IsNull( list1 )) {
HXLINE( 509)			usedEffects = null();
            		}
            		else {
HXLINE( 509)			int insize = 1;
HXDLIN( 509)			int nmerges;
HXDLIN( 509)			int psize = 0;
HXDLIN( 509)			int qsize = 0;
HXDLIN( 509)			 ::hxd::snd::Effect p;
HXDLIN( 509)			 ::hxd::snd::Effect q;
HXDLIN( 509)			 ::hxd::snd::Effect e;
HXDLIN( 509)			 ::hxd::snd::Effect tail;
HXDLIN( 509)			while(true){
HXLINE( 509)				p = list1;
HXDLIN( 509)				list1 = null();
HXDLIN( 509)				tail = null();
HXDLIN( 509)				nmerges = 0;
HXDLIN( 509)				while(::hx::IsNotNull( p )){
HXLINE( 509)					nmerges = (nmerges + 1);
HXDLIN( 509)					q = p;
HXDLIN( 509)					psize = 0;
HXDLIN( 509)					{
HXLINE( 509)						int _g = 0;
HXDLIN( 509)						int _g1 = insize;
HXDLIN( 509)						while((_g < _g1)){
HXLINE( 509)							_g = (_g + 1);
HXDLIN( 509)							int i = (_g - 1);
HXDLIN( 509)							psize = (psize + 1);
HXDLIN( 509)							q = q->next;
HXDLIN( 509)							if (::hx::IsNull( q )) {
HXLINE( 509)								goto _hx_goto_44;
            							}
            						}
            						_hx_goto_44:;
            					}
HXDLIN( 509)					qsize = insize;
HXDLIN( 509)					while(true){
HXLINE( 509)						bool usedEffects;
HXDLIN( 509)						if ((psize <= 0)) {
HXLINE( 509)							if ((qsize > 0)) {
HXLINE( 509)								usedEffects = ::hx::IsNotNull( q );
            							}
            							else {
HXLINE( 509)								usedEffects = false;
            							}
            						}
            						else {
HXLINE( 509)							usedEffects = true;
            						}
HXDLIN( 509)						if (!(usedEffects)) {
HXLINE( 509)							goto _hx_goto_45;
            						}
HXDLIN( 509)						if ((psize == 0)) {
HXLINE( 509)							e = q;
HXDLIN( 509)							q = q->next;
HXDLIN( 509)							qsize = (qsize - 1);
            						}
            						else {
HXLINE( 509)							bool usedEffects;
HXDLIN( 509)							bool usedEffects1;
HXDLIN( 509)							if ((qsize != 0)) {
HXLINE( 509)								usedEffects1 = ::hx::IsNull( q );
            							}
            							else {
HXLINE( 509)								usedEffects1 = true;
            							}
HXDLIN( 509)							if (!(usedEffects1)) {
HXLINE( 509)								usedEffects = ::hx::IsLessEq( cmp1(p,q),0 );
            							}
            							else {
HXLINE( 509)								usedEffects = true;
            							}
HXDLIN( 509)							if (usedEffects) {
HXLINE( 509)								e = p;
HXDLIN( 509)								p = p->next;
HXDLIN( 509)								psize = (psize - 1);
            							}
            							else {
HXLINE( 509)								e = q;
HXDLIN( 509)								q = q->next;
HXDLIN( 509)								qsize = (qsize - 1);
            							}
            						}
HXDLIN( 509)						if (::hx::IsNotNull( tail )) {
HXLINE( 509)							tail->next = e;
            						}
            						else {
HXLINE( 509)							list1 = e;
            						}
HXDLIN( 509)						tail = e;
            					}
            					_hx_goto_45:;
HXDLIN( 509)					p = q;
            				}
HXDLIN( 509)				tail->next = null();
HXDLIN( 509)				if ((nmerges <= 1)) {
HXLINE( 509)					goto _hx_goto_42;
            				}
HXDLIN( 509)				insize = (insize * 2);
            			}
            			_hx_goto_42:;
HXDLIN( 509)			usedEffects = list1;
            		}
HXLINE( 510)		 ::hxd::snd::Effect e = usedEffects;
HXLINE( 511)		while(::hx::IsNotNull( e )){
HXLINE( 512)			e->driver->update(e);
HXLINE( 513)			e = e->next;
            		}
HXLINE( 516)		{
HXLINE( 516)			int _g6 = 0;
HXDLIN( 516)			::Array< ::Dynamic> _g7 = this->sources;
HXDLIN( 516)			while((_g6 < _g7->length)){
HXLINE( 516)				 ::hxd::snd::Source s = _g7->__get(_g6).StaticCast<  ::hxd::snd::Source >();
HXDLIN( 516)				_g6 = (_g6 + 1);
HXLINE( 517)				 ::hxd::snd::Channel c = s->channel;
HXLINE( 518)				if (::hx::IsNull( c )) {
HXLINE( 518)					continue;
            				}
HXLINE( 519)				{
HXLINE( 519)					int _g = 0;
HXDLIN( 519)					::Array< ::Dynamic> _g1 = c->bindedEffects;
HXDLIN( 519)					while((_g < _g1->length)){
HXLINE( 519)						 ::hxd::snd::Effect e = _g1->__get(_g).StaticCast<  ::hxd::snd::Effect >();
HXDLIN( 519)						_g = (_g + 1);
HXDLIN( 519)						e->driver->apply(e,s->handle);
            					}
            				}
            			}
            		}
HXLINE( 522)		{
HXLINE( 522)			int _g8 = 0;
HXDLIN( 522)			::Array< ::Dynamic> _g9 = this->effectGC;
HXDLIN( 522)			while((_g8 < _g9->length)){
HXLINE( 522)				 ::hxd::snd::Effect e = _g9->__get(_g8).StaticCast<  ::hxd::snd::Effect >();
HXDLIN( 522)				_g8 = (_g8 + 1);
HXDLIN( 522)				if (((this->now - e->lastStamp) > e->retainTime)) {
HXLINE( 523)					e->driver->release();
HXLINE( 524)					this->effectGC->remove(e);
HXLINE( 525)					goto _hx_goto_49;
            				}
            			}
            			_hx_goto_49:;
            		}
HXLINE( 532)		this->updateVirtualChannels(this->now);
HXLINE( 538)		{
HXLINE( 538)			 ::h3d::Vector _this = this->listener->direction;
HXDLIN( 538)			Float k = (((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z));
HXDLIN( 538)			if ((k < ((Float)1e-10))) {
HXLINE( 538)				k = ( (Float)(0) );
            			}
            			else {
HXLINE( 538)				k = (((Float)1.) / ::Math_obj::sqrt(k));
            			}
HXDLIN( 538)			 ::h3d::Vector _this1 = _this;
HXDLIN( 538)			_this1->x = (_this1->x * k);
HXDLIN( 538)			 ::h3d::Vector _this2 = _this;
HXDLIN( 538)			_this2->y = (_this2->y * k);
HXDLIN( 538)			 ::h3d::Vector _this3 = _this;
HXDLIN( 538)			_this3->z = (_this3->z * k);
            		}
HXLINE( 539)		{
HXLINE( 539)			 ::h3d::Vector _this4 = this->listener->up;
HXDLIN( 539)			Float k1 = (((_this4->x * _this4->x) + (_this4->y * _this4->y)) + (_this4->z * _this4->z));
HXDLIN( 539)			if ((k1 < ((Float)1e-10))) {
HXLINE( 539)				k1 = ( (Float)(0) );
            			}
            			else {
HXLINE( 539)				k1 = (((Float)1.) / ::Math_obj::sqrt(k1));
            			}
HXDLIN( 539)			 ::h3d::Vector _this5 = _this4;
HXDLIN( 539)			_this5->x = (_this5->x * k1);
HXDLIN( 539)			 ::h3d::Vector _this6 = _this4;
HXDLIN( 539)			_this6->y = (_this6->y * k1);
HXDLIN( 539)			 ::h3d::Vector _this7 = _this4;
HXDLIN( 539)			_this7->z = (_this7->z * k1);
            		}
HXLINE( 541)		if (this->hasMasterVolume) {
HXLINE( 541)			::hxd::snd::Driver_obj::setMasterVolume(this->driver,this->masterVolume);
            		}
HXLINE( 542)		::hxd::snd::Driver_obj::setListenerParams(this->driver,this->listener->position,this->listener->direction,this->listener->up,this->listener->velocity);
HXLINE( 544)		::hxd::snd::Driver_obj::update(this->driver);
HXLINE( 550)		if ((this->soundBufferCount >= ::hxd::snd::Manager_obj::SOUND_BUFFER_CACHE_SIZE)) {
HXLINE( 551)			int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 551)			Float now;
HXDLIN( 551)			if ((timer > 0)) {
HXLINE( 551)				now = (( (Float)(timer) ) / ( (Float)(1000) ));
            			}
            			else {
HXLINE( 551)				now = ( (Float)(0) );
            			}
HXLINE( 552)			int i = 0;
HXLINE( 553)			while((i < this->soundBufferKeys->length)){
HXLINE( 554)				::String k = this->soundBufferKeys->__get(i);
HXLINE( 555)				 ::hxd::snd::Buffer b = ( ( ::hxd::snd::Buffer)(this->soundBufferMap->get(k)) );
HXLINE( 556)				i = (i + 1);
HXLINE( 557)				bool _hx_tmp;
HXDLIN( 557)				if ((b->refs <= 0)) {
HXLINE( 557)					_hx_tmp = ((b->lastStop + ((Float)60.0)) > now);
            				}
            				else {
HXLINE( 557)					_hx_tmp = true;
            				}
HXDLIN( 557)				if (_hx_tmp) {
HXLINE( 557)					continue;
            				}
HXLINE( 558)				this->soundBufferMap->remove(k);
HXLINE( 559)				this->soundBufferKeys->remove(k);
HXLINE( 560)				i = (i - 1);
HXLINE( 561)				b->dispose();
HXLINE( 562)				--this->soundBufferCount;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Manager_obj,update,(void))

bool Manager_obj::progressiveDecodeBuffer( ::hxd::snd::Source s, ::hxd::res::Sound snd,int start){
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_571_progressiveDecodeBuffer)
HXLINE( 572)		 ::hxd::snd::Data data = snd->getData();
HXLINE( 573)		int samples = ::Math_obj::ceil((( (Float)(::hxd::snd::Manager_obj::STREAM_BUFFER_SAMPLE_COUNT) ) / ( (Float)(::hxd::snd::Manager_obj::BUFFER_STREAM_SPLIT) )));
HXLINE( 574)		bool _hx_tmp;
HXDLIN( 574)		if ((s->streamStart == start)) {
HXLINE( 574)			_hx_tmp = ::hx::IsInstanceNotEq( s->streamSound,snd );
            		}
            		else {
HXLINE( 574)			_hx_tmp = true;
            		}
HXDLIN( 574)		if (_hx_tmp) {
HXLINE( 575)			s->streamSound = snd;
HXLINE( 576)			s->streamStart = start;
HXLINE( 577)			s->streamPos = start;
            		}
HXLINE( 579)		int end = (start + ::hxd::snd::Manager_obj::STREAM_BUFFER_SAMPLE_COUNT);
HXLINE( 580)		if ((s->streamPos == end)) {
HXLINE( 581)			return true;
            		}
HXLINE( 582)		int bpp = data->getBytesPerSample();
HXLINE( 583)		int reqSize = (::hxd::snd::Manager_obj::STREAM_BUFFER_SAMPLE_COUNT * bpp);
HXLINE( 584)		bool _hx_tmp1;
HXDLIN( 584)		if (::hx::IsNotNull( s->streamBuffer )) {
HXLINE( 584)			_hx_tmp1 = (s->streamBuffer->length < reqSize);
            		}
            		else {
HXLINE( 584)			_hx_tmp1 = true;
            		}
HXDLIN( 584)		if (_hx_tmp1) {
HXLINE( 585)			s->streamBuffer = ::haxe::io::Bytes_obj::alloc(reqSize);
HXLINE( 586)			s->streamPos = start;
            		}
HXLINE( 588)		int remain = (end - s->streamPos);
HXLINE( 589)		if ((remain > samples)) {
HXLINE( 589)			remain = samples;
            		}
HXLINE( 590)		data->decode(s->streamBuffer,((s->streamPos - start) * bpp),s->streamPos,remain);
HXLINE( 591)		 ::hxd::snd::Source s1 = s;
HXDLIN( 591)		s1->streamPos = (s1->streamPos + remain);
HXLINE( 592)		return (s->streamPos == end);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Manager_obj,progressiveDecodeBuffer,return )

bool Manager_obj::queueBuffer( ::hxd::snd::Source s, ::hxd::res::Sound snd,int start){
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_595_queueBuffer)
HXLINE( 596)		 ::hxd::snd::Data data = snd->getData();
HXLINE( 597)		 ::hxd::snd::SoundGroup sgroup = s->channel->soundGroup;
HXLINE( 599)		 ::hxd::snd::Buffer b = null();
HXLINE( 600)		Float _hx_tmp = data->get_duration();
HXDLIN( 600)		if ((_hx_tmp <= ::hxd::snd::Manager_obj::STREAM_DURATION)) {
HXLINE( 602)			b = this->getSoundBuffer(snd,sgroup);
HXLINE( 603)			::hxd::snd::Driver_obj::queueBuffer(this->driver,s->handle,b->handle,start,true);
            		}
            		else {
HXLINE( 607)			bool _hx_tmp;
HXDLIN( 607)			bool _hx_tmp1;
HXDLIN( 607)			if ((s->buffers->length > 0)) {
HXLINE( 607)				_hx_tmp1 = (::hxd::snd::Manager_obj::BUFFER_STREAM_SPLIT > 1);
            			}
            			else {
HXLINE( 607)				_hx_tmp1 = false;
            			}
HXDLIN( 607)			if (_hx_tmp1) {
HXLINE( 607)				_hx_tmp = !(this->progressiveDecodeBuffer(s,snd,start));
            			}
            			else {
HXLINE( 607)				_hx_tmp = false;
            			}
HXDLIN( 607)			if (_hx_tmp) {
HXLINE( 608)				return false;
            			}
HXLINE( 611)			b = this->getStreamBuffer(s,snd,sgroup,start);
HXLINE( 612)			::hxd::snd::Driver_obj::queueBuffer(this->driver,s->handle,b->handle,0,b->isEnd);
            		}
HXLINE( 614)		s->buffers->push(b);
HXLINE( 615)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Manager_obj,queueBuffer,return )

 ::hxd::snd::Buffer Manager_obj::unqueueBuffer( ::hxd::snd::Source s){
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_618_unqueueBuffer)
HXLINE( 619)		 ::hxd::snd::Buffer b = s->buffers->shift().StaticCast<  ::hxd::snd::Buffer >();
HXLINE( 620)		if (::hx::IsNull( b )) {
HXLINE( 620)			return null();
            		}
HXLINE( 621)		::hxd::snd::Driver_obj::unqueueBuffer(this->driver,s->handle,b->handle);
HXLINE( 622)		if (b->isStream) {
HXLINE( 622)			this->freeStreamBuffers->unshift(b);
            		}
            		else {
HXLINE( 623)			if ((--b->refs == 0)) {
HXLINE( 623)				int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 623)				Float _hx_tmp;
HXDLIN( 623)				if ((timer > 0)) {
HXLINE( 623)					_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            				}
            				else {
HXLINE( 623)					_hx_tmp = ( (Float)(0) );
            				}
HXDLIN( 623)				b->lastStop = _hx_tmp;
            			}
            		}
HXLINE( 624)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,unqueueBuffer,return )

void Manager_obj::bindEffect( ::hxd::snd::Channel c, ::hxd::snd::Source s, ::hxd::snd::Effect e){
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_637_bindEffect)
HXLINE( 638)		bool _hx_tmp;
HXDLIN( 638)		if ((e->refs == 0)) {
HXLINE( 638)			_hx_tmp = !(this->effectGC->remove(e));
            		}
            		else {
HXLINE( 638)			_hx_tmp = false;
            		}
HXDLIN( 638)		if (_hx_tmp) {
HXLINE( 638)			e->driver->acquire();
            		}
HXLINE( 639)		++e->refs;
HXLINE( 640)		e->driver->bind(e,s->handle);
HXLINE( 641)		c->bindedEffects->push(e);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Manager_obj,bindEffect,(void))

void Manager_obj::unbindEffect( ::hxd::snd::Channel c, ::hxd::snd::Source s, ::hxd::snd::Effect e){
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_644_unbindEffect)
HXLINE( 645)		e->driver->unbind(e,s->handle);
HXLINE( 646)		c->bindedEffects->remove(e);
HXLINE( 647)		if ((--e->refs == 0)) {
HXLINE( 648)			e->lastStamp = this->now;
HXLINE( 649)			this->effectGC->push(e);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Manager_obj,unbindEffect,(void))

void Manager_obj::releaseSource( ::hxd::snd::Source s){
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_653_releaseSource)
HXLINE( 654)		if (::hx::IsNotNull( s->channel )) {
HXLINE( 655)			{
HXLINE( 655)				int _g = 0;
HXDLIN( 655)				::Array< ::Dynamic> _g1 = s->channel->bindedEffects->copy();
HXDLIN( 655)				while((_g < _g1->length)){
HXLINE( 655)					 ::hxd::snd::Effect e = _g1->__get(_g).StaticCast<  ::hxd::snd::Effect >();
HXDLIN( 655)					_g = (_g + 1);
HXDLIN( 655)					this->unbindEffect(s->channel,s,e);
            				}
            			}
HXLINE( 656)			s->channel->bindedEffects = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 657)			s->channel->source = null();
HXLINE( 658)			s->channel = null();
            		}
HXLINE( 661)		if (s->playing) {
HXLINE( 662)			s->playing = false;
HXLINE( 663)			::hxd::snd::Driver_obj::stopSource(this->driver,s->handle);
HXLINE( 664)			s->volume = ((Float)-1.0);
            		}
HXLINE( 667)		while((s->buffers->length > 0)){
HXLINE( 667)			this->unqueueBuffer(s);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,releaseSource,(void))

bool Manager_obj::checkTargetFormat( ::hxd::snd::Data dat,::hx::Null< bool >  __o_forceMono){
            		bool forceMono = __o_forceMono.Default(false);
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_674_checkTargetFormat)
HXLINE( 676)		this->targetRate = dat->samplingRate;
HXLINE( 679)		this->targetRate = ( (int)(::hxd::snd::openal::Emulator_obj::get_NATIVE_FREQ()) );
HXLINE( 681)		int _hx_tmp;
HXDLIN( 681)		bool _hx_tmp1;
HXDLIN( 681)		if (!(forceMono)) {
HXLINE( 681)			_hx_tmp1 = (dat->channels == 1);
            		}
            		else {
HXLINE( 681)			_hx_tmp1 = true;
            		}
HXDLIN( 681)		if (_hx_tmp1) {
HXLINE( 681)			_hx_tmp = 1;
            		}
            		else {
HXLINE( 681)			_hx_tmp = 2;
            		}
HXDLIN( 681)		this->targetChannels = _hx_tmp;
HXLINE( 682)		 ::hxd::snd::SampleFormat _hx_tmp2;
HXDLIN( 682)		switch((int)(dat->sampleFormat->_hx_getIndex())){
            			case (int)0: {
HXLINE( 682)				_hx_tmp2 = ::hxd::snd::SampleFormat_obj::UI8_dyn();
            			}
            			break;
            			case (int)1: {
HXLINE( 682)				_hx_tmp2 = ::hxd::snd::SampleFormat_obj::I16_dyn();
            			}
            			break;
            			case (int)2: {
HXLINE( 682)				_hx_tmp2 = ::hxd::snd::SampleFormat_obj::I16_dyn();
            			}
            			break;
            		}
HXDLIN( 682)		this->targetFormat = _hx_tmp2;
HXLINE( 691)		bool _hx_tmp3;
HXDLIN( 691)		if ((this->targetChannels == dat->channels)) {
HXLINE( 691)			_hx_tmp3 = ::hx::IsPointerEq( this->targetFormat,dat->sampleFormat );
            		}
            		else {
HXLINE( 691)			_hx_tmp3 = false;
            		}
HXDLIN( 691)		if (_hx_tmp3) {
HXLINE( 691)			return (this->targetRate == dat->samplingRate);
            		}
            		else {
HXLINE( 691)			return false;
            		}
HXDLIN( 691)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,checkTargetFormat,return )

 ::hxd::snd::Buffer Manager_obj::getSoundBuffer( ::hxd::res::Sound snd, ::hxd::snd::SoundGroup grp){
            	HX_GC_STACKFRAME(&_hx_pos_3d66295943142d0c_694_getSoundBuffer)
HXDLIN( 694)		 ::hxd::snd::Manager _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 695)		 ::hxd::snd::Data data = snd->getData();
HXLINE( 696)		bool mono = grp->mono;
HXLINE( 697)		::String key = snd->entry->get_path();
HXLINE( 699)		bool _hx_tmp;
HXDLIN( 699)		if (mono) {
HXLINE( 699)			_hx_tmp = (data->channels != 1);
            		}
            		else {
HXLINE( 699)			_hx_tmp = false;
            		}
HXDLIN( 699)		if (_hx_tmp) {
HXLINE( 699)			key = (key + HX_("mono",23,dc,60,48));
            		}
HXLINE( 700)		::Array< ::Dynamic> b = ::Array_obj< ::Dynamic>::__new(1)->init(0,this->soundBufferMap->get(key));
HXLINE( 701)		if (::hx::IsNull( b->__get(0).StaticCast<  ::hxd::snd::Buffer >() )) {
            			HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0, ::hxd::snd::Manager,_gthis, ::hxd::snd::Data,data,::Array< ::Dynamic>,b,bool,mono) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_3d66295943142d0c_706_getSoundBuffer)
HXLINE( 706)				_gthis->fillSoundBuffer(b->__get(0).StaticCast<  ::hxd::snd::Buffer >(),data,mono);
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 702)			b[0] =  ::hxd::snd::Buffer_obj::__alloc( HX_CTX ,this->driver);
HXLINE( 703)			b->__get(0).StaticCast<  ::hxd::snd::Buffer >()->isStream = false;
HXLINE( 704)			b->__get(0).StaticCast<  ::hxd::snd::Buffer >()->isEnd = true;
HXLINE( 705)			b->__get(0).StaticCast<  ::hxd::snd::Buffer >()->sound = snd;
HXLINE( 706)			data->load( ::Dynamic(new _hx_Closure_0(_gthis,data,b,mono)));
HXLINE( 707)			this->soundBufferMap->set(key,b->__get(0).StaticCast<  ::hxd::snd::Buffer >());
HXLINE( 708)			this->soundBufferKeys->push(key);
HXLINE( 709)			++this->soundBufferCount;
            		}
HXLINE( 712)		++b->__get(0).StaticCast<  ::hxd::snd::Buffer >()->refs;
HXLINE( 713)		return b->__get(0).StaticCast<  ::hxd::snd::Buffer >();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,getSoundBuffer,return )

void Manager_obj::fillSoundBuffer( ::hxd::snd::Buffer buf, ::hxd::snd::Data dat,::hx::Null< bool >  __o_forceMono){
            		bool forceMono = __o_forceMono.Default(false);
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_716_fillSoundBuffer)
HXLINE( 717)		if (!(this->checkTargetFormat(dat,forceMono))) {
HXLINE( 718)			dat = dat->resample(this->targetRate,this->targetFormat,this->targetChannels);
            		}
HXLINE( 720)		int dat1 = dat->samples;
HXDLIN( 720)		int length = (dat1 * dat->getBytesPerSample());
HXLINE( 721)		 ::haxe::io::Bytes bytes = this->getTmpBytes(length);
HXLINE( 722)		dat->decode(bytes,0,0,dat->samples);
HXLINE( 723)		::hxd::snd::Driver_obj::setBufferData(this->driver,buf->handle,bytes,length,this->targetFormat,this->targetChannels,this->targetRate);
HXLINE( 724)		buf->sampleRate = this->targetRate;
HXLINE( 725)		buf->samples = dat->samples;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Manager_obj,fillSoundBuffer,(void))

 ::hxd::snd::Buffer Manager_obj::getStreamBuffer( ::hxd::snd::Source src, ::hxd::res::Sound snd, ::hxd::snd::SoundGroup grp,int start){
            	HX_GC_STACKFRAME(&_hx_pos_3d66295943142d0c_728_getStreamBuffer)
HXLINE( 729)		 ::hxd::snd::Data data = snd->getData();
HXLINE( 731)		 ::hxd::snd::Buffer b = this->freeStreamBuffers->shift().StaticCast<  ::hxd::snd::Buffer >();
HXLINE( 732)		if (::hx::IsNull( b )) {
HXLINE( 733)			b =  ::hxd::snd::Buffer_obj::__alloc( HX_CTX ,this->driver);
HXLINE( 734)			b->isStream = true;
            		}
HXLINE( 737)		int samples = ::hxd::snd::Manager_obj::STREAM_BUFFER_SAMPLE_COUNT;
HXLINE( 738)		if (((start + samples) >= data->samples)) {
HXLINE( 739)			samples = (data->samples - start);
HXLINE( 740)			b->isEnd = true;
            		}
            		else {
HXLINE( 742)			b->isEnd = false;
            		}
HXLINE( 745)		b->sound = snd;
HXLINE( 746)		b->samples = samples;
HXLINE( 747)		b->start = start;
HXLINE( 749)		int size = (samples * data->getBytesPerSample());
HXLINE( 750)		 ::haxe::io::Bytes bytes;
HXLINE( 751)		bool _hx_tmp;
HXDLIN( 751)		if (::hx::IsInstanceEq( src->streamSound,snd )) {
HXLINE( 751)			_hx_tmp = (src->streamStart == start);
            		}
            		else {
HXLINE( 751)			_hx_tmp = false;
            		}
HXDLIN( 751)		if (_hx_tmp) {
HXLINE( 753)			while(!(this->progressiveDecodeBuffer(src,snd,start))){
            			}
HXLINE( 754)			bytes = src->streamBuffer;
            		}
            		else {
HXLINE( 756)			bytes = this->getTmpBytes(size);
HXLINE( 757)			data->decode(bytes,0,start,samples);
            		}
HXLINE( 760)		if (!(this->checkTargetFormat(data,grp->mono))) {
HXLINE( 761)			int size1 = (::Math_obj::ceil((( (Float)(samples) ) * (( (Float)(this->targetRate) ) / ( (Float)(data->samplingRate) )))) * this->targetChannels);
HXDLIN( 761)			int size2;
HXDLIN( 761)			switch((int)(this->targetFormat->_hx_getIndex())){
            				case (int)0: {
HXLINE( 761)					size2 = 1;
            				}
            				break;
            				case (int)1: {
HXLINE( 761)					size2 = 2;
            				}
            				break;
            				case (int)2: {
HXLINE( 761)					size2 = 4;
            				}
            				break;
            			}
HXDLIN( 761)			size = (size1 * size2);
HXLINE( 762)			 ::haxe::io::Bytes resampleBytes = this->getResampleBytes(size);
HXLINE( 763)			data->resampleBuffer(resampleBytes,0,bytes,0,this->targetRate,this->targetFormat,this->targetChannels,samples);
HXLINE( 764)			bytes = resampleBytes;
            		}
HXLINE( 767)		::hxd::snd::Driver_obj::setBufferData(this->driver,b->handle,bytes,size,this->targetFormat,this->targetChannels,this->targetRate);
HXLINE( 768)		b->sampleRate = this->targetRate;
HXLINE( 769)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Manager_obj,getStreamBuffer,return )

int Manager_obj::sortChannel( ::hxd::snd::Channel a, ::hxd::snd::Channel b){
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_772_sortChannel)
HXLINE( 773)		if ((a->isVirtual != b->isVirtual)) {
HXLINE( 774)			if (a->isVirtual) {
HXLINE( 774)				return 1;
            			}
            			else {
HXLINE( 774)				return -1;
            			}
            		}
HXLINE( 776)		if ((a->channelGroup->priority != b->channelGroup->priority)) {
HXLINE( 777)			if ((a->channelGroup->priority < b->channelGroup->priority)) {
HXLINE( 777)				return 1;
            			}
            			else {
HXLINE( 777)				return -1;
            			}
            		}
HXLINE( 779)		if ((a->priority != b->priority)) {
HXLINE( 780)			if ((a->priority < b->priority)) {
HXLINE( 780)				return 1;
            			}
            			else {
HXLINE( 780)				return -1;
            			}
            		}
HXLINE( 782)		if ((a->audibleVolume != b->audibleVolume)) {
HXLINE( 783)			if ((a->audibleVolume < b->audibleVolume)) {
HXLINE( 783)				return 1;
            			}
            			else {
HXLINE( 783)				return -1;
            			}
            		}
HXLINE( 785)		if ((a->id < b->id)) {
HXLINE( 785)			return 1;
            		}
            		else {
HXLINE( 785)			return -1;
            		}
HXDLIN( 785)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,sortChannel,return )

int Manager_obj::sortEffect( ::hxd::snd::Effect a, ::hxd::snd::Effect b){
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_789_sortEffect)
HXDLIN( 789)		return (b->priority - a->priority);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,sortEffect,return )

void Manager_obj::releaseChannel( ::hxd::snd::Channel c){
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_792_releaseChannel)
HXLINE( 795)		if (::hx::IsNull( c->manager )) {
HXLINE( 796)			return;
            		}
HXLINE( 798)		if (::hx::IsInstanceEq( this->channels,c )) {
HXLINE( 799)			this->channels = c->next;
            		}
            		else {
HXLINE( 801)			 ::hxd::snd::Channel prev = this->channels;
HXLINE( 802)			while(::hx::IsInstanceNotEq( prev->next,c )){
HXLINE( 803)				prev = prev->next;
            			}
HXLINE( 804)			prev->next = c->next;
            		}
HXLINE( 807)		{
HXLINE( 807)			int _g = 0;
HXDLIN( 807)			::Array< ::Dynamic> _g1 = c->effects;
HXDLIN( 807)			while((_g < _g1->length)){
HXLINE( 807)				 ::hxd::snd::Effect e = _g1->__get(_g).StaticCast<  ::hxd::snd::Effect >();
HXDLIN( 807)				_g = (_g + 1);
HXDLIN( 807)				c->removeEffect(e);
            			}
            		}
HXLINE( 808)		if (::hx::IsNotNull( c->source )) {
HXLINE( 808)			this->releaseSource(c->source);
            		}
HXLINE( 809)		c->next = null();
HXLINE( 810)		c->manager = null();
HXLINE( 811)		c->effects = null();
HXLINE( 812)		c->bindedEffects = null();
HXLINE( 813)		c->currentFade = null();
HXLINE( 814)		{
HXLINE( 815)			 ::hxd::res::Sound snd = c->sound;
HXLINE( 816)			bool _hx_tmp;
HXDLIN( 816)			if (::hx::IsNotNull( snd )) {
HXLINE( 816)				_hx_tmp = ::hx::IsInstanceEq( snd->channel,c );
            			}
            			else {
HXLINE( 816)				_hx_tmp = false;
            			}
HXDLIN( 816)			if (_hx_tmp) {
HXLINE( 816)				snd->channel = null();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,releaseChannel,(void))

Float Manager_obj::STREAM_DURATION;

int Manager_obj::STREAM_BUFFER_SAMPLE_COUNT;

int Manager_obj::BUFFER_QUEUE_LENGTH;

int Manager_obj::MAX_SOURCES;

int Manager_obj::SOUND_BUFFER_CACHE_SIZE;

Float Manager_obj::VIRTUAL_VOLUME_THRESHOLD;

int Manager_obj::BUFFER_STREAM_SPLIT;

 ::hxd::snd::Manager Manager_obj::instance;

 ::hxd::snd::Manager Manager_obj::get(){
            	HX_GC_STACKFRAME(&_hx_pos_3d66295943142d0c_147_get)
HXLINE( 148)		if (::hx::IsNull( ::hxd::snd::Manager_obj::instance )) {
HXLINE( 149)			::hxd::snd::Manager_obj::instance =  ::hxd::snd::Manager_obj::__alloc( HX_CTX );
HXLINE( 150)			::hxd::snd::Manager_obj::instance->updateEvent = ::haxe::MainLoop_obj::add(::hxd::snd::Manager_obj::instance->update_dyn(),null());
HXLINE( 151)			::hxd::snd::Manager_obj::instance->updateEvent->isBlocking = false;
            		}
HXLINE( 153)		return ::hxd::snd::Manager_obj::instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Manager_obj,get,return )

 ::hxd::snd::Effect Manager_obj::regEffect( ::hxd::snd::Effect list, ::hxd::snd::Effect e){
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_627_regEffect)
HXLINE( 628)		 ::hxd::snd::Effect l = list;
HXLINE( 629)		while(::hx::IsNotNull( l )){
HXLINE( 630)			if (::hx::IsInstanceEq( l,e )) {
HXLINE( 630)				return list;
            			}
HXLINE( 631)			l = l->next;
            		}
HXLINE( 633)		e->next = list;
HXLINE( 634)		return e;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,regEffect,return )


::hx::ObjectPtr< Manager_obj > Manager_obj::__new() {
	::hx::ObjectPtr< Manager_obj > __this = new Manager_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Manager_obj > Manager_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Manager_obj *__this = (Manager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Manager_obj), true, "hxd.snd.Manager"));
	*(void **)__this = Manager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Manager_obj::Manager_obj()
{
}

void Manager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Manager);
	HX_MARK_MEMBER_NAME(masterVolume,"masterVolume");
	HX_MARK_MEMBER_NAME(masterSoundGroup,"masterSoundGroup");
	HX_MARK_MEMBER_NAME(masterChannelGroup,"masterChannelGroup");
	HX_MARK_MEMBER_NAME(listener,"listener");
	HX_MARK_MEMBER_NAME(timeOffset,"timeOffset");
	HX_MARK_MEMBER_NAME(updateEvent,"updateEvent");
	HX_MARK_MEMBER_NAME(cachedBytes,"cachedBytes");
	HX_MARK_MEMBER_NAME(resampleBytes,"resampleBytes");
	HX_MARK_MEMBER_NAME(driver,"driver");
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_MEMBER_NAME(sources,"sources");
	HX_MARK_MEMBER_NAME(now,"now");
	HX_MARK_MEMBER_NAME(soundBufferCount,"soundBufferCount");
	HX_MARK_MEMBER_NAME(soundBufferMap,"soundBufferMap");
	HX_MARK_MEMBER_NAME(soundBufferKeys,"soundBufferKeys");
	HX_MARK_MEMBER_NAME(freeStreamBuffers,"freeStreamBuffers");
	HX_MARK_MEMBER_NAME(effectGC,"effectGC");
	HX_MARK_MEMBER_NAME(hasMasterVolume,"hasMasterVolume");
	HX_MARK_MEMBER_NAME(suspended,"suspended");
	HX_MARK_MEMBER_NAME(targetRate,"targetRate");
	HX_MARK_MEMBER_NAME(targetFormat,"targetFormat");
	HX_MARK_MEMBER_NAME(targetChannels,"targetChannels");
	HX_MARK_END_CLASS();
}

void Manager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(masterVolume,"masterVolume");
	HX_VISIT_MEMBER_NAME(masterSoundGroup,"masterSoundGroup");
	HX_VISIT_MEMBER_NAME(masterChannelGroup,"masterChannelGroup");
	HX_VISIT_MEMBER_NAME(listener,"listener");
	HX_VISIT_MEMBER_NAME(timeOffset,"timeOffset");
	HX_VISIT_MEMBER_NAME(updateEvent,"updateEvent");
	HX_VISIT_MEMBER_NAME(cachedBytes,"cachedBytes");
	HX_VISIT_MEMBER_NAME(resampleBytes,"resampleBytes");
	HX_VISIT_MEMBER_NAME(driver,"driver");
	HX_VISIT_MEMBER_NAME(channels,"channels");
	HX_VISIT_MEMBER_NAME(sources,"sources");
	HX_VISIT_MEMBER_NAME(now,"now");
	HX_VISIT_MEMBER_NAME(soundBufferCount,"soundBufferCount");
	HX_VISIT_MEMBER_NAME(soundBufferMap,"soundBufferMap");
	HX_VISIT_MEMBER_NAME(soundBufferKeys,"soundBufferKeys");
	HX_VISIT_MEMBER_NAME(freeStreamBuffers,"freeStreamBuffers");
	HX_VISIT_MEMBER_NAME(effectGC,"effectGC");
	HX_VISIT_MEMBER_NAME(hasMasterVolume,"hasMasterVolume");
	HX_VISIT_MEMBER_NAME(suspended,"suspended");
	HX_VISIT_MEMBER_NAME(targetRate,"targetRate");
	HX_VISIT_MEMBER_NAME(targetFormat,"targetFormat");
	HX_VISIT_MEMBER_NAME(targetChannels,"targetChannels");
}

::hx::Val Manager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"now") ) { return ::hx::Val( now ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"driver") ) { return ::hx::Val( driver ); }
		if (HX_FIELD_EQ(inName,"getAll") ) { return ::hx::Val( getAll_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sources") ) { return ::hx::Val( sources ); }
		if (HX_FIELD_EQ(inName,"stopAll") ) { return ::hx::Val( stopAll_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { return ::hx::Val( listener ); }
		if (HX_FIELD_EQ(inName,"channels") ) { return ::hx::Val( channels ); }
		if (HX_FIELD_EQ(inName,"effectGC") ) { return ::hx::Val( effectGC ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"suspended") ) { return ::hx::Val( suspended ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"timeOffset") ) { return ::hx::Val( timeOffset ); }
		if (HX_FIELD_EQ(inName,"stopByName") ) { return ::hx::Val( stopByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"cleanCache") ) { return ::hx::Val( cleanCache_dyn() ); }
		if (HX_FIELD_EQ(inName,"bindEffect") ) { return ::hx::Val( bindEffect_dyn() ); }
		if (HX_FIELD_EQ(inName,"targetRate") ) { return ::hx::Val( targetRate ); }
		if (HX_FIELD_EQ(inName,"sortEffect") ) { return ::hx::Val( sortEffect_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateEvent") ) { return ::hx::Val( updateEvent ); }
		if (HX_FIELD_EQ(inName,"cachedBytes") ) { return ::hx::Val( cachedBytes ); }
		if (HX_FIELD_EQ(inName,"getTmpBytes") ) { return ::hx::Val( getTmpBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"queueBuffer") ) { return ::hx::Val( queueBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"sortChannel") ) { return ::hx::Val( sortChannel_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"masterVolume") ) { return ::hx::Val( masterVolume ); }
		if (HX_FIELD_EQ(inName,"unbindEffect") ) { return ::hx::Val( unbindEffect_dyn() ); }
		if (HX_FIELD_EQ(inName,"targetFormat") ) { return ::hx::Val( targetFormat ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resampleBytes") ) { return ::hx::Val( resampleBytes ); }
		if (HX_FIELD_EQ(inName,"unqueueBuffer") ) { return ::hx::Val( unqueueBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"releaseSource") ) { return ::hx::Val( releaseSource_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundBufferMap") ) { return ::hx::Val( soundBufferMap ); }
		if (HX_FIELD_EQ(inName,"targetChannels") ) { return ::hx::Val( targetChannels ); }
		if (HX_FIELD_EQ(inName,"getSoundBuffer") ) { return ::hx::Val( getSoundBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"releaseChannel") ) { return ::hx::Val( releaseChannel_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"soundBufferKeys") ) { return ::hx::Val( soundBufferKeys ); }
		if (HX_FIELD_EQ(inName,"hasMasterVolume") ) { return ::hx::Val( hasMasterVolume ); }
		if (HX_FIELD_EQ(inName,"fillSoundBuffer") ) { return ::hx::Val( fillSoundBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"getStreamBuffer") ) { return ::hx::Val( getStreamBuffer_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"masterSoundGroup") ) { return ::hx::Val( masterSoundGroup ); }
		if (HX_FIELD_EQ(inName,"soundBufferCount") ) { return ::hx::Val( soundBufferCount ); }
		if (HX_FIELD_EQ(inName,"getResampleBytes") ) { return ::hx::Val( getResampleBytes_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"freeStreamBuffers") ) { return ::hx::Val( freeStreamBuffers ); }
		if (HX_FIELD_EQ(inName,"stopAllNotLooping") ) { return ::hx::Val( stopAllNotLooping_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkTargetFormat") ) { return ::hx::Val( checkTargetFormat_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"masterChannelGroup") ) { return ::hx::Val( masterChannelGroup ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateVirtualChannels") ) { return ::hx::Val( updateVirtualChannels_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"progressiveDecodeBuffer") ) { return ::hx::Val( progressiveDecodeBuffer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Manager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"regEffect") ) { outValue = regEffect_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"MAX_SOURCES") ) { outValue = ( MAX_SOURCES ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"STREAM_DURATION") ) { outValue = ( STREAM_DURATION ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"BUFFER_QUEUE_LENGTH") ) { outValue = ( BUFFER_QUEUE_LENGTH ); return true; }
		if (HX_FIELD_EQ(inName,"BUFFER_STREAM_SPLIT") ) { outValue = ( BUFFER_STREAM_SPLIT ); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"SOUND_BUFFER_CACHE_SIZE") ) { outValue = ( SOUND_BUFFER_CACHE_SIZE ); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"VIRTUAL_VOLUME_THRESHOLD") ) { outValue = ( VIRTUAL_VOLUME_THRESHOLD ); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"STREAM_BUFFER_SAMPLE_COUNT") ) { outValue = ( STREAM_BUFFER_SAMPLE_COUNT ); return true; }
	}
	return false;
}

::hx::Val Manager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"now") ) { now=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"driver") ) { driver=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sources") ) { sources=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { listener=inValue.Cast<  ::hxd::snd::Listener >(); return inValue; }
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast<  ::hxd::snd::Channel >(); return inValue; }
		if (HX_FIELD_EQ(inName,"effectGC") ) { effectGC=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"suspended") ) { suspended=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"timeOffset") ) { timeOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetRate") ) { targetRate=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateEvent") ) { updateEvent=inValue.Cast<  ::haxe::MainEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cachedBytes") ) { cachedBytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"masterVolume") ) { masterVolume=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetFormat") ) { targetFormat=inValue.Cast<  ::hxd::snd::SampleFormat >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resampleBytes") ) { resampleBytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundBufferMap") ) { soundBufferMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetChannels") ) { targetChannels=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"soundBufferKeys") ) { soundBufferKeys=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasMasterVolume") ) { hasMasterVolume=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"masterSoundGroup") ) { masterSoundGroup=inValue.Cast<  ::hxd::snd::SoundGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundBufferCount") ) { soundBufferCount=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"freeStreamBuffers") ) { freeStreamBuffers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"masterChannelGroup") ) { masterChannelGroup=inValue.Cast<  ::hxd::snd::ChannelGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Manager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::hxd::snd::Manager >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"MAX_SOURCES") ) { MAX_SOURCES=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"STREAM_DURATION") ) { STREAM_DURATION=ioValue.Cast< Float >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"BUFFER_QUEUE_LENGTH") ) { BUFFER_QUEUE_LENGTH=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"BUFFER_STREAM_SPLIT") ) { BUFFER_STREAM_SPLIT=ioValue.Cast< int >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"SOUND_BUFFER_CACHE_SIZE") ) { SOUND_BUFFER_CACHE_SIZE=ioValue.Cast< int >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"VIRTUAL_VOLUME_THRESHOLD") ) { VIRTUAL_VOLUME_THRESHOLD=ioValue.Cast< Float >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"STREAM_BUFFER_SAMPLE_COUNT") ) { STREAM_BUFFER_SAMPLE_COUNT=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Manager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("masterVolume",1c,44,fd,72));
	outFields->push(HX_("masterSoundGroup",32,2b,6b,9f));
	outFields->push(HX_("masterChannelGroup",3e,b7,69,b4));
	outFields->push(HX_("listener",74,00,32,38));
	outFields->push(HX_("timeOffset",80,df,08,fe));
	outFields->push(HX_("updateEvent",51,31,5d,5b));
	outFields->push(HX_("cachedBytes",29,45,82,36));
	outFields->push(HX_("resampleBytes",0e,63,1a,d5));
	outFields->push(HX_("driver",28,80,1f,e5));
	outFields->push(HX_("channels",50,aa,ee,6a));
	outFields->push(HX_("sources",38,0f,49,b9));
	outFields->push(HX_("now",16,d9,53,00));
	outFields->push(HX_("soundBufferCount",20,07,52,80));
	outFields->push(HX_("soundBufferMap",ad,e6,c5,8e));
	outFields->push(HX_("soundBufferKeys",c3,94,14,5d));
	outFields->push(HX_("freeStreamBuffers",87,7e,a8,e5));
	outFields->push(HX_("effectGC",ed,1e,1c,54));
	outFields->push(HX_("hasMasterVolume",96,6e,6d,da));
	outFields->push(HX_("suspended",db,5e,17,cd));
	outFields->push(HX_("targetRate",d1,ee,d4,a5));
	outFields->push(HX_("targetFormat",68,c9,12,ba));
	outFields->push(HX_("targetChannels",c1,92,9a,7c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Manager_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Manager_obj,masterVolume),HX_("masterVolume",1c,44,fd,72)},
	{::hx::fsObject /*  ::hxd::snd::SoundGroup */ ,(int)offsetof(Manager_obj,masterSoundGroup),HX_("masterSoundGroup",32,2b,6b,9f)},
	{::hx::fsObject /*  ::hxd::snd::ChannelGroup */ ,(int)offsetof(Manager_obj,masterChannelGroup),HX_("masterChannelGroup",3e,b7,69,b4)},
	{::hx::fsObject /*  ::hxd::snd::Listener */ ,(int)offsetof(Manager_obj,listener),HX_("listener",74,00,32,38)},
	{::hx::fsFloat,(int)offsetof(Manager_obj,timeOffset),HX_("timeOffset",80,df,08,fe)},
	{::hx::fsObject /*  ::haxe::MainEvent */ ,(int)offsetof(Manager_obj,updateEvent),HX_("updateEvent",51,31,5d,5b)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(Manager_obj,cachedBytes),HX_("cachedBytes",29,45,82,36)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(Manager_obj,resampleBytes),HX_("resampleBytes",0e,63,1a,d5)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(Manager_obj,driver),HX_("driver",28,80,1f,e5)},
	{::hx::fsObject /*  ::hxd::snd::Channel */ ,(int)offsetof(Manager_obj,channels),HX_("channels",50,aa,ee,6a)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Manager_obj,sources),HX_("sources",38,0f,49,b9)},
	{::hx::fsFloat,(int)offsetof(Manager_obj,now),HX_("now",16,d9,53,00)},
	{::hx::fsInt,(int)offsetof(Manager_obj,soundBufferCount),HX_("soundBufferCount",20,07,52,80)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Manager_obj,soundBufferMap),HX_("soundBufferMap",ad,e6,c5,8e)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Manager_obj,soundBufferKeys),HX_("soundBufferKeys",c3,94,14,5d)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Manager_obj,freeStreamBuffers),HX_("freeStreamBuffers",87,7e,a8,e5)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Manager_obj,effectGC),HX_("effectGC",ed,1e,1c,54)},
	{::hx::fsBool,(int)offsetof(Manager_obj,hasMasterVolume),HX_("hasMasterVolume",96,6e,6d,da)},
	{::hx::fsBool,(int)offsetof(Manager_obj,suspended),HX_("suspended",db,5e,17,cd)},
	{::hx::fsInt,(int)offsetof(Manager_obj,targetRate),HX_("targetRate",d1,ee,d4,a5)},
	{::hx::fsObject /*  ::hxd::snd::SampleFormat */ ,(int)offsetof(Manager_obj,targetFormat),HX_("targetFormat",68,c9,12,ba)},
	{::hx::fsInt,(int)offsetof(Manager_obj,targetChannels),HX_("targetChannels",c1,92,9a,7c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Manager_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Manager_obj::STREAM_DURATION,HX_("STREAM_DURATION",33,c6,3d,83)},
	{::hx::fsInt,(void *) &Manager_obj::STREAM_BUFFER_SAMPLE_COUNT,HX_("STREAM_BUFFER_SAMPLE_COUNT",fa,ec,21,8b)},
	{::hx::fsInt,(void *) &Manager_obj::BUFFER_QUEUE_LENGTH,HX_("BUFFER_QUEUE_LENGTH",13,17,69,b4)},
	{::hx::fsInt,(void *) &Manager_obj::MAX_SOURCES,HX_("MAX_SOURCES",1d,07,a0,8b)},
	{::hx::fsInt,(void *) &Manager_obj::SOUND_BUFFER_CACHE_SIZE,HX_("SOUND_BUFFER_CACHE_SIZE",8d,fc,56,1a)},
	{::hx::fsFloat,(void *) &Manager_obj::VIRTUAL_VOLUME_THRESHOLD,HX_("VIRTUAL_VOLUME_THRESHOLD",ba,bd,7a,d4)},
	{::hx::fsInt,(void *) &Manager_obj::BUFFER_STREAM_SPLIT,HX_("BUFFER_STREAM_SPLIT",5a,14,29,24)},
	{::hx::fsObject /*  ::hxd::snd::Manager */ ,(void *) &Manager_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Manager_obj_sMemberFields[] = {
	HX_("masterVolume",1c,44,fd,72),
	HX_("masterSoundGroup",32,2b,6b,9f),
	HX_("masterChannelGroup",3e,b7,69,b4),
	HX_("listener",74,00,32,38),
	HX_("timeOffset",80,df,08,fe),
	HX_("updateEvent",51,31,5d,5b),
	HX_("cachedBytes",29,45,82,36),
	HX_("resampleBytes",0e,63,1a,d5),
	HX_("driver",28,80,1f,e5),
	HX_("channels",50,aa,ee,6a),
	HX_("sources",38,0f,49,b9),
	HX_("now",16,d9,53,00),
	HX_("soundBufferCount",20,07,52,80),
	HX_("soundBufferMap",ad,e6,c5,8e),
	HX_("soundBufferKeys",c3,94,14,5d),
	HX_("freeStreamBuffers",87,7e,a8,e5),
	HX_("effectGC",ed,1e,1c,54),
	HX_("hasMasterVolume",96,6e,6d,da),
	HX_("suspended",db,5e,17,cd),
	HX_("getTmpBytes",ca,ea,30,de),
	HX_("getResampleBytes",98,0c,3b,3f),
	HX_("stopAll",3f,2e,3e,43),
	HX_("stopAllNotLooping",4a,7b,c7,90),
	HX_("stopByName",64,7d,fd,37),
	HX_("getAll",2b,32,19,a3),
	HX_("cleanCache",f9,67,b1,7c),
	HX_("dispose",9f,80,4c,bb),
	HX_("play",f4,2d,5a,4a),
	HX_("updateVirtualChannels",72,3b,3e,21),
	HX_("update",09,86,05,87),
	HX_("progressiveDecodeBuffer",b9,1b,41,4f),
	HX_("queueBuffer",71,c1,a3,8e),
	HX_("unqueueBuffer",b8,37,de,af),
	HX_("bindEffect",2e,30,cd,88),
	HX_("unbindEffect",c7,5f,dc,f4),
	HX_("releaseSource",02,ba,54,a9),
	HX_("targetRate",d1,ee,d4,a5),
	HX_("targetFormat",68,c9,12,ba),
	HX_("targetChannels",c1,92,9a,7c),
	HX_("checkTargetFormat",50,ba,c1,49),
	HX_("getSoundBuffer",39,16,60,0b),
	HX_("fillSoundBuffer",6c,65,44,c7),
	HX_("getStreamBuffer",56,fb,02,51),
	HX_("sortChannel",05,c9,b3,b8),
	HX_("sortEffect",8f,d0,88,bd),
	HX_("releaseChannel",bc,f9,56,94),
	::String(null()) };

static void Manager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Manager_obj::STREAM_DURATION,"STREAM_DURATION");
	HX_MARK_MEMBER_NAME(Manager_obj::STREAM_BUFFER_SAMPLE_COUNT,"STREAM_BUFFER_SAMPLE_COUNT");
	HX_MARK_MEMBER_NAME(Manager_obj::BUFFER_QUEUE_LENGTH,"BUFFER_QUEUE_LENGTH");
	HX_MARK_MEMBER_NAME(Manager_obj::MAX_SOURCES,"MAX_SOURCES");
	HX_MARK_MEMBER_NAME(Manager_obj::SOUND_BUFFER_CACHE_SIZE,"SOUND_BUFFER_CACHE_SIZE");
	HX_MARK_MEMBER_NAME(Manager_obj::VIRTUAL_VOLUME_THRESHOLD,"VIRTUAL_VOLUME_THRESHOLD");
	HX_MARK_MEMBER_NAME(Manager_obj::BUFFER_STREAM_SPLIT,"BUFFER_STREAM_SPLIT");
	HX_MARK_MEMBER_NAME(Manager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Manager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Manager_obj::STREAM_DURATION,"STREAM_DURATION");
	HX_VISIT_MEMBER_NAME(Manager_obj::STREAM_BUFFER_SAMPLE_COUNT,"STREAM_BUFFER_SAMPLE_COUNT");
	HX_VISIT_MEMBER_NAME(Manager_obj::BUFFER_QUEUE_LENGTH,"BUFFER_QUEUE_LENGTH");
	HX_VISIT_MEMBER_NAME(Manager_obj::MAX_SOURCES,"MAX_SOURCES");
	HX_VISIT_MEMBER_NAME(Manager_obj::SOUND_BUFFER_CACHE_SIZE,"SOUND_BUFFER_CACHE_SIZE");
	HX_VISIT_MEMBER_NAME(Manager_obj::VIRTUAL_VOLUME_THRESHOLD,"VIRTUAL_VOLUME_THRESHOLD");
	HX_VISIT_MEMBER_NAME(Manager_obj::BUFFER_STREAM_SPLIT,"BUFFER_STREAM_SPLIT");
	HX_VISIT_MEMBER_NAME(Manager_obj::instance,"instance");
};

#endif

::hx::Class Manager_obj::__mClass;

static ::String Manager_obj_sStaticFields[] = {
	HX_("STREAM_DURATION",33,c6,3d,83),
	HX_("STREAM_BUFFER_SAMPLE_COUNT",fa,ec,21,8b),
	HX_("BUFFER_QUEUE_LENGTH",13,17,69,b4),
	HX_("MAX_SOURCES",1d,07,a0,8b),
	HX_("SOUND_BUFFER_CACHE_SIZE",8d,fc,56,1a),
	HX_("VIRTUAL_VOLUME_THRESHOLD",ba,bd,7a,d4),
	HX_("BUFFER_STREAM_SPLIT",5a,14,29,24),
	HX_("instance",95,1f,e1,59),
	HX_("get",96,80,4e,00),
	HX_("regEffect",05,5f,c2,d0),
	::String(null())
};

void Manager_obj::__register()
{
	Manager_obj _hx_dummy;
	Manager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.Manager",2e,a4,68,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Manager_obj::__GetStatic;
	__mClass->mSetStaticField = &Manager_obj::__SetStatic;
	__mClass->mMarkFunc = Manager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Manager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Manager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Manager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Manager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Manager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Manager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Manager_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_62_boot)
HXDLIN(  62)		STREAM_DURATION = ((Float)5.);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_63_boot)
HXDLIN(  63)		STREAM_BUFFER_SAMPLE_COUNT = 44100;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_64_boot)
HXDLIN(  64)		BUFFER_QUEUE_LENGTH = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_65_boot)
HXDLIN(  65)		MAX_SOURCES = 16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_66_boot)
HXDLIN(  66)		SOUND_BUFFER_CACHE_SIZE = 256;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_67_boot)
HXDLIN(  67)		VIRTUAL_VOLUME_THRESHOLD = ((Float)1e-5);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3d66295943142d0c_72_boot)
HXDLIN(  72)		BUFFER_STREAM_SPLIT = 16;
            	}
}

} // end namespace hxd
} // end namespace snd
