#ifndef INCLUDED_hxd_snd_openal_Emulator
#define INCLUDED_hxd_snd_openal_Emulator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(hxd,snd,openal,Buffer)
HX_DECLARE_CLASS3(hxd,snd,openal,Emulator)
HX_DECLARE_CLASS3(hxd,snd,openal,Source)

namespace hxd{
namespace snd{
namespace openal{


class HXCPP_CLASS_ATTRIBUTES Emulator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Emulator_obj OBJ_;
		Emulator_obj();

	public:
		enum { _hx_ClassId = 0x00eb82ff };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.snd.openal.Emulator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.snd.openal.Emulator"); }

		inline static ::hx::ObjectPtr< Emulator_obj > __new() {
			::hx::ObjectPtr< Emulator_obj > __this = new Emulator_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Emulator_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Emulator_obj *__this = (Emulator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Emulator_obj), false, "hxd.snd.openal.Emulator"));
			*(void **)__this = Emulator_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Emulator_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Emulator",35,49,ba,56); }

		static void __boot();
		static  ::Dynamic CACHED_FREQ;
		static  ::Dynamic get_NATIVE_FREQ();
		static ::Dynamic get_NATIVE_FREQ_dyn();

		static void dopplerFactor(Float value);
		static ::Dynamic dopplerFactor_dyn();

		static void dopplerVelocity(Float value);
		static ::Dynamic dopplerVelocity_dyn();

		static void speedOfSound(Float value);
		static ::Dynamic speedOfSound_dyn();

		static void distanceModel(int distanceModel);
		static ::Dynamic distanceModel_dyn();

		static void enable(int capability);
		static ::Dynamic enable_dyn();

		static void disable(int capability);
		static ::Dynamic disable_dyn();

		static bool isEnabled(int capability);
		static ::Dynamic isEnabled_dyn();

		static void getBooleanv(int param, ::haxe::io::Bytes values);
		static ::Dynamic getBooleanv_dyn();

		static void getIntegerv(int param, ::haxe::io::Bytes values);
		static ::Dynamic getIntegerv_dyn();

		static void getFloatv(int param, ::haxe::io::Bytes values);
		static ::Dynamic getFloatv_dyn();

		static void getDoublev(int param, ::haxe::io::Bytes values);
		static ::Dynamic getDoublev_dyn();

		static  ::haxe::io::Bytes getString(int param);
		static ::Dynamic getString_dyn();

		static bool getBoolean(int param);
		static ::Dynamic getBoolean_dyn();

		static int getInteger(int param);
		static ::Dynamic getInteger_dyn();

		static Float getFloat(int param);
		static ::Dynamic getFloat_dyn();

		static Float getDouble(int param);
		static ::Dynamic getDouble_dyn();

		static int getError();
		static ::Dynamic getError_dyn();

		static void loadExtensions();
		static ::Dynamic loadExtensions_dyn();

		static bool isExtensionPresent( ::haxe::io::Bytes extname);
		static ::Dynamic isExtensionPresent_dyn();

		static int getEnumValue( ::haxe::io::Bytes ename);
		static ::Dynamic getEnumValue_dyn();

		static void listenerf(int param,Float value);
		static ::Dynamic listenerf_dyn();

		static void listener3f(int param,Float value1,Float value2,Float value3);
		static ::Dynamic listener3f_dyn();

		static void listenerfv(int param, ::haxe::io::Bytes values);
		static ::Dynamic listenerfv_dyn();

		static void listeneri(int param,int value);
		static ::Dynamic listeneri_dyn();

		static void listener3i(int param,int value1,int value2,int value3);
		static ::Dynamic listener3i_dyn();

		static void listeneriv(int param, ::haxe::io::Bytes values);
		static ::Dynamic listeneriv_dyn();

		static Float getListenerf(int param);
		static ::Dynamic getListenerf_dyn();

		static void getListener3f(int param,::Array< Float > values);
		static ::Dynamic getListener3f_dyn();

		static void getListenerfv(int param, ::haxe::io::Bytes values);
		static ::Dynamic getListenerfv_dyn();

		static int getListeneri(int param);
		static ::Dynamic getListeneri_dyn();

		static void getListener3i(int param,::Array< int > values);
		static ::Dynamic getListener3i_dyn();

		static void getListeneriv(int param, ::haxe::io::Bytes values);
		static ::Dynamic getListeneriv_dyn();

		static void genSources(int n, ::haxe::io::Bytes sources);
		static ::Dynamic genSources_dyn();

		static void deleteSources(int n, ::haxe::io::Bytes sources);
		static ::Dynamic deleteSources_dyn();

		static bool isSource( ::hxd::snd::openal::Source source);
		static ::Dynamic isSource_dyn();

		static void sourcef( ::hxd::snd::openal::Source source,int param,Float value);
		static ::Dynamic sourcef_dyn();

		static void source3f( ::hxd::snd::openal::Source source,int param,Float value1,Float value2,Float value3);
		static ::Dynamic source3f_dyn();

		static void sourcefv( ::hxd::snd::openal::Source source,int param, ::haxe::io::Bytes values);
		static ::Dynamic sourcefv_dyn();

		static void sourcei( ::hxd::snd::openal::Source source,int param,int value);
		static ::Dynamic sourcei_dyn();

		static void source3i( ::hxd::snd::openal::Source source,int param,int value1,int value2,int value3);
		static ::Dynamic source3i_dyn();

		static void sourceiv( ::hxd::snd::openal::Source source,int param, ::haxe::io::Bytes values);
		static ::Dynamic sourceiv_dyn();

		static Float getSourcef( ::hxd::snd::openal::Source source,int param);
		static ::Dynamic getSourcef_dyn();

		static int getSourcei( ::hxd::snd::openal::Source source,int param);
		static ::Dynamic getSourcei_dyn();

		static void getSource3f( ::hxd::snd::openal::Source source,int param,::Array< Float > values);
		static ::Dynamic getSource3f_dyn();

		static void getSourcefv( ::hxd::snd::openal::Source source,int param, ::haxe::io::Bytes values);
		static ::Dynamic getSourcefv_dyn();

		static void getSource3i( ::hxd::snd::openal::Source source,int param,::Array< int > values);
		static ::Dynamic getSource3i_dyn();

		static void getSourceiv( ::hxd::snd::openal::Source source,int param, ::haxe::io::Bytes values);
		static ::Dynamic getSourceiv_dyn();

		static void sourcePlayv(int n, ::haxe::io::Bytes sources);
		static ::Dynamic sourcePlayv_dyn();

		static void sourceStopv(int n, ::haxe::io::Bytes sources);
		static ::Dynamic sourceStopv_dyn();

		static void sourceRewindv(int n, ::haxe::io::Bytes sources);
		static ::Dynamic sourceRewindv_dyn();

		static void sourcePausev(int n, ::haxe::io::Bytes sources);
		static ::Dynamic sourcePausev_dyn();

		static void sourcePlay( ::hxd::snd::openal::Source source);
		static ::Dynamic sourcePlay_dyn();

		static void sourceStop( ::hxd::snd::openal::Source source);
		static ::Dynamic sourceStop_dyn();

		static void sourceRewind( ::hxd::snd::openal::Source source);
		static ::Dynamic sourceRewind_dyn();

		static void sourcePause( ::hxd::snd::openal::Source source);
		static ::Dynamic sourcePause_dyn();

		static void sourceQueueBuffers( ::hxd::snd::openal::Source source,int nb, ::haxe::io::Bytes buffers);
		static ::Dynamic sourceQueueBuffers_dyn();

		static void sourceUnqueueBuffers( ::hxd::snd::openal::Source source,int nb, ::haxe::io::Bytes buffers);
		static ::Dynamic sourceUnqueueBuffers_dyn();

		static void genBuffers(int n, ::haxe::io::Bytes buffers);
		static ::Dynamic genBuffers_dyn();

		static void deleteBuffers(int n, ::haxe::io::Bytes buffers);
		static ::Dynamic deleteBuffers_dyn();

		static bool isBuffer( ::hxd::snd::openal::Buffer buffer);
		static ::Dynamic isBuffer_dyn();

		static void bufferData( ::hxd::snd::openal::Buffer buffer,int format, ::haxe::io::Bytes data,int size,int freq);
		static ::Dynamic bufferData_dyn();

		static void bufferf( ::hxd::snd::openal::Buffer buffer,int param,Float value);
		static ::Dynamic bufferf_dyn();

		static void buffer3f( ::hxd::snd::openal::Buffer buffer,int param,Float value1,Float value2,Float value3);
		static ::Dynamic buffer3f_dyn();

		static void bufferfv( ::hxd::snd::openal::Buffer buffer,int param, ::haxe::io::Bytes values);
		static ::Dynamic bufferfv_dyn();

		static void bufferi( ::hxd::snd::openal::Buffer buffer,int param,int value);
		static ::Dynamic bufferi_dyn();

		static void buffer3i( ::hxd::snd::openal::Buffer buffer,int param,int value1,int value2,int value3);
		static ::Dynamic buffer3i_dyn();

		static void bufferiv( ::hxd::snd::openal::Buffer buffer,int param, ::haxe::io::Bytes values);
		static ::Dynamic bufferiv_dyn();

		static Float getBufferf( ::hxd::snd::openal::Buffer buffer,int param);
		static ::Dynamic getBufferf_dyn();

		static void getBuffer3f( ::hxd::snd::openal::Buffer buffer,int param,::Array< Float > values);
		static ::Dynamic getBuffer3f_dyn();

		static void getBufferfv( ::hxd::snd::openal::Buffer buffer,int param, ::haxe::io::Bytes values);
		static ::Dynamic getBufferfv_dyn();

		static int getBufferi( ::hxd::snd::openal::Buffer buffer,int param);
		static ::Dynamic getBufferi_dyn();

		static void getBuffer3i( ::hxd::snd::openal::Buffer buffer,int param,::Array< int > values);
		static ::Dynamic getBuffer3i_dyn();

		static void getBufferiv( ::hxd::snd::openal::Buffer buffer,int param, ::haxe::io::Bytes values);
		static ::Dynamic getBufferiv_dyn();

		static int FORMAT_MONOF32;
		static int FORMAT_STEREOF32;
		static int NONE;
		static int FALSE;
		static int TRUE;
		static int SOURCE_RELATIVE;
		static int CONE_INNER_ANGLE;
		static int CONE_OUTER_ANGLE;
		static int PITCH;
		static int POSITION;
		static int DIRECTION;
		static int VELOCITY;
		static int LOOPING;
		static int BUFFER;
		static int GAIN;
		static int MIN_GAIN;
		static int MAX_GAIN;
		static int ORIENTATION;
		static int SOURCE_STATE;
		static int INITIAL;
		static int PLAYING;
		static int PAUSED;
		static int STOPPED;
		static int BUFFERS_QUEUED;
		static int BUFFERS_PROCESSED;
		static int REFERENCE_DISTANCE;
		static int ROLLOFF_FACTOR;
		static int CONE_OUTER_GAIN;
		static int MAX_DISTANCE;
		static int SEC_OFFSET;
		static int SAMPLE_OFFSET;
		static int BYTE_OFFSET;
		static int SOURCE_TYPE;
		static int STATIC;
		static int STREAMING;
		static int UNDETERMINED;
		static int FORMAT_MONO8;
		static int FORMAT_MONO16;
		static int FORMAT_STEREO8;
		static int FORMAT_STEREO16;
		static int FREQUENCY;
		static int BITS;
		static int CHANNELS;
		static int SIZE;
		static int UNUSED;
		static int PENDING;
		static int PROCESSED;
		static int NO_ERROR;
		static int INVALID_NAME;
		static int INVALID_ENUM;
		static int INVALID_VALUE;
		static int INVALID_OPERATION;
		static int OUT_OF_MEMORY;
		static int VENDOR;
		static int VERSION;
		static int RENDERER;
		static int EXTENSIONS;
		static int DOPPLER_FACTOR;
		static int DOPPLER_VELOCITY;
		static int SPEED_OF_SOUND;
		static int DISTANCE_MODEL;
		static int INVERSE_DISTANCE;
		static int INVERSE_DISTANCE_CLAMPED;
		static int LINEAR_DISTANCE;
		static int LINEAR_DISTANCE_CLAMPED;
		static int EXPONENT_DISTANCE;
		static int EXPONENT_DISTANCE_CLAMPED;
};

} // end namespace hxd
} // end namespace snd
} // end namespace openal

#endif /* INCLUDED_hxd_snd_openal_Emulator */ 
