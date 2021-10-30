#ifndef INCLUDED_hxd_snd_Source
#define INCLUDED_hxd_snd_Source

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(hxd,res,Resource)
HX_DECLARE_CLASS2(hxd,res,Sound)
HX_DECLARE_CLASS2(hxd,snd,Buffer)
HX_DECLARE_CLASS2(hxd,snd,Channel)
HX_DECLARE_CLASS2(hxd,snd,ChannelBase)
HX_DECLARE_CLASS2(hxd,snd,Driver)
HX_DECLARE_CLASS2(hxd,snd,Source)
HX_DECLARE_CLASS3(hxd,snd,openal,SourceHandle)

namespace hxd{
namespace snd{


class HXCPP_CLASS_ATTRIBUTES Source_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Source_obj OBJ_;
		Source_obj();

	public:
		enum { _hx_ClassId = 0x085cbc50 };

		void __construct(::Dynamic driver);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.snd.Source")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.snd.Source"); }
		static ::hx::ObjectPtr< Source_obj > __new(::Dynamic driver);
		static ::hx::ObjectPtr< Source_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic driver);
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
		static int ID;
		int id;
		 ::hxd::snd::openal::SourceHandle handle;
		 ::hxd::snd::Channel channel;
		::Array< ::Dynamic> buffers;
		Float volume;
		bool playing;
		int start;
		 ::hxd::res::Sound streamSound;
		 ::haxe::io::Bytes streamBuffer;
		int streamStart;
		int streamPos;
		void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace hxd
} // end namespace snd

#endif /* INCLUDED_hxd_snd_Source */ 
