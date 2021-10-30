#ifndef INCLUDED_hxd_res_Sound
#define INCLUDED_hxd_res_Sound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_res_Resource
#include <hxd/res/Resource.h>
#endif
HX_DECLARE_CLASS2(hxd,fs,FileEntry)
HX_DECLARE_CLASS2(hxd,res,Resource)
HX_DECLARE_CLASS2(hxd,res,Sound)
HX_DECLARE_CLASS2(hxd,res,SoundFormat)
HX_DECLARE_CLASS2(hxd,snd,Channel)
HX_DECLARE_CLASS2(hxd,snd,ChannelBase)
HX_DECLARE_CLASS2(hxd,snd,ChannelGroup)
HX_DECLARE_CLASS2(hxd,snd,Data)
HX_DECLARE_CLASS2(hxd,snd,SoundGroup)

namespace hxd{
namespace res{


class HXCPP_CLASS_ATTRIBUTES Sound_obj : public  ::hxd::res::Resource_obj
{
	public:
		typedef  ::hxd::res::Resource_obj super;
		typedef Sound_obj OBJ_;
		Sound_obj();

	public:
		enum { _hx_ClassId = 0x272dede3 };

		void __construct( ::hxd::fs::FileEntry entry);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.res.Sound")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.res.Sound"); }
		static ::hx::ObjectPtr< Sound_obj > __new( ::hxd::fs::FileEntry entry);
		static ::hx::ObjectPtr< Sound_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxd::fs::FileEntry entry);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Sound_obj();

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
		::String __ToString() const { return HX_("Sound",af,fc,f9,13); }

		static void __boot();
		static bool ENABLE_AUTO_WATCH;
		static bool supportedFormat( ::hxd::res::SoundFormat fmt);
		static ::Dynamic supportedFormat_dyn();

		static bool startWorker();
		static ::Dynamic startWorker_dyn();

		 ::hxd::snd::Data data;
		 ::hxd::snd::Channel channel;
		Float lastPlay;
		 ::hxd::snd::Data getData();
		::Dynamic getData_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void stop();
		::Dynamic stop_dyn();

		 ::hxd::snd::Channel play( ::Dynamic loop, ::Dynamic volume, ::hxd::snd::ChannelGroup channelGroup, ::hxd::snd::SoundGroup soundGroup);
		::Dynamic play_dyn();

		void watchCallb();
		::Dynamic watchCallb_dyn();

};

} // end namespace hxd
} // end namespace res

#endif /* INCLUDED_hxd_res_Sound */ 
