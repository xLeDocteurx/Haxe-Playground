#ifndef INCLUDED_hxd_snd_openal_Source
#define INCLUDED_hxd_snd_openal_Source

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(hxd,snd,NativeChannel)
HX_DECLARE_CLASS3(hxd,snd,openal,Buffer)
HX_DECLARE_CLASS3(hxd,snd,openal,Source)

namespace hxd{
namespace snd{
namespace openal{


class HXCPP_CLASS_ATTRIBUTES Source_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Source_obj OBJ_;
		Source_obj();

	public:
		enum { _hx_ClassId = 0x76447845 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.snd.openal.Source")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.snd.openal.Source"); }
		static ::hx::ObjectPtr< Source_obj > __new();
		static ::hx::ObjectPtr< Source_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Source_obj();

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
		::String __ToString() const { return HX_("Source",fb,24,c6,66); }

		static void __boot();
		static int STOP_DELAY;
		static int CHANNEL_BUFSIZE;
		static int ID;
		static  ::haxe::ds::IntMap all;
		static  ::hxd::snd::openal::Source ofInt(int i);
		static ::Dynamic ofInt_dyn();

		int id;
		 ::hxd::snd::NativeChannel chan;
		Float playedTime;
		int currentSample;
		::Array< ::Dynamic> buffers;
		bool loop;
		Float volume;
		Float duration;
		int frequency;
		void updateDuration();
		::Dynamic updateDuration_dyn();

		bool get_playing();
		::Dynamic get_playing_dyn();

		void play();
		::Dynamic play_dyn();

		void stop(::hx::Null< bool >  immediate);
		::Dynamic stop_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		int toInt();
		::Dynamic toInt_dyn();

};

} // end namespace hxd
} // end namespace snd
} // end namespace openal

#endif /* INCLUDED_hxd_snd_openal_Source */ 
