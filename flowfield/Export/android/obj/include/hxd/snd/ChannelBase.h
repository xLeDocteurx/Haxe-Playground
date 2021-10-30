#ifndef INCLUDED_hxd_snd_ChannelBase
#define INCLUDED_hxd_snd_ChannelBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,snd,ChannelBase)
HX_DECLARE_CLASS2(hxd,snd,Effect)

namespace hxd{
namespace snd{


class HXCPP_CLASS_ATTRIBUTES ChannelBase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ChannelBase_obj OBJ_;
		ChannelBase_obj();

	public:
		enum { _hx_ClassId = 0x431c9717 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.snd.ChannelBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.snd.ChannelBase"); }
		static ::hx::ObjectPtr< ChannelBase_obj > __new();
		static ::hx::ObjectPtr< ChannelBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ChannelBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ChannelBase",54,ca,11,f5); }

		Float priority;
		bool mute;
		::Array< ::Dynamic> effects;
		::Array< ::Dynamic> bindedEffects;
		Float volume;
		 ::Dynamic currentFade;
		Float currentVolume;
		 ::Dynamic getEffect(::hx::Class etype);
		::Dynamic getEffect_dyn();

		Float set_volume(Float v);
		::Dynamic set_volume_dyn();

		void fadeTo(Float volume, ::Dynamic time, ::Dynamic onEnd);
		::Dynamic fadeTo_dyn();

		virtual void updateCurrentVolume(Float now);
		::Dynamic updateCurrentVolume_dyn();

		 ::Dynamic addEffect( ::Dynamic e);
		::Dynamic addEffect_dyn();

		void removeEffect( ::hxd::snd::Effect e);
		::Dynamic removeEffect_dyn();

};

} // end namespace hxd
} // end namespace snd

#endif /* INCLUDED_hxd_snd_ChannelBase */ 
