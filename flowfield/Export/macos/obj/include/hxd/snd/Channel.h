#ifndef INCLUDED_hxd_snd_Channel
#define INCLUDED_hxd_snd_Channel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_snd_ChannelBase
#include <hxd/snd/ChannelBase.h>
#endif
HX_DECLARE_CLASS2(hxd,res,Resource)
HX_DECLARE_CLASS2(hxd,res,Sound)
HX_DECLARE_CLASS2(hxd,snd,Channel)
HX_DECLARE_CLASS2(hxd,snd,ChannelBase)
HX_DECLARE_CLASS2(hxd,snd,ChannelGroup)
HX_DECLARE_CLASS2(hxd,snd,Manager)
HX_DECLARE_CLASS2(hxd,snd,SoundGroup)
HX_DECLARE_CLASS2(hxd,snd,Source)

namespace hxd{
namespace snd{


class HXCPP_CLASS_ATTRIBUTES Channel_obj : public  ::hxd::snd::ChannelBase_obj
{
	public:
		typedef  ::hxd::snd::ChannelBase_obj super;
		typedef Channel_obj OBJ_;
		Channel_obj();

	public:
		enum { _hx_ClassId = 0x5c50fbae };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.snd.Channel")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.snd.Channel"); }
		static ::hx::ObjectPtr< Channel_obj > __new();
		static ::hx::ObjectPtr< Channel_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		static void __alloc_dynamic_functions(::hx::Ctx *_hx_alloc,Channel_obj *_hx_obj);
		//~Channel_obj();

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
		::String __ToString() const { return HX_("Channel",a3,28,23,9a); }

		static void __boot();
		static int ID;
		 ::hxd::snd::Channel next;
		 ::hxd::snd::Manager manager;
		 ::hxd::snd::Source source;
		int id;
		 ::hxd::res::Sound sound;
		Float duration;
		 ::hxd::snd::SoundGroup soundGroup;
		 ::hxd::snd::ChannelGroup channelGroup;
		Float position;
		bool pause;
		bool loop;
		bool allowVirtual;
		Float audibleVolume;
		Float lastStamp;
		bool isVirtual;
		bool isLoading;
		bool positionChanged;
		::Array< ::Dynamic> queue;
		::Dynamic onEnd;
		inline ::Dynamic &onEnd_dyn() {return onEnd; }

		Float set_position(Float v);
		::Dynamic set_position_dyn();

		bool set_pause(bool v);
		::Dynamic set_pause_dyn();

		void updateCurrentVolume(Float now);

		void calcAudibleVolume(Float now);
		::Dynamic calcAudibleVolume_dyn();

		void queueSound( ::hxd::res::Sound sound);
		::Dynamic queueSound_dyn();

		void stop();
		::Dynamic stop_dyn();

		bool isReleased();
		::Dynamic isReleased_dyn();

};

} // end namespace hxd
} // end namespace snd

#endif /* INCLUDED_hxd_snd_Channel */ 
