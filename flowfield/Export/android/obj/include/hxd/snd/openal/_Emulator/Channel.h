#ifndef INCLUDED_hxd_snd_openal__Emulator_Channel
#define INCLUDED_hxd_snd_openal__Emulator_Channel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_snd_NativeChannel
#include <hxd/snd/NativeChannel.h>
#endif
HX_DECLARE_CLASS2(haxe,io,ArrayBufferViewImpl)
HX_DECLARE_CLASS2(hxd,snd,NativeChannel)
HX_DECLARE_CLASS3(hxd,snd,openal,Source)
HX_DECLARE_CLASS4(hxd,snd,openal,_Emulator,Channel)

namespace hxd{
namespace snd{
namespace openal{
namespace _Emulator{


class HXCPP_CLASS_ATTRIBUTES Channel_obj : public  ::hxd::snd::NativeChannel_obj
{
	public:
		typedef  ::hxd::snd::NativeChannel_obj super;
		typedef Channel_obj OBJ_;
		Channel_obj();

	public:
		enum { _hx_ClassId = 0x21caf519 };

		void __construct( ::hxd::snd::openal::Source source,int samples);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.snd.openal._Emulator.Channel")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.snd.openal._Emulator.Channel"); }
		static ::hx::ObjectPtr< Channel_obj > __new( ::hxd::snd::openal::Source source,int samples);
		static ::hx::ObjectPtr< Channel_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxd::snd::openal::Source source,int samples);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Channel_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Channel",a3,28,23,9a); }

		static void __boot();
		static int FADE_START;
		 ::hxd::snd::openal::Source source;
		Float startup;
		void onSample( ::haxe::io::ArrayBufferViewImpl out);

};

} // end namespace hxd
} // end namespace snd
} // end namespace openal
} // end namespace _Emulator

#endif /* INCLUDED_hxd_snd_openal__Emulator_Channel */ 
