#ifndef INCLUDED_hxd_snd_openal_Driver
#define INCLUDED_hxd_snd_openal_Driver

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_snd_Driver
#include <hxd/snd/Driver.h>
#endif
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(hxd,snd,Driver)
HX_DECLARE_CLASS2(hxd,snd,DriverFeature)
HX_DECLARE_CLASS2(hxd,snd,EffectDriver)
HX_DECLARE_CLASS2(hxd,snd,SampleFormat)
HX_DECLARE_CLASS3(hxd,snd,openal,BufferHandle)
HX_DECLARE_CLASS3(hxd,snd,openal,Context)
HX_DECLARE_CLASS3(hxd,snd,openal,Device)
HX_DECLARE_CLASS3(hxd,snd,openal,Driver)
HX_DECLARE_CLASS3(hxd,snd,openal,SourceHandle)

namespace hxd{
namespace snd{
namespace openal{


class HXCPP_CLASS_ATTRIBUTES Driver_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Driver_obj OBJ_;
		Driver_obj();

	public:
		enum { _hx_ClassId = 0x29324792 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.snd.openal.Driver")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.snd.openal.Driver"); }
		static ::hx::ObjectPtr< Driver_obj > __new();
		static ::hx::ObjectPtr< Driver_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Driver_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Driver",48,f4,b3,19); }

		 ::hxd::snd::openal::Device device;
		 ::hxd::snd::openal::Context context;
		int maxAuxiliarySends;
		 ::haxe::io::Bytes tmpBytes;
		bool hasFeature( ::hxd::snd::DriverFeature f);
		::Dynamic hasFeature_dyn();

		 ::haxe::io::Bytes getTmpBytes(int size);
		::Dynamic getTmpBytes_dyn();

		void setMasterVolume(Float value);
		::Dynamic setMasterVolume_dyn();

		void setListenerParams( ::h3d::Vector position, ::h3d::Vector direction, ::h3d::Vector up, ::h3d::Vector velocity);
		::Dynamic setListenerParams_dyn();

		 ::hxd::snd::openal::SourceHandle createSource();
		::Dynamic createSource_dyn();

		void destroySource( ::hxd::snd::openal::SourceHandle source);
		::Dynamic destroySource_dyn();

		void playSource( ::hxd::snd::openal::SourceHandle source);
		::Dynamic playSource_dyn();

		void stopSource( ::hxd::snd::openal::SourceHandle source);
		::Dynamic stopSource_dyn();

		void setSourceVolume( ::hxd::snd::openal::SourceHandle source,Float value);
		::Dynamic setSourceVolume_dyn();

		 ::hxd::snd::openal::BufferHandle createBuffer();
		::Dynamic createBuffer_dyn();

		void destroyBuffer( ::hxd::snd::openal::BufferHandle buffer);
		::Dynamic destroyBuffer_dyn();

		void setBufferData( ::hxd::snd::openal::BufferHandle buffer, ::haxe::io::Bytes data,int size, ::hxd::snd::SampleFormat format,int channelCount,int samplingRate);
		::Dynamic setBufferData_dyn();

		int getPlayedSampleCount( ::hxd::snd::openal::SourceHandle source);
		::Dynamic getPlayedSampleCount_dyn();

		int getProcessedBuffers( ::hxd::snd::openal::SourceHandle source);
		::Dynamic getProcessedBuffers_dyn();

		void queueBuffer( ::hxd::snd::openal::SourceHandle source, ::hxd::snd::openal::BufferHandle buffer,int sampleStart,bool endOfStream);
		::Dynamic queueBuffer_dyn();

		void unqueueBuffer( ::hxd::snd::openal::SourceHandle source, ::hxd::snd::openal::BufferHandle buffer);
		::Dynamic unqueueBuffer_dyn();

		void update();
		::Dynamic update_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		 ::hxd::snd::EffectDriver getEffectDriver(::String type);
		::Dynamic getEffectDriver_dyn();

};

} // end namespace hxd
} // end namespace snd
} // end namespace openal

#endif /* INCLUDED_hxd_snd_openal_Driver */ 
