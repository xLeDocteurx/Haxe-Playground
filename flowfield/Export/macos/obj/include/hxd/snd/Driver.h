#ifndef INCLUDED_hxd_snd_Driver
#define INCLUDED_hxd_snd_Driver

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(hxd,snd,Driver)
HX_DECLARE_CLASS2(hxd,snd,DriverFeature)
HX_DECLARE_CLASS2(hxd,snd,EffectDriver)
HX_DECLARE_CLASS2(hxd,snd,SampleFormat)
HX_DECLARE_CLASS3(hxd,snd,openal,BufferHandle)
HX_DECLARE_CLASS3(hxd,snd,openal,SourceHandle)

namespace hxd{
namespace snd{


class HXCPP_CLASS_ATTRIBUTES Driver_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		bool (::hx::Object :: *_hx_hasFeature)( ::hxd::snd::DriverFeature d); 
		static inline bool hasFeature( ::Dynamic _hx_, ::hxd::snd::DriverFeature d) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxd::snd::Driver_obj *>(_hx_.mPtr->_hx_getInterface(0xe568d8dd)))->_hx_hasFeature)(d);
		}
		void (::hx::Object :: *_hx_setMasterVolume)(Float value); 
		static inline void setMasterVolume( ::Dynamic _hx_,Float value) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::hxd::snd::Driver_obj *>(_hx_.mPtr->_hx_getInterface(0xe568d8dd)))->_hx_setMasterVolume)(value);
		}
		void (::hx::Object :: *_hx_setListenerParams)( ::h3d::Vector position, ::h3d::Vector direction, ::h3d::Vector up, ::h3d::Vector velocity); 
		static inline void setListenerParams( ::Dynamic _hx_, ::h3d::Vector position, ::h3d::Vector direction, ::h3d::Vector up, ::h3d::Vector velocity) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::hxd::snd::Driver_obj *>(_hx_.mPtr->_hx_getInterface(0xe568d8dd)))->_hx_setListenerParams)(position,direction,up,velocity);
		}
		 ::hxd::snd::openal::SourceHandle (::hx::Object :: *_hx_createSource)(); 
		static inline  ::hxd::snd::openal::SourceHandle createSource( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxd::snd::Driver_obj *>(_hx_.mPtr->_hx_getInterface(0xe568d8dd)))->_hx_createSource)();
		}
		void (::hx::Object :: *_hx_playSource)( ::hxd::snd::openal::SourceHandle source); 
		static inline void playSource( ::Dynamic _hx_, ::hxd::snd::openal::SourceHandle source) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::hxd::snd::Driver_obj *>(_hx_.mPtr->_hx_getInterface(0xe568d8dd)))->_hx_playSource)(source);
		}
		void (::hx::Object :: *_hx_stopSource)( ::hxd::snd::openal::SourceHandle source); 
		static inline void stopSource( ::Dynamic _hx_, ::hxd::snd::openal::SourceHandle source) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::hxd::snd::Driver_obj *>(_hx_.mPtr->_hx_getInterface(0xe568d8dd)))->_hx_stopSource)(source);
		}
		void (::hx::Object :: *_hx_setSourceVolume)( ::hxd::snd::openal::SourceHandle source,Float value); 
		static inline void setSourceVolume( ::Dynamic _hx_, ::hxd::snd::openal::SourceHandle source,Float value) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::hxd::snd::Driver_obj *>(_hx_.mPtr->_hx_getInterface(0xe568d8dd)))->_hx_setSourceVolume)(source,value);
		}
		void (::hx::Object :: *_hx_destroySource)( ::hxd::snd::openal::SourceHandle source); 
		static inline void destroySource( ::Dynamic _hx_, ::hxd::snd::openal::SourceHandle source) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::hxd::snd::Driver_obj *>(_hx_.mPtr->_hx_getInterface(0xe568d8dd)))->_hx_destroySource)(source);
		}
		 ::hxd::snd::openal::BufferHandle (::hx::Object :: *_hx_createBuffer)(); 
		static inline  ::hxd::snd::openal::BufferHandle createBuffer( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxd::snd::Driver_obj *>(_hx_.mPtr->_hx_getInterface(0xe568d8dd)))->_hx_createBuffer)();
		}
		void (::hx::Object :: *_hx_setBufferData)( ::hxd::snd::openal::BufferHandle buffer, ::haxe::io::Bytes data,int size, ::hxd::snd::SampleFormat format,int channelCount,int samplingRate); 
		static inline void setBufferData( ::Dynamic _hx_, ::hxd::snd::openal::BufferHandle buffer, ::haxe::io::Bytes data,int size, ::hxd::snd::SampleFormat format,int channelCount,int samplingRate) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::hxd::snd::Driver_obj *>(_hx_.mPtr->_hx_getInterface(0xe568d8dd)))->_hx_setBufferData)(buffer,data,size,format,channelCount,samplingRate);
		}
		void (::hx::Object :: *_hx_destroyBuffer)( ::hxd::snd::openal::BufferHandle buffer); 
		static inline void destroyBuffer( ::Dynamic _hx_, ::hxd::snd::openal::BufferHandle buffer) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::hxd::snd::Driver_obj *>(_hx_.mPtr->_hx_getInterface(0xe568d8dd)))->_hx_destroyBuffer)(buffer);
		}
		void (::hx::Object :: *_hx_queueBuffer)( ::hxd::snd::openal::SourceHandle source, ::hxd::snd::openal::BufferHandle buffer,int sampleStart,bool endOfStream); 
		static inline void queueBuffer( ::Dynamic _hx_, ::hxd::snd::openal::SourceHandle source, ::hxd::snd::openal::BufferHandle buffer,int sampleStart,bool endOfStream) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::hxd::snd::Driver_obj *>(_hx_.mPtr->_hx_getInterface(0xe568d8dd)))->_hx_queueBuffer)(source,buffer,sampleStart,endOfStream);
		}
		void (::hx::Object :: *_hx_unqueueBuffer)( ::hxd::snd::openal::SourceHandle source, ::hxd::snd::openal::BufferHandle buffer); 
		static inline void unqueueBuffer( ::Dynamic _hx_, ::hxd::snd::openal::SourceHandle source, ::hxd::snd::openal::BufferHandle buffer) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::hxd::snd::Driver_obj *>(_hx_.mPtr->_hx_getInterface(0xe568d8dd)))->_hx_unqueueBuffer)(source,buffer);
		}
		int (::hx::Object :: *_hx_getProcessedBuffers)( ::hxd::snd::openal::SourceHandle source); 
		static inline int getProcessedBuffers( ::Dynamic _hx_, ::hxd::snd::openal::SourceHandle source) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxd::snd::Driver_obj *>(_hx_.mPtr->_hx_getInterface(0xe568d8dd)))->_hx_getProcessedBuffers)(source);
		}
		int (::hx::Object :: *_hx_getPlayedSampleCount)( ::hxd::snd::openal::SourceHandle source); 
		static inline int getPlayedSampleCount( ::Dynamic _hx_, ::hxd::snd::openal::SourceHandle source) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxd::snd::Driver_obj *>(_hx_.mPtr->_hx_getInterface(0xe568d8dd)))->_hx_getPlayedSampleCount)(source);
		}
		void (::hx::Object :: *_hx_update)(); 
		static inline void update( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::hxd::snd::Driver_obj *>(_hx_.mPtr->_hx_getInterface(0xe568d8dd)))->_hx_update)();
		}
		void (::hx::Object :: *_hx_dispose)(); 
		static inline void dispose( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::hxd::snd::Driver_obj *>(_hx_.mPtr->_hx_getInterface(0xe568d8dd)))->_hx_dispose)();
		}
		 ::hxd::snd::EffectDriver (::hx::Object :: *_hx_getEffectDriver)(::String type); 
		static inline  ::hxd::snd::EffectDriver getEffectDriver( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxd::snd::Driver_obj *>(_hx_.mPtr->_hx_getInterface(0xe568d8dd)))->_hx_getEffectDriver)(type);
		}
};

} // end namespace hxd
} // end namespace snd

#endif /* INCLUDED_hxd_snd_Driver */ 
