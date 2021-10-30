#ifndef INCLUDED_hxd_snd_Manager
#define INCLUDED_hxd_snd_Manager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS1(haxe,MainEvent)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(hxd,res,Resource)
HX_DECLARE_CLASS2(hxd,res,Sound)
HX_DECLARE_CLASS2(hxd,snd,Buffer)
HX_DECLARE_CLASS2(hxd,snd,Channel)
HX_DECLARE_CLASS2(hxd,snd,ChannelBase)
HX_DECLARE_CLASS2(hxd,snd,ChannelGroup)
HX_DECLARE_CLASS2(hxd,snd,Data)
HX_DECLARE_CLASS2(hxd,snd,Driver)
HX_DECLARE_CLASS2(hxd,snd,Effect)
HX_DECLARE_CLASS2(hxd,snd,Listener)
HX_DECLARE_CLASS2(hxd,snd,Manager)
HX_DECLARE_CLASS2(hxd,snd,SampleFormat)
HX_DECLARE_CLASS2(hxd,snd,SoundGroup)
HX_DECLARE_CLASS2(hxd,snd,Source)

namespace hxd{
namespace snd{


class HXCPP_CLASS_ATTRIBUTES Manager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Manager_obj OBJ_;
		Manager_obj();

	public:
		enum { _hx_ClassId = 0x7f906b08 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.snd.Manager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.snd.Manager"); }
		static ::hx::ObjectPtr< Manager_obj > __new();
		static ::hx::ObjectPtr< Manager_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Manager_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Manager",4d,ba,12,e1); }

		static void __boot();
		static Float STREAM_DURATION;
		static int STREAM_BUFFER_SAMPLE_COUNT;
		static int BUFFER_QUEUE_LENGTH;
		static int MAX_SOURCES;
		static int SOUND_BUFFER_CACHE_SIZE;
		static Float VIRTUAL_VOLUME_THRESHOLD;
		static int BUFFER_STREAM_SPLIT;
		static  ::hxd::snd::Manager instance;
		static  ::hxd::snd::Manager get();
		static ::Dynamic get_dyn();

		static  ::hxd::snd::Effect regEffect( ::hxd::snd::Effect list, ::hxd::snd::Effect e);
		static ::Dynamic regEffect_dyn();

		Float masterVolume;
		 ::hxd::snd::SoundGroup masterSoundGroup;
		 ::hxd::snd::ChannelGroup masterChannelGroup;
		 ::hxd::snd::Listener listener;
		Float timeOffset;
		 ::haxe::MainEvent updateEvent;
		 ::haxe::io::Bytes cachedBytes;
		 ::haxe::io::Bytes resampleBytes;
		::Dynamic driver;
		 ::hxd::snd::Channel channels;
		::Array< ::Dynamic> sources;
		Float now;
		int soundBufferCount;
		 ::haxe::ds::StringMap soundBufferMap;
		::Array< ::String > soundBufferKeys;
		::Array< ::Dynamic> freeStreamBuffers;
		::Array< ::Dynamic> effectGC;
		bool hasMasterVolume;
		bool suspended;
		 ::haxe::io::Bytes getTmpBytes(int size);
		::Dynamic getTmpBytes_dyn();

		 ::haxe::io::Bytes getResampleBytes(int size);
		::Dynamic getResampleBytes_dyn();

		void stopAll();
		::Dynamic stopAll_dyn();

		void stopAllNotLooping();
		::Dynamic stopAllNotLooping_dyn();

		void stopByName(::String name);
		::Dynamic stopByName_dyn();

		 ::Dynamic getAll( ::hxd::res::Sound sound);
		::Dynamic getAll_dyn();

		void cleanCache();
		::Dynamic cleanCache_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		 ::hxd::snd::Channel play( ::hxd::res::Sound sound, ::hxd::snd::ChannelGroup channelGroup, ::hxd::snd::SoundGroup soundGroup);
		::Dynamic play_dyn();

		void updateVirtualChannels(Float now);
		::Dynamic updateVirtualChannels_dyn();

		void update();
		::Dynamic update_dyn();

		bool progressiveDecodeBuffer( ::hxd::snd::Source s, ::hxd::res::Sound snd,int start);
		::Dynamic progressiveDecodeBuffer_dyn();

		bool queueBuffer( ::hxd::snd::Source s, ::hxd::res::Sound snd,int start);
		::Dynamic queueBuffer_dyn();

		 ::hxd::snd::Buffer unqueueBuffer( ::hxd::snd::Source s);
		::Dynamic unqueueBuffer_dyn();

		void bindEffect( ::hxd::snd::Channel c, ::hxd::snd::Source s, ::hxd::snd::Effect e);
		::Dynamic bindEffect_dyn();

		void unbindEffect( ::hxd::snd::Channel c, ::hxd::snd::Source s, ::hxd::snd::Effect e);
		::Dynamic unbindEffect_dyn();

		void releaseSource( ::hxd::snd::Source s);
		::Dynamic releaseSource_dyn();

		int targetRate;
		 ::hxd::snd::SampleFormat targetFormat;
		int targetChannels;
		bool checkTargetFormat( ::hxd::snd::Data dat,::hx::Null< bool >  forceMono);
		::Dynamic checkTargetFormat_dyn();

		 ::hxd::snd::Buffer getSoundBuffer( ::hxd::res::Sound snd, ::hxd::snd::SoundGroup grp);
		::Dynamic getSoundBuffer_dyn();

		void fillSoundBuffer( ::hxd::snd::Buffer buf, ::hxd::snd::Data dat,::hx::Null< bool >  forceMono);
		::Dynamic fillSoundBuffer_dyn();

		 ::hxd::snd::Buffer getStreamBuffer( ::hxd::snd::Source src, ::hxd::res::Sound snd, ::hxd::snd::SoundGroup grp,int start);
		::Dynamic getStreamBuffer_dyn();

		int sortChannel( ::hxd::snd::Channel a, ::hxd::snd::Channel b);
		::Dynamic sortChannel_dyn();

		int sortEffect( ::hxd::snd::Effect a, ::hxd::snd::Effect b);
		::Dynamic sortEffect_dyn();

		void releaseChannel( ::hxd::snd::Channel c);
		::Dynamic releaseChannel_dyn();

};

} // end namespace hxd
} // end namespace snd

#endif /* INCLUDED_hxd_snd_Manager */ 
