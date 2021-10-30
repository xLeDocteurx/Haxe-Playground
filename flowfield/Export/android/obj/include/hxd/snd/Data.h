#ifndef INCLUDED_hxd_snd_Data
#define INCLUDED_hxd_snd_Data

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(hxd,snd,Data)
HX_DECLARE_CLASS2(hxd,snd,SampleFormat)

namespace hxd{
namespace snd{


class HXCPP_CLASS_ATTRIBUTES Data_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Data_obj OBJ_;
		Data_obj();

	public:
		enum { _hx_ClassId = 0x74492a5f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.snd.Data")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.snd.Data"); }

		inline static ::hx::ObjectPtr< Data_obj > __new() {
			::hx::ObjectPtr< Data_obj > __this = new Data_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Data_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Data_obj *__this = (Data_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Data_obj), true, "hxd.snd.Data"));
			*(void **)__this = Data_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Data_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Data",4a,82,3c,2d); }

		static int formatBytes( ::hxd::snd::SampleFormat format);
		static ::Dynamic formatBytes_dyn();

		int samples;
		int samplingRate;
		 ::hxd::snd::SampleFormat sampleFormat;
		int channels;
		bool isLoading();
		::Dynamic isLoading_dyn();

		void decode( ::haxe::io::Bytes out,int outPos,int sampleStart,int sampleCount);
		::Dynamic decode_dyn();

		 ::hxd::snd::Data resample(int rate, ::hxd::snd::SampleFormat format,int channels);
		::Dynamic resample_dyn();

		void resampleBuffer( ::haxe::io::Bytes out,int outPos, ::haxe::io::Bytes input,int inPos,int rate, ::hxd::snd::SampleFormat format,int channels,int samples);
		::Dynamic resampleBuffer_dyn();

		virtual void decodeBuffer( ::haxe::io::Bytes out,int outPos,int sampleStart,int sampleCount);
		::Dynamic decodeBuffer_dyn();

		int getBytesPerSample();
		::Dynamic getBytesPerSample_dyn();

		void load( ::Dynamic onEnd);
		::Dynamic load_dyn();

		Float get_duration();
		::Dynamic get_duration_dyn();

};

} // end namespace hxd
} // end namespace snd

#endif /* INCLUDED_hxd_snd_Data */ 
