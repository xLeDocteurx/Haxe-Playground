#ifndef INCLUDED_hxd_snd_NativeChannel
#define INCLUDED_hxd_snd_NativeChannel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,ArrayBufferViewImpl)
HX_DECLARE_CLASS2(hxd,snd,NativeChannel)

namespace hxd{
namespace snd{


class HXCPP_CLASS_ATTRIBUTES NativeChannel_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NativeChannel_obj OBJ_;
		NativeChannel_obj();

	public:
		enum { _hx_ClassId = 0x61e51833 };

		void __construct(int bufferSamples);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.snd.NativeChannel")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.snd.NativeChannel"); }
		static ::hx::ObjectPtr< NativeChannel_obj > __new(int bufferSamples);
		static ::hx::ObjectPtr< NativeChannel_obj > __alloc(::hx::Ctx *_hx_ctx,int bufferSamples);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NativeChannel_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NativeChannel",cc,1f,d3,d3); }

		int bufferSamples;
		virtual void onSample( ::haxe::io::ArrayBufferViewImpl out);
		::Dynamic onSample_dyn();

		void stop();
		::Dynamic stop_dyn();

};

} // end namespace hxd
} // end namespace snd

#endif /* INCLUDED_hxd_snd_NativeChannel */ 
