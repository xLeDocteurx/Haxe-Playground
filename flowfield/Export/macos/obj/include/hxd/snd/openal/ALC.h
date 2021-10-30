#ifndef INCLUDED_hxd_snd_openal_ALC
#define INCLUDED_hxd_snd_openal_ALC

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(hxd,snd,openal,ALC)
HX_DECLARE_CLASS3(hxd,snd,openal,Context)
HX_DECLARE_CLASS3(hxd,snd,openal,Device)

namespace hxd{
namespace snd{
namespace openal{


class HXCPP_CLASS_ATTRIBUTES ALC_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ALC_obj OBJ_;
		ALC_obj();

	public:
		enum { _hx_ClassId = 0x085eaf6e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.snd.openal.ALC")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.snd.openal.ALC"); }

		inline static ::hx::ObjectPtr< ALC_obj > __new() {
			::hx::ObjectPtr< ALC_obj > __this = new ALC_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ALC_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ALC_obj *__this = (ALC_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ALC_obj), false, "hxd.snd.openal.ALC"));
			*(void **)__this = ALC_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ALC_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ALC",f8,94,31,00); }

		static void __boot();
		static  ::hxd::snd::openal::Context ctx;
		static int getError( ::hxd::snd::openal::Device device);
		static ::Dynamic getError_dyn();

		static  ::hxd::snd::openal::Context createContext( ::hxd::snd::openal::Device device, ::haxe::io::Bytes attrlist);
		static ::Dynamic createContext_dyn();

		static bool makeContextCurrent( ::hxd::snd::openal::Context context);
		static ::Dynamic makeContextCurrent_dyn();

		static void processContext( ::hxd::snd::openal::Context context);
		static ::Dynamic processContext_dyn();

		static void suspendContext( ::hxd::snd::openal::Context context);
		static ::Dynamic suspendContext_dyn();

		static void destroyContext( ::hxd::snd::openal::Context context);
		static ::Dynamic destroyContext_dyn();

		static  ::hxd::snd::openal::Context getCurrentContext();
		static ::Dynamic getCurrentContext_dyn();

		static  ::hxd::snd::openal::Device getContextsDevice( ::hxd::snd::openal::Context context);
		static ::Dynamic getContextsDevice_dyn();

		static  ::hxd::snd::openal::Device openDevice( ::haxe::io::Bytes devicename);
		static ::Dynamic openDevice_dyn();

		static bool closeDevice( ::hxd::snd::openal::Device device);
		static ::Dynamic closeDevice_dyn();

		static void loadExtensions( ::hxd::snd::openal::Device alDevice);
		static ::Dynamic loadExtensions_dyn();

		static bool isExtensionPresent( ::hxd::snd::openal::Device device, ::haxe::io::Bytes extname);
		static ::Dynamic isExtensionPresent_dyn();

		static int getEnumValue( ::hxd::snd::openal::Device device, ::haxe::io::Bytes enumname);
		static ::Dynamic getEnumValue_dyn();

		static  ::haxe::io::Bytes getString( ::hxd::snd::openal::Device device,int param);
		static ::Dynamic getString_dyn();

		static void getIntegerv( ::hxd::snd::openal::Device device,int param,int size, ::haxe::io::Bytes values);
		static ::Dynamic getIntegerv_dyn();

		static int FALSE;
		static int TRUE;
		static int FREQUENCY;
		static int REFRESH;
		static int SYNC;
		static int MONO_SOURCES;
		static int STEREO_SOURCES;
		static int NO_ERROR;
		static int INVALID_DEVICE;
		static int INVALID_CONTEXT;
		static int INVALID_ENUM;
		static int INVALID_VALUE;
		static int OUT_OF_MEMORY;
		static int MAJOR_VERSION;
		static int MINOR_VERSION;
		static int ATTRIBUTES_SIZE;
		static int ALL_ATTRIBUTES;
		static int DEFAULT_DEVICE_SPECIFIER;
		static int DEVICE_SPECIFIER;
		static int EXTENSIONS;
		static int EXT_CAPTURE;
		static int CAPTURE_DEVICE_SPECIFIER;
		static int CAPTURE_DEFAULT_DEVICE_SPECIFIER;
		static int CAPTURE_SAMPLES;
		static int ENUMERATE_ALL_EXT;
		static int DEFAULT_ALL_DEVICES_SPECIFIER;
		static int ALL_DEVICES_SPECIFIER;
};

} // end namespace hxd
} // end namespace snd
} // end namespace openal

#endif /* INCLUDED_hxd_snd_openal_ALC */ 
