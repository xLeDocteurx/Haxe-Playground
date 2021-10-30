#include <hxcpp.h>

#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_snd_Driver
#include <hxd/snd/Driver.h>
#endif
#ifndef INCLUDED_hxd_snd_DriverFeature
#include <hxd/snd/DriverFeature.h>
#endif
#ifndef INCLUDED_hxd_snd_EffectDriver
#include <hxd/snd/EffectDriver.h>
#endif
#ifndef INCLUDED_hxd_snd_SampleFormat
#include <hxd/snd/SampleFormat.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_BufferHandle
#include <hxd/snd/openal/BufferHandle.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_SourceHandle
#include <hxd/snd/openal/SourceHandle.h>
#endif

namespace hxd{
namespace snd{


static ::String Driver_obj_sMemberFields[] = {
	HX_("hasFeature",7c,da,30,a5),
	HX_("setMasterVolume",de,16,b3,91),
	HX_("setListenerParams",1c,c6,5c,f9),
	HX_("createSource",f7,f0,86,54),
	HX_("playSource",ef,41,f5,d8),
	HX_("stopSource",7d,02,e1,5b),
	HX_("setSourceVolume",d7,b7,0f,74),
	HX_("destroySource",75,49,2b,00),
	HX_("createBuffer",1c,fd,e9,f2),
	HX_("setBufferData",8c,fd,eb,34),
	HX_("destroyBuffer",9a,55,8e,9e),
	HX_("queueBuffer",71,c1,a3,8e),
	HX_("unqueueBuffer",b8,37,de,af),
	HX_("getProcessedBuffers",3b,4d,96,df),
	HX_("getPlayedSampleCount",3c,ca,48,6b),
	HX_("update",09,86,05,87),
	HX_("dispose",9f,80,4c,bb),
	HX_("getEffectDriver",4f,67,e9,52),
	::String(null()) };

::hx::Class Driver_obj::__mClass;

void Driver_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.Driver",87,a1,d5,8e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Driver_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xe568d8dd >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace snd
