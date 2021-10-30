#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_hxd_snd_NativeChannel
#include <hxd/snd/NativeChannel.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_Buffer
#include <hxd/snd/openal/Buffer.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_Emulator
#include <hxd/snd/openal/Emulator.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_Source
#include <hxd/snd/openal/Source.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_182_get_NATIVE_FREQ,"hxd.snd.openal.Emulator","get_NATIVE_FREQ",0xb88b7d38,"hxd.snd.openal.Emulator.get_NATIVE_FREQ","hxd/snd/openal/Emulator.hx",182,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_190_dopplerFactor,"hxd.snd.openal.Emulator","dopplerFactor",0x5a4b599e,"hxd.snd.openal.Emulator.dopplerFactor","hxd/snd/openal/Emulator.hx",190,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_191_dopplerVelocity,"hxd.snd.openal.Emulator","dopplerVelocity",0xf0c8d4ac,"hxd.snd.openal.Emulator.dopplerVelocity","hxd/snd/openal/Emulator.hx",191,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_192_speedOfSound,"hxd.snd.openal.Emulator","speedOfSound",0x581a2ed0,"hxd.snd.openal.Emulator.speedOfSound","hxd/snd/openal/Emulator.hx",192,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_193_distanceModel,"hxd.snd.openal.Emulator","distanceModel",0xbf276bf5,"hxd.snd.openal.Emulator.distanceModel","hxd/snd/openal/Emulator.hx",193,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_196_enable,"hxd.snd.openal.Emulator","enable",0x719614a2,"hxd.snd.openal.Emulator.enable","hxd/snd/openal/Emulator.hx",196,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_197_disable,"hxd.snd.openal.Emulator","disable",0x24e35ee9,"hxd.snd.openal.Emulator.disable","hxd/snd/openal/Emulator.hx",197,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_198_isEnabled,"hxd.snd.openal.Emulator","isEnabled",0x262278f8,"hxd.snd.openal.Emulator.isEnabled","hxd/snd/openal/Emulator.hx",198,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_202_getBooleanv,"hxd.snd.openal.Emulator","getBooleanv",0xa7123505,"hxd.snd.openal.Emulator.getBooleanv","hxd/snd/openal/Emulator.hx",202,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_205_getIntegerv,"hxd.snd.openal.Emulator","getIntegerv",0x072e152f,"hxd.snd.openal.Emulator.getIntegerv","hxd/snd/openal/Emulator.hx",205,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_208_getFloatv,"hxd.snd.openal.Emulator","getFloatv",0x619fa3d1,"hxd.snd.openal.Emulator.getFloatv","hxd/snd/openal/Emulator.hx",208,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_211_getDoublev,"hxd.snd.openal.Emulator","getDoublev",0x5f016bee,"hxd.snd.openal.Emulator.getDoublev","hxd/snd/openal/Emulator.hx",211,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_215_getString,"hxd.snd.openal.Emulator","getString",0x3179a948,"hxd.snd.openal.Emulator.getString","hxd/snd/openal/Emulator.hx",215,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_219_getBoolean,"hxd.snd.openal.Emulator","getBoolean",0x9e05d251,"hxd.snd.openal.Emulator.getBoolean","hxd/snd/openal/Emulator.hx",219,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_223_getInteger,"hxd.snd.openal.Emulator","getInteger",0x3722a567,"hxd.snd.openal.Emulator.getInteger","hxd/snd/openal/Emulator.hx",223,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_227_getFloat,"hxd.snd.openal.Emulator","getFloat",0x08794105,"hxd.snd.openal.Emulator.getFloat","hxd/snd/openal/Emulator.hx",227,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_231_getDouble,"hxd.snd.openal.Emulator","getDouble",0x5314ab88,"hxd.snd.openal.Emulator.getDouble","hxd/snd/openal/Emulator.hx",231,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_236_getError,"hxd.snd.openal.Emulator","getError",0x790c4731,"hxd.snd.openal.Emulator.getError","hxd/snd/openal/Emulator.hx",236,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_240_loadExtensions,"hxd.snd.openal.Emulator","loadExtensions",0x1241a2f9,"hxd.snd.openal.Emulator.loadExtensions","hxd/snd/openal/Emulator.hx",240,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_243_isExtensionPresent,"hxd.snd.openal.Emulator","isExtensionPresent",0xae8991e5,"hxd.snd.openal.Emulator.isExtensionPresent","hxd/snd/openal/Emulator.hx",243,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_247_getEnumValue,"hxd.snd.openal.Emulator","getEnumValue",0x8555e499,"hxd.snd.openal.Emulator.getEnumValue","hxd/snd/openal/Emulator.hx",247,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_253_listenerf,"hxd.snd.openal.Emulator","listenerf",0x97815cb3,"hxd.snd.openal.Emulator.listenerf","hxd/snd/openal/Emulator.hx",253,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_261_listener3f,"hxd.snd.openal.Emulator","listener3f",0xf9af93e6,"hxd.snd.openal.Emulator.listener3f","hxd/snd/openal/Emulator.hx",261,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_262_listenerfv,"hxd.snd.openal.Emulator","listenerfv",0xf9afc063,"hxd.snd.openal.Emulator.listenerfv","hxd/snd/openal/Emulator.hx",262,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_263_listeneri,"hxd.snd.openal.Emulator","listeneri",0x97815cb6,"hxd.snd.openal.Emulator.listeneri","hxd/snd/openal/Emulator.hx",263,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_264_listener3i,"hxd.snd.openal.Emulator","listener3i",0xf9af93e9,"hxd.snd.openal.Emulator.listener3i","hxd/snd/openal/Emulator.hx",264,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_265_listeneriv,"hxd.snd.openal.Emulator","listeneriv",0xf9afc300,"hxd.snd.openal.Emulator.listeneriv","hxd/snd/openal/Emulator.hx",265,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_269_getListenerf,"hxd.snd.openal.Emulator","getListenerf",0x50dd495b,"hxd.snd.openal.Emulator.getListenerf","hxd/snd/openal/Emulator.hx",269,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_272_getListener3f,"hxd.snd.openal.Emulator","getListener3f",0x70c2ba3e,"hxd.snd.openal.Emulator.getListener3f","hxd/snd/openal/Emulator.hx",272,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_276_getListenerfv,"hxd.snd.openal.Emulator","getListenerfv",0x70c2e6bb,"hxd.snd.openal.Emulator.getListenerfv","hxd/snd/openal/Emulator.hx",276,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_279_getListeneri,"hxd.snd.openal.Emulator","getListeneri",0x50dd495e,"hxd.snd.openal.Emulator.getListeneri","hxd/snd/openal/Emulator.hx",279,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_282_getListener3i,"hxd.snd.openal.Emulator","getListener3i",0x70c2ba41,"hxd.snd.openal.Emulator.getListener3i","hxd/snd/openal/Emulator.hx",282,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_285_getListeneriv,"hxd.snd.openal.Emulator","getListeneriv",0x70c2e958,"hxd.snd.openal.Emulator.getListeneriv","hxd/snd/openal/Emulator.hx",285,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_290_genSources,"hxd.snd.openal.Emulator","genSources",0x82214a27,"hxd.snd.openal.Emulator.genSources","hxd/snd/openal/Emulator.hx",290,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_295_deleteSources,"hxd.snd.openal.Emulator","deleteSources",0x0318ce0e,"hxd.snd.openal.Emulator.deleteSources","hxd/snd/openal/Emulator.hx",295,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_300_isSource,"hxd.snd.openal.Emulator","isSource",0x30a6b844,"hxd.snd.openal.Emulator.isSource","hxd/snd/openal/Emulator.hx",300,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_305_sourcef,"hxd.snd.openal.Emulator","sourcef",0x2cd4042c,"hxd.snd.openal.Emulator.sourcef","hxd/snd/openal/Emulator.hx",305,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_326_source3f,"hxd.snd.openal.Emulator","source3f",0x0caf764d,"hxd.snd.openal.Emulator.source3f","hxd/snd/openal/Emulator.hx",326,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_336_sourcefv,"hxd.snd.openal.Emulator","sourcefv",0x0cafa2ca,"hxd.snd.openal.Emulator.sourcefv","hxd/snd/openal/Emulator.hx",336,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_340_sourcei,"hxd.snd.openal.Emulator","sourcei",0x2cd4042f,"hxd.snd.openal.Emulator.sourcei","hxd/snd/openal/Emulator.hx",340,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_365_source3i,"hxd.snd.openal.Emulator","source3i",0x0caf7650,"hxd.snd.openal.Emulator.source3i","hxd/snd/openal/Emulator.hx",365,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_371_sourceiv,"hxd.snd.openal.Emulator","sourceiv",0x0cafa567,"hxd.snd.openal.Emulator.sourceiv","hxd/snd/openal/Emulator.hx",371,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_377_getSourcef,"hxd.snd.openal.Emulator","getSourcef",0xd94ff6d4,"hxd.snd.openal.Emulator.getSourcef","hxd/snd/openal/Emulator.hx",377,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_397_getSourcei,"hxd.snd.openal.Emulator","getSourcei",0xd94ff6d7,"hxd.snd.openal.Emulator.getSourcei","hxd/snd/openal/Emulator.hx",397,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_419_getSource3f,"hxd.snd.openal.Emulator","getSource3f",0x4ca7d6a5,"hxd.snd.openal.Emulator.getSource3f","hxd/snd/openal/Emulator.hx",419,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_422_getSourcefv,"hxd.snd.openal.Emulator","getSourcefv",0x4ca80322,"hxd.snd.openal.Emulator.getSourcefv","hxd/snd/openal/Emulator.hx",422,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_425_getSource3i,"hxd.snd.openal.Emulator","getSource3i",0x4ca7d6a8,"hxd.snd.openal.Emulator.getSource3i","hxd/snd/openal/Emulator.hx",425,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_428_getSourceiv,"hxd.snd.openal.Emulator","getSourceiv",0x4ca805bf,"hxd.snd.openal.Emulator.getSourceiv","hxd/snd/openal/Emulator.hx",428,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_433_sourcePlayv,"hxd.snd.openal.Emulator","sourcePlayv",0xb3a3d6a8,"hxd.snd.openal.Emulator.sourcePlayv","hxd/snd/openal/Emulator.hx",433,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_436_sourceStopv,"hxd.snd.openal.Emulator","sourceStopv",0x732be0da,"hxd.snd.openal.Emulator.sourceStopv","hxd/snd/openal/Emulator.hx",436,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_439_sourceRewindv,"hxd.snd.openal.Emulator","sourceRewindv",0xec27d641,"hxd.snd.openal.Emulator.sourceRewindv","hxd/snd/openal/Emulator.hx",439,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_442_sourcePausev,"hxd.snd.openal.Emulator","sourcePausev",0x3383435a,"hxd.snd.openal.Emulator.sourcePausev","hxd/snd/openal/Emulator.hx",442,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_446_sourcePlay,"hxd.snd.openal.Emulator","sourcePlay",0x4363760e,"hxd.snd.openal.Emulator.sourcePlay","hxd/snd/openal/Emulator.hx",446,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_449_sourceStop,"hxd.snd.openal.Emulator","sourceStop",0x4565381c,"hxd.snd.openal.Emulator.sourceStop","hxd/snd/openal/Emulator.hx",449,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_455_sourceRewind,"hxd.snd.openal.Emulator","sourceRewind",0x4f1f2c95,"hxd.snd.openal.Emulator.sourceRewind","hxd/snd/openal/Emulator.hx",455,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_458_sourcePause,"hxd.snd.openal.Emulator","sourcePause",0xac6da59c,"hxd.snd.openal.Emulator.sourcePause","hxd/snd/openal/Emulator.hx",458,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_462_sourceQueueBuffers,"hxd.snd.openal.Emulator","sourceQueueBuffers",0x3cbb73fc,"hxd.snd.openal.Emulator.sourceQueueBuffers","hxd/snd/openal/Emulator.hx",462,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_472_sourceUnqueueBuffers,"hxd.snd.openal.Emulator","sourceUnqueueBuffers",0xd59cb655,"hxd.snd.openal.Emulator.sourceUnqueueBuffers","hxd/snd/openal/Emulator.hx",472,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_488_genBuffers,"hxd.snd.openal.Emulator","genBuffers",0x7a68de62,"hxd.snd.openal.Emulator.genBuffers","hxd/snd/openal/Emulator.hx",488,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_492_deleteBuffers,"hxd.snd.openal.Emulator","deleteBuffers",0xfb606249,"hxd.snd.openal.Emulator.deleteBuffers","hxd/snd/openal/Emulator.hx",492,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_496_isBuffer,"hxd.snd.openal.Emulator","isBuffer",0xcf09c469,"hxd.snd.openal.Emulator.isBuffer","hxd/snd/openal/Emulator.hx",496,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_558_bufferf,"hxd.snd.openal.Emulator","bufferf",0x251b9867,"hxd.snd.openal.Emulator.bufferf","hxd/snd/openal/Emulator.hx",558,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_564_buffer3f,"hxd.snd.openal.Emulator","buffer3f",0x530995b2,"hxd.snd.openal.Emulator.buffer3f","hxd/snd/openal/Emulator.hx",564,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_570_bufferfv,"hxd.snd.openal.Emulator","bufferfv",0x5309c22f,"hxd.snd.openal.Emulator.bufferfv","hxd/snd/openal/Emulator.hx",570,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_576_bufferi,"hxd.snd.openal.Emulator","bufferi",0x251b986a,"hxd.snd.openal.Emulator.bufferi","hxd/snd/openal/Emulator.hx",576,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_582_buffer3i,"hxd.snd.openal.Emulator","buffer3i",0x530995b5,"hxd.snd.openal.Emulator.buffer3i","hxd/snd/openal/Emulator.hx",582,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_588_bufferiv,"hxd.snd.openal.Emulator","bufferiv",0x5309c4cc,"hxd.snd.openal.Emulator.bufferiv","hxd/snd/openal/Emulator.hx",588,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_594_getBufferf,"hxd.snd.openal.Emulator","getBufferf",0xd1978b0f,"hxd.snd.openal.Emulator.getBufferf","hxd/snd/openal/Emulator.hx",594,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_597_getBuffer3f,"hxd.snd.openal.Emulator","getBuffer3f",0x9301f60a,"hxd.snd.openal.Emulator.getBuffer3f","hxd/snd/openal/Emulator.hx",597,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_600_getBufferfv,"hxd.snd.openal.Emulator","getBufferfv",0x93022287,"hxd.snd.openal.Emulator.getBufferfv","hxd/snd/openal/Emulator.hx",600,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_603_getBufferi,"hxd.snd.openal.Emulator","getBufferi",0xd1978b12,"hxd.snd.openal.Emulator.getBufferi","hxd/snd/openal/Emulator.hx",603,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_612_getBuffer3i,"hxd.snd.openal.Emulator","getBuffer3i",0x9301f60d,"hxd.snd.openal.Emulator.getBuffer3i","hxd/snd/openal/Emulator.hx",612,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_615_getBufferiv,"hxd.snd.openal.Emulator","getBufferiv",0x93022524,"hxd.snd.openal.Emulator.getBufferiv","hxd/snd/openal/Emulator.hx",615,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_621_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",621,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_622_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",622,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_628_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",628,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_629_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",629,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_630_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",630,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_632_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",632,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_633_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",633,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_634_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",634,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_635_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",635,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_637_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",637,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_638_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",638,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_640_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",640,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_641_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",641,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_642_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",642,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_644_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",644,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_645_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",645,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_646_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",646,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_647_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",647,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_648_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",648,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_651_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",651,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_652_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",652,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_653_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",653,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_654_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",654,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_656_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",656,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_657_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",657,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_659_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",659,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_660_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",660,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_661_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",661,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_662_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",662,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_664_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",664,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_665_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",665,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_666_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",666,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_667_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",667,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_670_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",670,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_671_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",671,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_672_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",672,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_675_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",675,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_676_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",676,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_677_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",677,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_678_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",678,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_681_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",681,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_682_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",682,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_683_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",683,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_684_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",684,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_687_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",687,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_688_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",688,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_689_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",689,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_692_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",692,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_693_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",693,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_694_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",694,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_695_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",695,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_696_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",696,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_697_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",697,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_700_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",700,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_701_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",701,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_702_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",702,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_703_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",703,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_706_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",706,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_707_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",707,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_708_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",708,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_709_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",709,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_712_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",712,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_713_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",713,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_714_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",714,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_715_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",715,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_716_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",716,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_dc58d903c7921980_717_boot,"hxd.snd.openal.Emulator","boot",0xf4add491,"hxd.snd.openal.Emulator.boot","hxd/snd/openal/Emulator.hx",717,0x857ad050)
namespace hxd{
namespace snd{
namespace openal{

void Emulator_obj::__construct() { }

Dynamic Emulator_obj::__CreateEmpty() { return new Emulator_obj; }

void *Emulator_obj::_hx_vtable = 0;

Dynamic Emulator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Emulator_obj > _hx_result = new Emulator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Emulator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x00eb82ff;
}

 ::Dynamic Emulator_obj::CACHED_FREQ;

 ::Dynamic Emulator_obj::get_NATIVE_FREQ(){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_182_get_NATIVE_FREQ)
HXLINE( 183)		if (::hx::IsNull( ::hxd::snd::openal::Emulator_obj::CACHED_FREQ )) {
HXLINE( 184)			::hxd::snd::openal::Emulator_obj::CACHED_FREQ = 44100;
            		}
HXLINE( 185)		return ::hxd::snd::openal::Emulator_obj::CACHED_FREQ;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Emulator_obj,get_NATIVE_FREQ,return )

void Emulator_obj::dopplerFactor(Float value){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_190_dopplerFactor)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Emulator_obj,dopplerFactor,(void))

void Emulator_obj::dopplerVelocity(Float value){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_191_dopplerVelocity)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Emulator_obj,dopplerVelocity,(void))

void Emulator_obj::speedOfSound(Float value){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_192_speedOfSound)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Emulator_obj,speedOfSound,(void))

void Emulator_obj::distanceModel(int distanceModel){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_193_distanceModel)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Emulator_obj,distanceModel,(void))

void Emulator_obj::enable(int capability){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_196_enable)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Emulator_obj,enable,(void))

void Emulator_obj::disable(int capability){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_197_disable)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Emulator_obj,disable,(void))

bool Emulator_obj::isEnabled(int capability){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_198_isEnabled)
HXDLIN( 198)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Emulator_obj,isEnabled,return )

void Emulator_obj::getBooleanv(int param, ::haxe::io::Bytes values){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_202_getBooleanv)
HXDLIN( 202)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Emulator_obj,getBooleanv,(void))

void Emulator_obj::getIntegerv(int param, ::haxe::io::Bytes values){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_205_getIntegerv)
HXDLIN( 205)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Emulator_obj,getIntegerv,(void))

void Emulator_obj::getFloatv(int param, ::haxe::io::Bytes values){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_208_getFloatv)
HXDLIN( 208)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Emulator_obj,getFloatv,(void))

void Emulator_obj::getDoublev(int param, ::haxe::io::Bytes values){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_211_getDoublev)
HXDLIN( 211)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Emulator_obj,getDoublev,(void))

 ::haxe::io::Bytes Emulator_obj::getString(int param){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_215_getString)
HXDLIN( 215)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
HXDLIN( 215)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Emulator_obj,getString,return )

bool Emulator_obj::getBoolean(int param){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_219_getBoolean)
HXDLIN( 219)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
HXDLIN( 219)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Emulator_obj,getBoolean,return )

int Emulator_obj::getInteger(int param){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_223_getInteger)
HXDLIN( 223)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
HXDLIN( 223)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Emulator_obj,getInteger,return )

Float Emulator_obj::getFloat(int param){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_227_getFloat)
HXDLIN( 227)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
HXDLIN( 227)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Emulator_obj,getFloat,return )

Float Emulator_obj::getDouble(int param){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_231_getDouble)
HXDLIN( 231)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
HXDLIN( 231)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Emulator_obj,getDouble,return )

int Emulator_obj::getError(){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_236_getError)
HXDLIN( 236)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Emulator_obj,getError,return )

void Emulator_obj::loadExtensions(){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_240_loadExtensions)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Emulator_obj,loadExtensions,(void))

bool Emulator_obj::isExtensionPresent( ::haxe::io::Bytes extname){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_243_isExtensionPresent)
HXDLIN( 243)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Emulator_obj,isExtensionPresent,return )

int Emulator_obj::getEnumValue( ::haxe::io::Bytes ename){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_247_getEnumValue)
HXDLIN( 247)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
HXDLIN( 247)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Emulator_obj,getEnumValue,return )

void Emulator_obj::listenerf(int param,Float value){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_253_listenerf)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Emulator_obj,listenerf,(void))

void Emulator_obj::listener3f(int param,Float value1,Float value2,Float value3){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_261_listener3f)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Emulator_obj,listener3f,(void))

void Emulator_obj::listenerfv(int param, ::haxe::io::Bytes values){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_262_listenerfv)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Emulator_obj,listenerfv,(void))

void Emulator_obj::listeneri(int param,int value){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_263_listeneri)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Emulator_obj,listeneri,(void))

void Emulator_obj::listener3i(int param,int value1,int value2,int value3){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_264_listener3i)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Emulator_obj,listener3i,(void))

void Emulator_obj::listeneriv(int param, ::haxe::io::Bytes values){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_265_listeneriv)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Emulator_obj,listeneriv,(void))

Float Emulator_obj::getListenerf(int param){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_269_getListenerf)
HXDLIN( 269)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
HXDLIN( 269)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Emulator_obj,getListenerf,return )

void Emulator_obj::getListener3f(int param,::Array< Float > values){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_272_getListener3f)
HXDLIN( 272)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Emulator_obj,getListener3f,(void))

void Emulator_obj::getListenerfv(int param, ::haxe::io::Bytes values){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_276_getListenerfv)
HXDLIN( 276)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Emulator_obj,getListenerfv,(void))

int Emulator_obj::getListeneri(int param){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_279_getListeneri)
HXDLIN( 279)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
HXDLIN( 279)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Emulator_obj,getListeneri,return )

void Emulator_obj::getListener3i(int param,::Array< int > values){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_282_getListener3i)
HXDLIN( 282)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Emulator_obj,getListener3i,(void))

void Emulator_obj::getListeneriv(int param, ::haxe::io::Bytes values){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_285_getListeneriv)
HXDLIN( 285)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Emulator_obj,getListeneriv,(void))

void Emulator_obj::genSources(int n, ::haxe::io::Bytes sources){
            	HX_GC_STACKFRAME(&_hx_pos_dc58d903c7921980_290_genSources)
HXDLIN( 290)		int _g = 0;
HXDLIN( 290)		int _g1 = n;
HXDLIN( 290)		while((_g < _g1)){
HXDLIN( 290)			_g = (_g + 1);
HXDLIN( 290)			int i = (_g - 1);
HXLINE( 291)			{
HXLINE( 291)				int pos = (i << 2);
HXDLIN( 291)				int v =  ::hxd::snd::openal::Source_obj::__alloc( HX_CTX )->id;
HXDLIN( 291)				sources->b[pos] = ( (unsigned char)((v & 255)) );
HXDLIN( 291)				sources->b[(pos + 1)] = ( (unsigned char)(((v >> 8) & 255)) );
HXDLIN( 291)				sources->b[(pos + 2)] = ( (unsigned char)(((v >> 16) & 255)) );
HXDLIN( 291)				sources->b[(pos + 3)] = ( (unsigned char)((::hx::UShr(v,24) & 255)) );
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Emulator_obj,genSources,(void))

void Emulator_obj::deleteSources(int n, ::haxe::io::Bytes sources){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_295_deleteSources)
HXDLIN( 295)		int _g = 0;
HXDLIN( 295)		int _g1 = n;
HXDLIN( 295)		while((_g < _g1)){
HXDLIN( 295)			_g = (_g + 1);
HXDLIN( 295)			int i = (_g - 1);
HXLINE( 296)			int pos = (i << 2);
HXDLIN( 296)			( ( ::hxd::snd::openal::Source)(::hxd::snd::openal::Source_obj::all->get((((( (int)(sources->b->__get(pos)) ) | (( (int)(sources->b->__get((pos + 1))) ) << 8)) | (( (int)(sources->b->__get((pos + 2))) ) << 16)) | (( (int)(sources->b->__get((pos + 3))) ) << 24)))) )->dispose();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Emulator_obj,deleteSources,(void))

bool Emulator_obj::isSource( ::hxd::snd::openal::Source source){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_300_isSource)
HXDLIN( 300)		return ::hx::IsNotNull( source );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Emulator_obj,isSource,return )

void Emulator_obj::sourcef( ::hxd::snd::openal::Source source,int param,Float value){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_305_sourcef)
HXDLIN( 305)		switch((int)(param)){
            			case (int)4099: {
            			}
            			break;
            			case (int)4106: {
HXLINE( 313)				source->volume = value;
            			}
            			break;
            			case (int)4128: case (int)4129: case (int)4131: {
            			}
            			break;
            			case (int)4132: {
HXLINE( 307)				int _hx_tmp;
HXDLIN( 307)				if ((source->buffers->length == 0)) {
HXLINE( 307)					_hx_tmp = 0;
            				}
            				else {
HXLINE( 307)					_hx_tmp = ::Std_obj::_hx_int((value * ( (Float)(source->frequency) )));
            				}
HXDLIN( 307)				source->currentSample = _hx_tmp;
HXLINE( 308)				if (::hx::IsNotNull( source->chan )) {
HXLINE( 309)					source->stop(true);
HXLINE( 310)					source->play();
            				}
            			}
            			break;
            			default:{
HXLINE( 322)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported param 0x",e6,88,8b,af) + ::StringTools_obj::hex(param,null()))));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Emulator_obj,sourcef,(void))

void Emulator_obj::source3f( ::hxd::snd::openal::Source source,int param,Float value1,Float value2,Float value3){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_326_source3f)
HXDLIN( 326)		switch((int)(param)){
            			case (int)4100: case (int)4101: case (int)4102: {
            			}
            			break;
            			default:{
HXLINE( 330)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported param 0x",e6,88,8b,af) + ::StringTools_obj::hex(param,null()))));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Emulator_obj,source3f,(void))

void Emulator_obj::sourcefv( ::hxd::snd::openal::Source source,int param, ::haxe::io::Bytes values){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_336_sourcefv)
HXDLIN( 336)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported param 0x",e6,88,8b,af) + ::StringTools_obj::hex(param,null()))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Emulator_obj,sourcefv,(void))

void Emulator_obj::sourcei( ::hxd::snd::openal::Source source,int param,int value){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_340_sourcei)
HXDLIN( 340)		switch((int)(param)){
            			case (int)514: {
            			}
            			break;
            			case (int)4103: {
HXLINE( 347)				source->loop = (value != 0);
            			}
            			break;
            			case (int)4105: {
HXLINE( 342)				 ::hxd::snd::openal::Buffer b = ( ( ::hxd::snd::openal::Buffer)(::hxd::snd::openal::Buffer_obj::all->get(value)) );
HXLINE( 343)				::Array< ::Dynamic> _hx_tmp;
HXDLIN( 343)				if (::hx::IsNull( b )) {
HXLINE( 343)					_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 343)					_hx_tmp = ::Array_obj< ::Dynamic>::__new(1)->init(0,b);
            				}
HXDLIN( 343)				source->buffers = _hx_tmp;
HXLINE( 344)				source->updateDuration();
HXLINE( 345)				source->currentSample = 0;
            			}
            			break;
            			case (int)4133: {
HXLINE( 349)				Float _hx_tmp = ::hxd::snd::openal::Emulator_obj::getSourcef(source,4132);
HXDLIN( 349)				source->currentSample = ::Std_obj::_hx_int((_hx_tmp / ( (Float)(source->frequency) )));
HXLINE( 350)				if (::hx::IsNotNull( source->chan )) {
HXLINE( 351)					source->stop(true);
HXLINE( 352)					source->play();
            				}
            			}
            			break;
            			case (int)131077: {
            			}
            			break;
            			default:{
HXLINE( 359)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported param 0x",e6,88,8b,af) + ::StringTools_obj::hex(param,null()))));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Emulator_obj,sourcei,(void))

void Emulator_obj::source3i( ::hxd::snd::openal::Source source,int param,int value1,int value2,int value3){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_365_source3i)
HXDLIN( 365)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported param 0x",e6,88,8b,af) + ::StringTools_obj::hex(param,null()))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Emulator_obj,source3i,(void))

void Emulator_obj::sourceiv( ::hxd::snd::openal::Source source,int param, ::haxe::io::Bytes values){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_371_sourceiv)
HXDLIN( 371)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported param 0x",e6,88,8b,af) + ::StringTools_obj::hex(param,null()))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Emulator_obj,sourceiv,(void))

Float Emulator_obj::getSourcef( ::hxd::snd::openal::Source source,int param){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_377_getSourcef)
HXDLIN( 377)		if ((param == 4132)) {
HXLINE( 379)			if ((source->buffers->length == 0)) {
HXLINE( 380)				return ( (Float)(0) );
            			}
HXLINE( 381)			int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 381)			Float now;
HXDLIN( 381)			if ((timer > 0)) {
HXLINE( 381)				now = (( (Float)(timer) ) / ( (Float)(1000) ));
            			}
            			else {
HXLINE( 381)				now = ( (Float)(0) );
            			}
HXLINE( 382)			Float t = (now - source->playedTime);
HXLINE( 383)			Float maxT = source->duration;
HXLINE( 384)			if (source->loop) {
HXLINE( 385)				while((t > maxT)){
HXLINE( 386)					t = (t - maxT);
HXLINE( 387)					 ::hxd::snd::openal::Source source1 = source;
HXDLIN( 387)					source1->playedTime = (source1->playedTime + maxT);
            				}
            			}
            			else {
HXLINE( 389)				if ((t > maxT)) {
HXLINE( 390)					t = maxT;
            				}
            			}
HXLINE( 391)			return t;
            		}
            		else {
HXLINE( 393)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported param 0x",e6,88,8b,af) + ::StringTools_obj::hex(param,null()))));
            		}
HXLINE( 377)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Emulator_obj,getSourcef,return )

int Emulator_obj::getSourcei( ::hxd::snd::openal::Source source,int param){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_397_getSourcei)
HXDLIN( 397)		switch((int)(param)){
            			case (int)4112: {
HXLINE( 399)				bool _hx_tmp;
HXDLIN( 399)				bool _hx_tmp1;
HXDLIN( 399)				if (::hx::IsNotNull( source->chan )) {
HXLINE( 399)					_hx_tmp1 = (source->buffers->length == 0);
            				}
            				else {
HXLINE( 399)					_hx_tmp1 = true;
            				}
HXDLIN( 399)				if (!(_hx_tmp1)) {
HXLINE( 399)					if (!(source->loop)) {
HXLINE( 399)						int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 399)						Float _hx_tmp1;
HXDLIN( 399)						if ((timer > 0)) {
HXLINE( 399)							_hx_tmp1 = (( (Float)(timer) ) / ( (Float)(1000) ));
            						}
            						else {
HXLINE( 399)							_hx_tmp1 = ( (Float)(0) );
            						}
HXDLIN( 399)						_hx_tmp = ((_hx_tmp1 - source->playedTime) >= source->duration);
            					}
            					else {
HXLINE( 399)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 399)					_hx_tmp = true;
            				}
HXDLIN( 399)				if (_hx_tmp) {
HXLINE( 399)					return 4116;
            				}
            				else {
HXLINE( 399)					return 4114;
            				}
            			}
            			break;
            			case (int)4118: {
HXLINE( 401)				if (source->loop) {
HXLINE( 402)					return 0;
            				}
HXLINE( 403)				int count = 0;
HXLINE( 404)				int cur = source->currentSample;
HXLINE( 405)				{
HXLINE( 405)					int _g = 0;
HXDLIN( 405)					::Array< ::Dynamic> _g1 = source->buffers;
HXDLIN( 405)					while((_g < _g1->length)){
HXLINE( 405)						 ::hxd::snd::openal::Buffer b = _g1->__get(_g).StaticCast<  ::hxd::snd::openal::Buffer >();
HXDLIN( 405)						_g = (_g + 1);
HXLINE( 406)						if ((cur >= b->samples)) {
HXLINE( 407)							cur = (cur - b->samples);
HXLINE( 408)							count = (count + 1);
            						}
            						else {
HXLINE( 410)							goto _hx_goto_46;
            						}
            					}
            					_hx_goto_46:;
            				}
HXLINE( 411)				return count;
            			}
            			break;
            			case (int)4133: {
HXLINE( 413)				Float _hx_tmp = ::hxd::snd::openal::Emulator_obj::getSourcef(source,4132);
HXDLIN( 413)				return ::Std_obj::_hx_int((_hx_tmp * ( (Float)(source->frequency) )));
            			}
            			break;
            			default:{
HXLINE( 415)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported param 0x",e6,88,8b,af) + ::StringTools_obj::hex(param,null()))));
            			}
            		}
HXLINE( 397)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Emulator_obj,getSourcei,return )

void Emulator_obj::getSource3f( ::hxd::snd::openal::Source source,int param,::Array< Float > values){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_419_getSource3f)
HXDLIN( 419)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Emulator_obj,getSource3f,(void))

void Emulator_obj::getSourcefv( ::hxd::snd::openal::Source source,int param, ::haxe::io::Bytes values){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_422_getSourcefv)
HXDLIN( 422)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Emulator_obj,getSourcefv,(void))

void Emulator_obj::getSource3i( ::hxd::snd::openal::Source source,int param,::Array< int > values){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_425_getSource3i)
HXDLIN( 425)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Emulator_obj,getSource3i,(void))

void Emulator_obj::getSourceiv( ::hxd::snd::openal::Source source,int param, ::haxe::io::Bytes values){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_428_getSourceiv)
HXDLIN( 428)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Emulator_obj,getSourceiv,(void))

void Emulator_obj::sourcePlayv(int n, ::haxe::io::Bytes sources){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_433_sourcePlayv)
HXDLIN( 433)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Emulator_obj,sourcePlayv,(void))

void Emulator_obj::sourceStopv(int n, ::haxe::io::Bytes sources){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_436_sourceStopv)
HXDLIN( 436)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Emulator_obj,sourceStopv,(void))

void Emulator_obj::sourceRewindv(int n, ::haxe::io::Bytes sources){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_439_sourceRewindv)
HXDLIN( 439)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Emulator_obj,sourceRewindv,(void))

void Emulator_obj::sourcePausev(int n, ::haxe::io::Bytes sources){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_442_sourcePausev)
HXDLIN( 442)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Emulator_obj,sourcePausev,(void))

void Emulator_obj::sourcePlay( ::hxd::snd::openal::Source source){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_446_sourcePlay)
HXDLIN( 446)		source->play();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Emulator_obj,sourcePlay,(void))

void Emulator_obj::sourceStop( ::hxd::snd::openal::Source source){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_449_sourceStop)
HXLINE( 450)		source->stop(null());
HXLINE( 451)		source->currentSample = 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Emulator_obj,sourceStop,(void))

void Emulator_obj::sourceRewind( ::hxd::snd::openal::Source source){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_455_sourceRewind)
HXDLIN( 455)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Emulator_obj,sourceRewind,(void))

void Emulator_obj::sourcePause( ::hxd::snd::openal::Source source){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_458_sourcePause)
HXDLIN( 458)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Emulator_obj,sourcePause,(void))

void Emulator_obj::sourceQueueBuffers( ::hxd::snd::openal::Source source,int nb, ::haxe::io::Bytes buffers){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_462_sourceQueueBuffers)
HXLINE( 463)		{
HXLINE( 463)			int _g = 0;
HXDLIN( 463)			int _g1 = nb;
HXDLIN( 463)			while((_g < _g1)){
HXLINE( 463)				_g = (_g + 1);
HXDLIN( 463)				int i = (_g - 1);
HXLINE( 464)				int pos = (i * 4);
HXDLIN( 464)				 ::hxd::snd::openal::Buffer b = ( ( ::hxd::snd::openal::Buffer)(::hxd::snd::openal::Buffer_obj::all->get((((( (int)(buffers->b->__get(pos)) ) | (( (int)(buffers->b->__get((pos + 1))) ) << 8)) | (( (int)(buffers->b->__get((pos + 2))) ) << 16)) | (( (int)(buffers->b->__get((pos + 3))) ) << 24)))) );
HXLINE( 465)				if (::hx::IsNull( b )) {
HXLINE( 465)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            				}
HXLINE( 466)				source->buffers->push(b);
            			}
            		}
HXLINE( 468)		source->updateDuration();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Emulator_obj,sourceQueueBuffers,(void))

void Emulator_obj::sourceUnqueueBuffers( ::hxd::snd::openal::Source source,int nb, ::haxe::io::Bytes buffers){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_472_sourceUnqueueBuffers)
HXDLIN( 472)		int _g = 0;
HXDLIN( 472)		int _g1 = nb;
HXDLIN( 472)		while((_g < _g1)){
HXDLIN( 472)			_g = (_g + 1);
HXDLIN( 472)			int i = (_g - 1);
HXLINE( 473)			int pos = (i * 4);
HXDLIN( 473)			 ::hxd::snd::openal::Buffer b = ( ( ::hxd::snd::openal::Buffer)(::hxd::snd::openal::Buffer_obj::all->get((((( (int)(buffers->b->__get(pos)) ) | (( (int)(buffers->b->__get((pos + 1))) ) << 8)) | (( (int)(buffers->b->__get((pos + 2))) ) << 16)) | (( (int)(buffers->b->__get((pos + 3))) ) << 24)))) );
HXLINE( 474)			if (::hx::IsInstanceNotEq( b,source->buffers->__get(0).StaticCast<  ::hxd::snd::openal::Buffer >() )) {
HXLINE( 474)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            			}
HXLINE( 475)			if (::hx::IsNotNull( source->chan )) {
HXLINE( 476)				if ((source->currentSample < b->samples)) {
HXLINE( 476)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            				}
HXLINE( 477)				source->buffers->shift().StaticCast<  ::hxd::snd::openal::Buffer >();
HXLINE( 478)				 ::hxd::snd::openal::Source source1 = source;
HXDLIN( 478)				source1->currentSample = (source1->currentSample - b->samples);
HXLINE( 479)				 ::hxd::snd::openal::Source source2 = source;
HXDLIN( 479)				source2->playedTime = (source2->playedTime + (( (Float)(b->samples) ) / ( (Float)(b->frequency) )));
            			}
            			else {
HXLINE( 481)				source->buffers->shift().StaticCast<  ::hxd::snd::openal::Buffer >();
            			}
HXLINE( 482)			source->updateDuration();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Emulator_obj,sourceUnqueueBuffers,(void))

void Emulator_obj::genBuffers(int n, ::haxe::io::Bytes buffers){
            	HX_GC_STACKFRAME(&_hx_pos_dc58d903c7921980_488_genBuffers)
HXDLIN( 488)		int _g = 0;
HXDLIN( 488)		int _g1 = n;
HXDLIN( 488)		while((_g < _g1)){
HXDLIN( 488)			_g = (_g + 1);
HXDLIN( 488)			int i = (_g - 1);
HXLINE( 489)			{
HXLINE( 489)				int pos = (i << 2);
HXDLIN( 489)				int v =  ::hxd::snd::openal::Buffer_obj::__alloc( HX_CTX )->id;
HXDLIN( 489)				buffers->b[pos] = ( (unsigned char)((v & 255)) );
HXDLIN( 489)				buffers->b[(pos + 1)] = ( (unsigned char)(((v >> 8) & 255)) );
HXDLIN( 489)				buffers->b[(pos + 2)] = ( (unsigned char)(((v >> 16) & 255)) );
HXDLIN( 489)				buffers->b[(pos + 3)] = ( (unsigned char)((::hx::UShr(v,24) & 255)) );
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Emulator_obj,genBuffers,(void))

void Emulator_obj::deleteBuffers(int n, ::haxe::io::Bytes buffers){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_492_deleteBuffers)
HXDLIN( 492)		int _g = 0;
HXDLIN( 492)		int _g1 = n;
HXDLIN( 492)		while((_g < _g1)){
HXDLIN( 492)			_g = (_g + 1);
HXDLIN( 492)			int i = (_g - 1);
HXLINE( 493)			int pos = (i << 2);
HXDLIN( 493)			( ( ::hxd::snd::openal::Buffer)(::hxd::snd::openal::Buffer_obj::all->get((((( (int)(buffers->b->__get(pos)) ) | (( (int)(buffers->b->__get((pos + 1))) ) << 8)) | (( (int)(buffers->b->__get((pos + 2))) ) << 16)) | (( (int)(buffers->b->__get((pos + 3))) ) << 24)))) )->dispose();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Emulator_obj,deleteBuffers,(void))

bool Emulator_obj::isBuffer( ::hxd::snd::openal::Buffer buffer){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_496_isBuffer)
HXDLIN( 496)		return ::hx::IsNotNull( buffer );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Emulator_obj,isBuffer,return )

void Emulator_obj::bufferData( ::hxd::snd::openal::Buffer buffer,int format, ::haxe::io::Bytes data,int size,int freq){
	if ((freq != ( (int)(::hxd::snd::openal::Emulator_obj::get_NATIVE_FREQ()) ))) {
		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((HX_("Unsupported frequency value: ",88,7c,99,31) + freq) + HX_(" should be ",b0,2e,91,d5)) + ( (int)(::hxd::snd::openal::Emulator_obj::get_NATIVE_FREQ()) ))));
	}
	switch((int)(format)){
		case (int)4352: {
			::Array< Float > bdata = buffer->alloc((size * 2));
			{
				int _g = 0;
				int _g1 = size;
				while((_g < _g1)){
					_g = (_g + 1);
					int i = (_g - 1);
					Float v = (( (Float)(data->b->__get(i)) ) / ( (Float)(255) ));
					bdata->__unsafe_set((i << 1),v);
					bdata->__unsafe_set(((i << 1) | 1),v);
				}
			}
		}
		break;
		case (int)4353: {
			::Array< Float > bdata = buffer->alloc(size);
			{
				int _g = 0;
				int _g1 = (size >> 1);
				while((_g < _g1)){
					_g = (_g + 1);
					int i = (_g - 1);
					int pos = (i << 1);
					int v = (( (int)(data->b->__get(pos)) ) | (( (int)(data->b->__get((pos + 1))) ) << 8));
					int v1;
					if (((v & 32768) == 0)) {
						v1 = v;
					}
					else {
						v1 = (v | -65536);
					}
					Float v2 = (( (Float)(v1) ) / ( (Float)(32768) ));
					bdata->__unsafe_set((i << 1),v2);
					bdata->__unsafe_set(((i << 1) | 1),v2);
				}
			}
		}
		break;
		case (int)4354: {
			::Array< Float > bdata = buffer->alloc(size);
			{
				int _g = 0;
				int _g1 = size;
				while((_g < _g1)){
					_g = (_g + 1);
					int i = (_g - 1);
					Float v = (( (Float)(data->b->__get(i)) ) / ( (Float)(255) ));
					bdata->__unsafe_set(i,v);
				}
			}
		}
		break;
		case (int)4355: {
			::Array< Float > bdata = buffer->alloc((size >> 1));
			{
				int _g = 0;
				int _g1 = (size >> 1);
				while((_g < _g1)){
					_g = (_g + 1);
					int i = (_g - 1);
					int pos = (i << 1);
					int v = (( (int)(data->b->__get(pos)) ) | (( (int)(data->b->__get((pos + 1))) ) << 8));
					int v1;
					if (((v & 32768) == 0)) {
						v1 = v;
					}
					else {
						v1 = (v | -65536);
					}
					Float v2 = (( (Float)(v1) ) / ( (Float)(32768) ));
					bdata->__unsafe_set(i,v2);
				}
			}
		}
		break;
		case (int)4368: {
			::Array< Float > bdata = buffer->alloc((size >> 1));
			{
				int _g = 0;
				int _g1 = (size >> 2);
				while((_g < _g1)){
					_g = (_g + 1);
					int i = (_g - 1);
					int pos = (i << 2);
					bool _hx_tmp;
					if ((pos >= 0)) {
						_hx_tmp = ((pos + 4) > data->length);
					}
					else {
						_hx_tmp = true;
					}
					if (_hx_tmp) {
						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
					}
					Float f =  ::__hxcpp_memory_get_float(data->b,pos);
					bdata->__unsafe_set((i << 1),f);
					bdata->__unsafe_set(((i << 1) | 1),f);
				}
			}
		}
		break;
		case (int)4369: {
			::Array< Float > bdata = buffer->alloc((size >> 2));
			{
				int _g = 0;
				int _g1 = (size >> 2);
				while((_g < _g1)){
					_g = (_g + 1);
					int i = (_g - 1);
					{
						::Array< Float > this1 = buffer->data;
						int pos = (i << 2);
						bool _hx_tmp;
						if ((pos >= 0)) {
							_hx_tmp = ((pos + 4) > data->length);
						}
						else {
							_hx_tmp = true;
						}
						if (_hx_tmp) {
							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
						}
						Float val =  ::__hxcpp_memory_get_float(data->b,pos);
						this1->__unsafe_set(i,val);
					}
				}
			}
		}
		break;
		default:{
			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Format not supported 0x",10,af,75,14) + ::StringTools_obj::hex(format,null()))));
		}
	}
	buffer->samples = (buffer->data->length >> 1);
	buffer->frequency = freq;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Emulator_obj,bufferData,(void))

void Emulator_obj::bufferf( ::hxd::snd::openal::Buffer buffer,int param,Float value){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_558_bufferf)
HXDLIN( 558)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported param 0x",e6,88,8b,af) + ::StringTools_obj::hex(param,null()))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Emulator_obj,bufferf,(void))

void Emulator_obj::buffer3f( ::hxd::snd::openal::Buffer buffer,int param,Float value1,Float value2,Float value3){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_564_buffer3f)
HXDLIN( 564)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported param 0x",e6,88,8b,af) + ::StringTools_obj::hex(param,null()))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Emulator_obj,buffer3f,(void))

void Emulator_obj::bufferfv( ::hxd::snd::openal::Buffer buffer,int param, ::haxe::io::Bytes values){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_570_bufferfv)
HXDLIN( 570)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported param 0x",e6,88,8b,af) + ::StringTools_obj::hex(param,null()))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Emulator_obj,bufferfv,(void))

void Emulator_obj::bufferi( ::hxd::snd::openal::Buffer buffer,int param,int value){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_576_bufferi)
HXDLIN( 576)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported param 0x",e6,88,8b,af) + ::StringTools_obj::hex(param,null()))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Emulator_obj,bufferi,(void))

void Emulator_obj::buffer3i( ::hxd::snd::openal::Buffer buffer,int param,int value1,int value2,int value3){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_582_buffer3i)
HXDLIN( 582)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported param 0x",e6,88,8b,af) + ::StringTools_obj::hex(param,null()))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Emulator_obj,buffer3i,(void))

void Emulator_obj::bufferiv( ::hxd::snd::openal::Buffer buffer,int param, ::haxe::io::Bytes values){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_588_bufferiv)
HXDLIN( 588)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported param 0x",e6,88,8b,af) + ::StringTools_obj::hex(param,null()))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Emulator_obj,bufferiv,(void))

Float Emulator_obj::getBufferf( ::hxd::snd::openal::Buffer buffer,int param){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_594_getBufferf)
HXDLIN( 594)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
HXDLIN( 594)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Emulator_obj,getBufferf,return )

void Emulator_obj::getBuffer3f( ::hxd::snd::openal::Buffer buffer,int param,::Array< Float > values){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_597_getBuffer3f)
HXDLIN( 597)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Emulator_obj,getBuffer3f,(void))

void Emulator_obj::getBufferfv( ::hxd::snd::openal::Buffer buffer,int param, ::haxe::io::Bytes values){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_600_getBufferfv)
HXDLIN( 600)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Emulator_obj,getBufferfv,(void))

int Emulator_obj::getBufferi( ::hxd::snd::openal::Buffer buffer,int param){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_603_getBufferi)
HXDLIN( 603)		switch((int)(param)){
            			case (int)8194: {
HXLINE( 605)				return 32;
            			}
            			break;
            			case (int)8195: {
HXLINE( 606)				return 2;
            			}
            			break;
            			case (int)8196: {
HXLINE( 604)				return (buffer->data->length * 4);
            			}
            			break;
            			default:{
HXLINE( 608)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported param 0x",e6,88,8b,af) + ::StringTools_obj::hex(param,null()))));
            			}
            		}
HXLINE( 603)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Emulator_obj,getBufferi,return )

void Emulator_obj::getBuffer3i( ::hxd::snd::openal::Buffer buffer,int param,::Array< int > values){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_612_getBuffer3i)
HXDLIN( 612)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Emulator_obj,getBuffer3i,(void))

void Emulator_obj::getBufferiv( ::hxd::snd::openal::Buffer buffer,int param, ::haxe::io::Bytes values){
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_615_getBufferiv)
HXDLIN( 615)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Emulator_obj,getBufferiv,(void))

int Emulator_obj::FORMAT_MONOF32;

int Emulator_obj::FORMAT_STEREOF32;

int Emulator_obj::NONE;

int Emulator_obj::FALSE;

int Emulator_obj::TRUE;

int Emulator_obj::SOURCE_RELATIVE;

int Emulator_obj::CONE_INNER_ANGLE;

int Emulator_obj::CONE_OUTER_ANGLE;

int Emulator_obj::PITCH;

int Emulator_obj::POSITION;

int Emulator_obj::DIRECTION;

int Emulator_obj::VELOCITY;

int Emulator_obj::LOOPING;

int Emulator_obj::BUFFER;

int Emulator_obj::GAIN;

int Emulator_obj::MIN_GAIN;

int Emulator_obj::MAX_GAIN;

int Emulator_obj::ORIENTATION;

int Emulator_obj::SOURCE_STATE;

int Emulator_obj::INITIAL;

int Emulator_obj::PLAYING;

int Emulator_obj::PAUSED;

int Emulator_obj::STOPPED;

int Emulator_obj::BUFFERS_QUEUED;

int Emulator_obj::BUFFERS_PROCESSED;

int Emulator_obj::REFERENCE_DISTANCE;

int Emulator_obj::ROLLOFF_FACTOR;

int Emulator_obj::CONE_OUTER_GAIN;

int Emulator_obj::MAX_DISTANCE;

int Emulator_obj::SEC_OFFSET;

int Emulator_obj::SAMPLE_OFFSET;

int Emulator_obj::BYTE_OFFSET;

int Emulator_obj::SOURCE_TYPE;

int Emulator_obj::STATIC;

int Emulator_obj::STREAMING;

int Emulator_obj::UNDETERMINED;

int Emulator_obj::FORMAT_MONO8;

int Emulator_obj::FORMAT_MONO16;

int Emulator_obj::FORMAT_STEREO8;

int Emulator_obj::FORMAT_STEREO16;

int Emulator_obj::FREQUENCY;

int Emulator_obj::BITS;

int Emulator_obj::CHANNELS;

int Emulator_obj::SIZE;

int Emulator_obj::UNUSED;

int Emulator_obj::PENDING;

int Emulator_obj::PROCESSED;

int Emulator_obj::NO_ERROR;

int Emulator_obj::INVALID_NAME;

int Emulator_obj::INVALID_ENUM;

int Emulator_obj::INVALID_VALUE;

int Emulator_obj::INVALID_OPERATION;

int Emulator_obj::OUT_OF_MEMORY;

int Emulator_obj::VENDOR;

int Emulator_obj::VERSION;

int Emulator_obj::RENDERER;

int Emulator_obj::EXTENSIONS;

int Emulator_obj::DOPPLER_FACTOR;

int Emulator_obj::DOPPLER_VELOCITY;

int Emulator_obj::SPEED_OF_SOUND;

int Emulator_obj::DISTANCE_MODEL;

int Emulator_obj::INVERSE_DISTANCE;

int Emulator_obj::INVERSE_DISTANCE_CLAMPED;

int Emulator_obj::LINEAR_DISTANCE;

int Emulator_obj::LINEAR_DISTANCE_CLAMPED;

int Emulator_obj::EXPONENT_DISTANCE;

int Emulator_obj::EXPONENT_DISTANCE_CLAMPED;


Emulator_obj::Emulator_obj()
{
}

bool Emulator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { outValue = enable_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"disable") ) { outValue = disable_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourcef") ) { outValue = sourcef_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourcei") ) { outValue = sourcei_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"bufferf") ) { outValue = bufferf_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"bufferi") ) { outValue = bufferi_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFloat") ) { outValue = getFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getError") ) { outValue = getError_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isSource") ) { outValue = isSource_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"source3f") ) { outValue = source3f_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourcefv") ) { outValue = sourcefv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"source3i") ) { outValue = source3i_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourceiv") ) { outValue = sourceiv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isBuffer") ) { outValue = isBuffer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"buffer3f") ) { outValue = buffer3f_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"bufferfv") ) { outValue = bufferfv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"buffer3i") ) { outValue = buffer3i_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"bufferiv") ) { outValue = bufferiv_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isEnabled") ) { outValue = isEnabled_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getFloatv") ) { outValue = getFloatv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getString") ) { outValue = getString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getDouble") ) { outValue = getDouble_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"listenerf") ) { outValue = listenerf_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"listeneri") ) { outValue = listeneri_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getDoublev") ) { outValue = getDoublev_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBoolean") ) { outValue = getBoolean_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getInteger") ) { outValue = getInteger_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"listener3f") ) { outValue = listener3f_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"listenerfv") ) { outValue = listenerfv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"listener3i") ) { outValue = listener3i_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"listeneriv") ) { outValue = listeneriv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"genSources") ) { outValue = genSources_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSourcef") ) { outValue = getSourcef_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSourcei") ) { outValue = getSourcei_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourcePlay") ) { outValue = sourcePlay_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourceStop") ) { outValue = sourceStop_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"genBuffers") ) { outValue = genBuffers_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"bufferData") ) { outValue = bufferData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBufferf") ) { outValue = getBufferf_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBufferi") ) { outValue = getBufferi_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"NATIVE_FREQ") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_NATIVE_FREQ() ); return true; } }
		if (HX_FIELD_EQ(inName,"CACHED_FREQ") ) { outValue = ( CACHED_FREQ ); return true; }
		if (HX_FIELD_EQ(inName,"getBooleanv") ) { outValue = getBooleanv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getIntegerv") ) { outValue = getIntegerv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSource3f") ) { outValue = getSource3f_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSourcefv") ) { outValue = getSourcefv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSource3i") ) { outValue = getSource3i_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSourceiv") ) { outValue = getSourceiv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourcePlayv") ) { outValue = sourcePlayv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourceStopv") ) { outValue = sourceStopv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourcePause") ) { outValue = sourcePause_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBuffer3f") ) { outValue = getBuffer3f_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBufferfv") ) { outValue = getBufferfv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBuffer3i") ) { outValue = getBuffer3i_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBufferiv") ) { outValue = getBufferiv_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"speedOfSound") ) { outValue = speedOfSound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getEnumValue") ) { outValue = getEnumValue_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getListenerf") ) { outValue = getListenerf_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getListeneri") ) { outValue = getListeneri_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourcePausev") ) { outValue = sourcePausev_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourceRewind") ) { outValue = sourceRewind_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dopplerFactor") ) { outValue = dopplerFactor_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"distanceModel") ) { outValue = distanceModel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getListener3f") ) { outValue = getListener3f_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getListenerfv") ) { outValue = getListenerfv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getListener3i") ) { outValue = getListener3i_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getListeneriv") ) { outValue = getListeneriv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"deleteSources") ) { outValue = deleteSources_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourceRewindv") ) { outValue = sourceRewindv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"deleteBuffers") ) { outValue = deleteBuffers_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadExtensions") ) { outValue = loadExtensions_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_NATIVE_FREQ") ) { outValue = get_NATIVE_FREQ_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"dopplerVelocity") ) { outValue = dopplerVelocity_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isExtensionPresent") ) { outValue = isExtensionPresent_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourceQueueBuffers") ) { outValue = sourceQueueBuffers_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"sourceUnqueueBuffers") ) { outValue = sourceUnqueueBuffers_dyn(); return true; }
	}
	return false;
}

bool Emulator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"CACHED_FREQ") ) { CACHED_FREQ=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Emulator_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Emulator_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Emulator_obj::CACHED_FREQ,HX_("CACHED_FREQ",75,21,9f,1f)},
	{::hx::fsInt,(void *) &Emulator_obj::FORMAT_MONOF32,HX_("FORMAT_MONOF32",da,c1,ae,0d)},
	{::hx::fsInt,(void *) &Emulator_obj::FORMAT_STEREOF32,HX_("FORMAT_STEREOF32",e5,c3,e6,33)},
	{::hx::fsInt,(void *) &Emulator_obj::NONE,HX_("NONE",b8,da,ca,33)},
	{::hx::fsInt,(void *) &Emulator_obj::FALSE,HX_("FALSE",83,6d,3d,79)},
	{::hx::fsInt,(void *) &Emulator_obj::TRUE,HX_("TRUE",4e,6f,c4,37)},
	{::hx::fsInt,(void *) &Emulator_obj::SOURCE_RELATIVE,HX_("SOURCE_RELATIVE",f0,f3,84,fe)},
	{::hx::fsInt,(void *) &Emulator_obj::CONE_INNER_ANGLE,HX_("CONE_INNER_ANGLE",4e,a1,d7,93)},
	{::hx::fsInt,(void *) &Emulator_obj::CONE_OUTER_ANGLE,HX_("CONE_OUTER_ANGLE",f3,e1,bf,cc)},
	{::hx::fsInt,(void *) &Emulator_obj::PITCH,HX_("PITCH",a0,f3,8e,40)},
	{::hx::fsInt,(void *) &Emulator_obj::POSITION,HX_("POSITION",a9,30,80,24)},
	{::hx::fsInt,(void *) &Emulator_obj::DIRECTION,HX_("DIRECTION",1f,d2,98,0b)},
	{::hx::fsInt,(void *) &Emulator_obj::VELOCITY,HX_("VELOCITY",1d,92,83,78)},
	{::hx::fsInt,(void *) &Emulator_obj::LOOPING,HX_("LOOPING",de,50,51,a0)},
	{::hx::fsInt,(void *) &Emulator_obj::BUFFER,HX_("BUFFER",00,69,17,83)},
	{::hx::fsInt,(void *) &Emulator_obj::GAIN,HX_("GAIN",7f,b8,1f,2f)},
	{::hx::fsInt,(void *) &Emulator_obj::MIN_GAIN,HX_("MIN_GAIN",ac,29,d2,21)},
	{::hx::fsInt,(void *) &Emulator_obj::MAX_GAIN,HX_("MAX_GAIN",5a,0f,b8,d4)},
	{::hx::fsInt,(void *) &Emulator_obj::ORIENTATION,HX_("ORIENTATION",b0,fa,3a,d4)},
	{::hx::fsInt,(void *) &Emulator_obj::SOURCE_STATE,HX_("SOURCE_STATE",4d,e8,1e,ab)},
	{::hx::fsInt,(void *) &Emulator_obj::INITIAL,HX_("INITIAL",64,e4,72,4b)},
	{::hx::fsInt,(void *) &Emulator_obj::PLAYING,HX_("PLAYING",4e,e3,eb,09)},
	{::hx::fsInt,(void *) &Emulator_obj::PAUSED,HX_("PAUSED",ae,ec,06,a2)},
	{::hx::fsInt,(void *) &Emulator_obj::STOPPED,HX_("STOPPED",ed,a5,35,c3)},
	{::hx::fsInt,(void *) &Emulator_obj::BUFFERS_QUEUED,HX_("BUFFERS_QUEUED",5f,78,ce,71)},
	{::hx::fsInt,(void *) &Emulator_obj::BUFFERS_PROCESSED,HX_("BUFFERS_PROCESSED",42,9d,62,ac)},
	{::hx::fsInt,(void *) &Emulator_obj::REFERENCE_DISTANCE,HX_("REFERENCE_DISTANCE",89,d5,ce,9a)},
	{::hx::fsInt,(void *) &Emulator_obj::ROLLOFF_FACTOR,HX_("ROLLOFF_FACTOR",bc,10,98,56)},
	{::hx::fsInt,(void *) &Emulator_obj::CONE_OUTER_GAIN,HX_("CONE_OUTER_GAIN",3f,da,8d,e3)},
	{::hx::fsInt,(void *) &Emulator_obj::MAX_DISTANCE,HX_("MAX_DISTANCE",90,83,bb,a5)},
	{::hx::fsInt,(void *) &Emulator_obj::SEC_OFFSET,HX_("SEC_OFFSET",e1,5d,a3,ac)},
	{::hx::fsInt,(void *) &Emulator_obj::SAMPLE_OFFSET,HX_("SAMPLE_OFFSET",48,82,ac,b4)},
	{::hx::fsInt,(void *) &Emulator_obj::BYTE_OFFSET,HX_("BYTE_OFFSET",2a,df,43,36)},
	{::hx::fsInt,(void *) &Emulator_obj::SOURCE_TYPE,HX_("SOURCE_TYPE",de,ff,00,df)},
	{::hx::fsInt,(void *) &Emulator_obj::STATIC,HX_("STATIC",ae,88,7e,b8)},
	{::hx::fsInt,(void *) &Emulator_obj::STREAMING,HX_("STREAMING",42,38,7b,b1)},
	{::hx::fsInt,(void *) &Emulator_obj::UNDETERMINED,HX_("UNDETERMINED",0a,ed,9d,50)},
	{::hx::fsInt,(void *) &Emulator_obj::FORMAT_MONO8,HX_("FORMAT_MONO8",6d,40,81,7a)},
	{::hx::fsInt,(void *) &Emulator_obj::FORMAT_MONO16,HX_("FORMAT_MONO16",10,19,97,b6)},
	{::hx::fsInt,(void *) &Emulator_obj::FORMAT_STEREO8,HX_("FORMAT_STEREO8",b8,19,58,da)},
	{::hx::fsInt,(void *) &Emulator_obj::FORMAT_STEREO16,HX_("FORMAT_STEREO16",65,61,be,32)},
	{::hx::fsInt,(void *) &Emulator_obj::FREQUENCY,HX_("FREQUENCY",7c,f2,42,b7)},
	{::hx::fsInt,(void *) &Emulator_obj::BITS,HX_("BITS",06,c3,d7,2b)},
	{::hx::fsInt,(void *) &Emulator_obj::CHANNELS,HX_("CHANNELS",50,3a,74,c4)},
	{::hx::fsInt,(void *) &Emulator_obj::SIZE,HX_("SIZE",c1,68,14,37)},
	{::hx::fsInt,(void *) &Emulator_obj::UNUSED,HX_("UNUSED",16,45,05,1e)},
	{::hx::fsInt,(void *) &Emulator_obj::PENDING,HX_("PENDING",37,6c,c0,ab)},
	{::hx::fsInt,(void *) &Emulator_obj::PROCESSED,HX_("PROCESSED",6e,24,64,ce)},
	{::hx::fsInt,(void *) &Emulator_obj::NO_ERROR,HX_("NO_ERROR",ea,b5,7d,2f)},
	{::hx::fsInt,(void *) &Emulator_obj::INVALID_NAME,HX_("INVALID_NAME",f3,7b,59,19)},
	{::hx::fsInt,(void *) &Emulator_obj::INVALID_ENUM,HX_("INVALID_ENUM",a9,74,70,13)},
	{::hx::fsInt,(void *) &Emulator_obj::INVALID_VALUE,HX_("INVALID_VALUE",a9,e8,26,b0)},
	{::hx::fsInt,(void *) &Emulator_obj::INVALID_OPERATION,HX_("INVALID_OPERATION",5f,b1,c8,29)},
	{::hx::fsInt,(void *) &Emulator_obj::OUT_OF_MEMORY,HX_("OUT_OF_MEMORY",18,f2,97,e1)},
	{::hx::fsInt,(void *) &Emulator_obj::VENDOR,HX_("VENDOR",88,91,19,51)},
	{::hx::fsInt,(void *) &Emulator_obj::VERSION,HX_("VERSION",f8,ba,c5,fc)},
	{::hx::fsInt,(void *) &Emulator_obj::RENDERER,HX_("RENDERER",43,55,61,0c)},
	{::hx::fsInt,(void *) &Emulator_obj::EXTENSIONS,HX_("EXTENSIONS",14,f0,79,7b)},
	{::hx::fsInt,(void *) &Emulator_obj::DOPPLER_FACTOR,HX_("DOPPLER_FACTOR",e0,6d,21,56)},
	{::hx::fsInt,(void *) &Emulator_obj::DOPPLER_VELOCITY,HX_("DOPPLER_VELOCITY",6e,e1,7d,1d)},
	{::hx::fsInt,(void *) &Emulator_obj::SPEED_OF_SOUND,HX_("SPEED_OF_SOUND",5f,3f,54,ba)},
	{::hx::fsInt,(void *) &Emulator_obj::DISTANCE_MODEL,HX_("DISTANCE_MODEL",bf,9b,1a,00)},
	{::hx::fsInt,(void *) &Emulator_obj::INVERSE_DISTANCE,HX_("INVERSE_DISTANCE",04,89,17,1d)},
	{::hx::fsInt,(void *) &Emulator_obj::INVERSE_DISTANCE_CLAMPED,HX_("INVERSE_DISTANCE_CLAMPED",7f,1a,32,28)},
	{::hx::fsInt,(void *) &Emulator_obj::LINEAR_DISTANCE,HX_("LINEAR_DISTANCE",0f,b8,c7,14)},
	{::hx::fsInt,(void *) &Emulator_obj::LINEAR_DISTANCE_CLAMPED,HX_("LINEAR_DISTANCE_CLAMPED",8a,cc,88,b2)},
	{::hx::fsInt,(void *) &Emulator_obj::EXPONENT_DISTANCE,HX_("EXPONENT_DISTANCE",45,4a,ec,c8)},
	{::hx::fsInt,(void *) &Emulator_obj::EXPONENT_DISTANCE_CLAMPED,HX_("EXPONENT_DISTANCE_CLAMPED",c0,84,7b,57)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Emulator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Emulator_obj::CACHED_FREQ,"CACHED_FREQ");
	HX_MARK_MEMBER_NAME(Emulator_obj::FORMAT_MONOF32,"FORMAT_MONOF32");
	HX_MARK_MEMBER_NAME(Emulator_obj::FORMAT_STEREOF32,"FORMAT_STEREOF32");
	HX_MARK_MEMBER_NAME(Emulator_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(Emulator_obj::FALSE,"FALSE");
	HX_MARK_MEMBER_NAME(Emulator_obj::TRUE,"TRUE");
	HX_MARK_MEMBER_NAME(Emulator_obj::SOURCE_RELATIVE,"SOURCE_RELATIVE");
	HX_MARK_MEMBER_NAME(Emulator_obj::CONE_INNER_ANGLE,"CONE_INNER_ANGLE");
	HX_MARK_MEMBER_NAME(Emulator_obj::CONE_OUTER_ANGLE,"CONE_OUTER_ANGLE");
	HX_MARK_MEMBER_NAME(Emulator_obj::PITCH,"PITCH");
	HX_MARK_MEMBER_NAME(Emulator_obj::POSITION,"POSITION");
	HX_MARK_MEMBER_NAME(Emulator_obj::DIRECTION,"DIRECTION");
	HX_MARK_MEMBER_NAME(Emulator_obj::VELOCITY,"VELOCITY");
	HX_MARK_MEMBER_NAME(Emulator_obj::LOOPING,"LOOPING");
	HX_MARK_MEMBER_NAME(Emulator_obj::BUFFER,"BUFFER");
	HX_MARK_MEMBER_NAME(Emulator_obj::GAIN,"GAIN");
	HX_MARK_MEMBER_NAME(Emulator_obj::MIN_GAIN,"MIN_GAIN");
	HX_MARK_MEMBER_NAME(Emulator_obj::MAX_GAIN,"MAX_GAIN");
	HX_MARK_MEMBER_NAME(Emulator_obj::ORIENTATION,"ORIENTATION");
	HX_MARK_MEMBER_NAME(Emulator_obj::SOURCE_STATE,"SOURCE_STATE");
	HX_MARK_MEMBER_NAME(Emulator_obj::INITIAL,"INITIAL");
	HX_MARK_MEMBER_NAME(Emulator_obj::PLAYING,"PLAYING");
	HX_MARK_MEMBER_NAME(Emulator_obj::PAUSED,"PAUSED");
	HX_MARK_MEMBER_NAME(Emulator_obj::STOPPED,"STOPPED");
	HX_MARK_MEMBER_NAME(Emulator_obj::BUFFERS_QUEUED,"BUFFERS_QUEUED");
	HX_MARK_MEMBER_NAME(Emulator_obj::BUFFERS_PROCESSED,"BUFFERS_PROCESSED");
	HX_MARK_MEMBER_NAME(Emulator_obj::REFERENCE_DISTANCE,"REFERENCE_DISTANCE");
	HX_MARK_MEMBER_NAME(Emulator_obj::ROLLOFF_FACTOR,"ROLLOFF_FACTOR");
	HX_MARK_MEMBER_NAME(Emulator_obj::CONE_OUTER_GAIN,"CONE_OUTER_GAIN");
	HX_MARK_MEMBER_NAME(Emulator_obj::MAX_DISTANCE,"MAX_DISTANCE");
	HX_MARK_MEMBER_NAME(Emulator_obj::SEC_OFFSET,"SEC_OFFSET");
	HX_MARK_MEMBER_NAME(Emulator_obj::SAMPLE_OFFSET,"SAMPLE_OFFSET");
	HX_MARK_MEMBER_NAME(Emulator_obj::BYTE_OFFSET,"BYTE_OFFSET");
	HX_MARK_MEMBER_NAME(Emulator_obj::SOURCE_TYPE,"SOURCE_TYPE");
	HX_MARK_MEMBER_NAME(Emulator_obj::STATIC,"STATIC");
	HX_MARK_MEMBER_NAME(Emulator_obj::STREAMING,"STREAMING");
	HX_MARK_MEMBER_NAME(Emulator_obj::UNDETERMINED,"UNDETERMINED");
	HX_MARK_MEMBER_NAME(Emulator_obj::FORMAT_MONO8,"FORMAT_MONO8");
	HX_MARK_MEMBER_NAME(Emulator_obj::FORMAT_MONO16,"FORMAT_MONO16");
	HX_MARK_MEMBER_NAME(Emulator_obj::FORMAT_STEREO8,"FORMAT_STEREO8");
	HX_MARK_MEMBER_NAME(Emulator_obj::FORMAT_STEREO16,"FORMAT_STEREO16");
	HX_MARK_MEMBER_NAME(Emulator_obj::FREQUENCY,"FREQUENCY");
	HX_MARK_MEMBER_NAME(Emulator_obj::BITS,"BITS");
	HX_MARK_MEMBER_NAME(Emulator_obj::CHANNELS,"CHANNELS");
	HX_MARK_MEMBER_NAME(Emulator_obj::SIZE,"SIZE");
	HX_MARK_MEMBER_NAME(Emulator_obj::UNUSED,"UNUSED");
	HX_MARK_MEMBER_NAME(Emulator_obj::PENDING,"PENDING");
	HX_MARK_MEMBER_NAME(Emulator_obj::PROCESSED,"PROCESSED");
	HX_MARK_MEMBER_NAME(Emulator_obj::NO_ERROR,"NO_ERROR");
	HX_MARK_MEMBER_NAME(Emulator_obj::INVALID_NAME,"INVALID_NAME");
	HX_MARK_MEMBER_NAME(Emulator_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(Emulator_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(Emulator_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_MARK_MEMBER_NAME(Emulator_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_MARK_MEMBER_NAME(Emulator_obj::VENDOR,"VENDOR");
	HX_MARK_MEMBER_NAME(Emulator_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(Emulator_obj::RENDERER,"RENDERER");
	HX_MARK_MEMBER_NAME(Emulator_obj::EXTENSIONS,"EXTENSIONS");
	HX_MARK_MEMBER_NAME(Emulator_obj::DOPPLER_FACTOR,"DOPPLER_FACTOR");
	HX_MARK_MEMBER_NAME(Emulator_obj::DOPPLER_VELOCITY,"DOPPLER_VELOCITY");
	HX_MARK_MEMBER_NAME(Emulator_obj::SPEED_OF_SOUND,"SPEED_OF_SOUND");
	HX_MARK_MEMBER_NAME(Emulator_obj::DISTANCE_MODEL,"DISTANCE_MODEL");
	HX_MARK_MEMBER_NAME(Emulator_obj::INVERSE_DISTANCE,"INVERSE_DISTANCE");
	HX_MARK_MEMBER_NAME(Emulator_obj::INVERSE_DISTANCE_CLAMPED,"INVERSE_DISTANCE_CLAMPED");
	HX_MARK_MEMBER_NAME(Emulator_obj::LINEAR_DISTANCE,"LINEAR_DISTANCE");
	HX_MARK_MEMBER_NAME(Emulator_obj::LINEAR_DISTANCE_CLAMPED,"LINEAR_DISTANCE_CLAMPED");
	HX_MARK_MEMBER_NAME(Emulator_obj::EXPONENT_DISTANCE,"EXPONENT_DISTANCE");
	HX_MARK_MEMBER_NAME(Emulator_obj::EXPONENT_DISTANCE_CLAMPED,"EXPONENT_DISTANCE_CLAMPED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Emulator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Emulator_obj::CACHED_FREQ,"CACHED_FREQ");
	HX_VISIT_MEMBER_NAME(Emulator_obj::FORMAT_MONOF32,"FORMAT_MONOF32");
	HX_VISIT_MEMBER_NAME(Emulator_obj::FORMAT_STEREOF32,"FORMAT_STEREOF32");
	HX_VISIT_MEMBER_NAME(Emulator_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(Emulator_obj::FALSE,"FALSE");
	HX_VISIT_MEMBER_NAME(Emulator_obj::TRUE,"TRUE");
	HX_VISIT_MEMBER_NAME(Emulator_obj::SOURCE_RELATIVE,"SOURCE_RELATIVE");
	HX_VISIT_MEMBER_NAME(Emulator_obj::CONE_INNER_ANGLE,"CONE_INNER_ANGLE");
	HX_VISIT_MEMBER_NAME(Emulator_obj::CONE_OUTER_ANGLE,"CONE_OUTER_ANGLE");
	HX_VISIT_MEMBER_NAME(Emulator_obj::PITCH,"PITCH");
	HX_VISIT_MEMBER_NAME(Emulator_obj::POSITION,"POSITION");
	HX_VISIT_MEMBER_NAME(Emulator_obj::DIRECTION,"DIRECTION");
	HX_VISIT_MEMBER_NAME(Emulator_obj::VELOCITY,"VELOCITY");
	HX_VISIT_MEMBER_NAME(Emulator_obj::LOOPING,"LOOPING");
	HX_VISIT_MEMBER_NAME(Emulator_obj::BUFFER,"BUFFER");
	HX_VISIT_MEMBER_NAME(Emulator_obj::GAIN,"GAIN");
	HX_VISIT_MEMBER_NAME(Emulator_obj::MIN_GAIN,"MIN_GAIN");
	HX_VISIT_MEMBER_NAME(Emulator_obj::MAX_GAIN,"MAX_GAIN");
	HX_VISIT_MEMBER_NAME(Emulator_obj::ORIENTATION,"ORIENTATION");
	HX_VISIT_MEMBER_NAME(Emulator_obj::SOURCE_STATE,"SOURCE_STATE");
	HX_VISIT_MEMBER_NAME(Emulator_obj::INITIAL,"INITIAL");
	HX_VISIT_MEMBER_NAME(Emulator_obj::PLAYING,"PLAYING");
	HX_VISIT_MEMBER_NAME(Emulator_obj::PAUSED,"PAUSED");
	HX_VISIT_MEMBER_NAME(Emulator_obj::STOPPED,"STOPPED");
	HX_VISIT_MEMBER_NAME(Emulator_obj::BUFFERS_QUEUED,"BUFFERS_QUEUED");
	HX_VISIT_MEMBER_NAME(Emulator_obj::BUFFERS_PROCESSED,"BUFFERS_PROCESSED");
	HX_VISIT_MEMBER_NAME(Emulator_obj::REFERENCE_DISTANCE,"REFERENCE_DISTANCE");
	HX_VISIT_MEMBER_NAME(Emulator_obj::ROLLOFF_FACTOR,"ROLLOFF_FACTOR");
	HX_VISIT_MEMBER_NAME(Emulator_obj::CONE_OUTER_GAIN,"CONE_OUTER_GAIN");
	HX_VISIT_MEMBER_NAME(Emulator_obj::MAX_DISTANCE,"MAX_DISTANCE");
	HX_VISIT_MEMBER_NAME(Emulator_obj::SEC_OFFSET,"SEC_OFFSET");
	HX_VISIT_MEMBER_NAME(Emulator_obj::SAMPLE_OFFSET,"SAMPLE_OFFSET");
	HX_VISIT_MEMBER_NAME(Emulator_obj::BYTE_OFFSET,"BYTE_OFFSET");
	HX_VISIT_MEMBER_NAME(Emulator_obj::SOURCE_TYPE,"SOURCE_TYPE");
	HX_VISIT_MEMBER_NAME(Emulator_obj::STATIC,"STATIC");
	HX_VISIT_MEMBER_NAME(Emulator_obj::STREAMING,"STREAMING");
	HX_VISIT_MEMBER_NAME(Emulator_obj::UNDETERMINED,"UNDETERMINED");
	HX_VISIT_MEMBER_NAME(Emulator_obj::FORMAT_MONO8,"FORMAT_MONO8");
	HX_VISIT_MEMBER_NAME(Emulator_obj::FORMAT_MONO16,"FORMAT_MONO16");
	HX_VISIT_MEMBER_NAME(Emulator_obj::FORMAT_STEREO8,"FORMAT_STEREO8");
	HX_VISIT_MEMBER_NAME(Emulator_obj::FORMAT_STEREO16,"FORMAT_STEREO16");
	HX_VISIT_MEMBER_NAME(Emulator_obj::FREQUENCY,"FREQUENCY");
	HX_VISIT_MEMBER_NAME(Emulator_obj::BITS,"BITS");
	HX_VISIT_MEMBER_NAME(Emulator_obj::CHANNELS,"CHANNELS");
	HX_VISIT_MEMBER_NAME(Emulator_obj::SIZE,"SIZE");
	HX_VISIT_MEMBER_NAME(Emulator_obj::UNUSED,"UNUSED");
	HX_VISIT_MEMBER_NAME(Emulator_obj::PENDING,"PENDING");
	HX_VISIT_MEMBER_NAME(Emulator_obj::PROCESSED,"PROCESSED");
	HX_VISIT_MEMBER_NAME(Emulator_obj::NO_ERROR,"NO_ERROR");
	HX_VISIT_MEMBER_NAME(Emulator_obj::INVALID_NAME,"INVALID_NAME");
	HX_VISIT_MEMBER_NAME(Emulator_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_VISIT_MEMBER_NAME(Emulator_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_VISIT_MEMBER_NAME(Emulator_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_VISIT_MEMBER_NAME(Emulator_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_VISIT_MEMBER_NAME(Emulator_obj::VENDOR,"VENDOR");
	HX_VISIT_MEMBER_NAME(Emulator_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(Emulator_obj::RENDERER,"RENDERER");
	HX_VISIT_MEMBER_NAME(Emulator_obj::EXTENSIONS,"EXTENSIONS");
	HX_VISIT_MEMBER_NAME(Emulator_obj::DOPPLER_FACTOR,"DOPPLER_FACTOR");
	HX_VISIT_MEMBER_NAME(Emulator_obj::DOPPLER_VELOCITY,"DOPPLER_VELOCITY");
	HX_VISIT_MEMBER_NAME(Emulator_obj::SPEED_OF_SOUND,"SPEED_OF_SOUND");
	HX_VISIT_MEMBER_NAME(Emulator_obj::DISTANCE_MODEL,"DISTANCE_MODEL");
	HX_VISIT_MEMBER_NAME(Emulator_obj::INVERSE_DISTANCE,"INVERSE_DISTANCE");
	HX_VISIT_MEMBER_NAME(Emulator_obj::INVERSE_DISTANCE_CLAMPED,"INVERSE_DISTANCE_CLAMPED");
	HX_VISIT_MEMBER_NAME(Emulator_obj::LINEAR_DISTANCE,"LINEAR_DISTANCE");
	HX_VISIT_MEMBER_NAME(Emulator_obj::LINEAR_DISTANCE_CLAMPED,"LINEAR_DISTANCE_CLAMPED");
	HX_VISIT_MEMBER_NAME(Emulator_obj::EXPONENT_DISTANCE,"EXPONENT_DISTANCE");
	HX_VISIT_MEMBER_NAME(Emulator_obj::EXPONENT_DISTANCE_CLAMPED,"EXPONENT_DISTANCE_CLAMPED");
};

#endif

::hx::Class Emulator_obj::__mClass;

static ::String Emulator_obj_sStaticFields[] = {
	HX_("CACHED_FREQ",75,21,9f,1f),
	HX_("get_NATIVE_FREQ",37,1f,92,ce),
	HX_("dopplerFactor",dd,2d,05,6f),
	HX_("dopplerVelocity",ab,76,cf,06),
	HX_("speedOfSound",71,e7,21,0a),
	HX_("distanceModel",34,40,e1,d3),
	HX_("enable",83,ae,87,f8),
	HX_("disable",e8,69,58,b1),
	HX_("isEnabled",b7,81,2f,82),
	HX_("getBooleanv",84,2b,02,e7),
	HX_("getIntegerv",ae,0b,1e,47),
	HX_("getFloatv",90,ac,ac,bd),
	HX_("getDoublev",4f,0a,5c,8e),
	HX_("getString",07,b2,86,8d),
	HX_("getBoolean",b2,70,60,cd),
	HX_("getInteger",c8,43,7d,66),
	HX_("getFloat",26,d5,6d,62),
	HX_("getDouble",47,b4,21,af),
	HX_("getError",52,db,00,d3),
	HX_("loadExtensions",da,85,21,20),
	HX_("isExtensionPresent",46,f9,2a,b4),
	HX_("getEnumValue",3a,9d,5d,37),
	HX_("listenerf",72,65,8e,f3),
	HX_("listener3f",47,32,0a,29),
	HX_("listenerfv",c4,5e,0a,29),
	HX_("listeneri",75,65,8e,f3),
	HX_("listener3i",4a,32,0a,29),
	HX_("listeneriv",61,61,0a,29),
	HX_("getListenerf",fc,01,e5,02),
	HX_("getListener3f",7d,8e,7c,85),
	HX_("getListenerfv",fa,ba,7c,85),
	HX_("getListeneri",ff,01,e5,02),
	HX_("getListener3i",80,8e,7c,85),
	HX_("getListeneriv",97,bd,7c,85),
	HX_("genSources",88,e8,7b,b1),
	HX_("deleteSources",4d,a2,d2,17),
	HX_("isSource",65,4c,9b,8a),
	HX_("sourcef",2b,0f,49,b9),
	HX_("source3f",6e,0a,a4,66),
	HX_("sourcefv",eb,36,a4,66),
	HX_("sourcei",2e,0f,49,b9),
	HX_("source3i",71,0a,a4,66),
	HX_("sourceiv",88,39,a4,66),
	HX_("getSourcef",35,95,aa,08),
	HX_("getSourcei",38,95,aa,08),
	HX_("getSource3f",24,cd,97,8c),
	HX_("getSourcefv",a1,f9,97,8c),
	HX_("getSource3i",27,cd,97,8c),
	HX_("getSourceiv",3e,fc,97,8c),
	HX_("sourcePlayv",27,cd,93,f3),
	HX_("sourceStopv",59,d7,1b,b3),
	HX_("sourceRewindv",80,aa,e1,00),
	HX_("sourcePausev",fb,fb,8a,e5),
	HX_("sourcePlay",6f,14,be,72),
	HX_("sourceStop",7d,d6,bf,74),
	HX_("sourceRewind",36,e5,26,01),
	HX_("sourcePause",1b,9c,5d,ec),
	HX_("sourceQueueBuffers",5d,db,5c,42),
	HX_("sourceUnqueueBuffers",f6,77,ef,93),
	HX_("genBuffers",c3,7c,c3,a9),
	HX_("deleteBuffers",88,36,1a,10),
	HX_("isBuffer",8a,58,fe,28),
	HX_("bufferData",4a,bf,73,93),
	HX_("bufferf",66,a3,90,b1),
	HX_("buffer3f",d3,29,fe,ac),
	HX_("bufferfv",50,56,fe,ac),
	HX_("bufferi",69,a3,90,b1),
	HX_("buffer3i",d6,29,fe,ac),
	HX_("bufferiv",ed,58,fe,ac),
	HX_("getBufferf",70,29,f2,00),
	HX_("getBuffer3f",89,ec,f1,d2),
	HX_("getBufferfv",06,19,f2,d2),
	HX_("getBufferi",73,29,f2,00),
	HX_("getBuffer3i",8c,ec,f1,d2),
	HX_("getBufferiv",a3,1b,f2,d2),
	HX_("FORMAT_MONOF32",da,c1,ae,0d),
	HX_("FORMAT_STEREOF32",e5,c3,e6,33),
	HX_("NONE",b8,da,ca,33),
	HX_("FALSE",83,6d,3d,79),
	HX_("TRUE",4e,6f,c4,37),
	HX_("SOURCE_RELATIVE",f0,f3,84,fe),
	HX_("CONE_INNER_ANGLE",4e,a1,d7,93),
	HX_("CONE_OUTER_ANGLE",f3,e1,bf,cc),
	HX_("PITCH",a0,f3,8e,40),
	HX_("POSITION",a9,30,80,24),
	HX_("DIRECTION",1f,d2,98,0b),
	HX_("VELOCITY",1d,92,83,78),
	HX_("LOOPING",de,50,51,a0),
	HX_("BUFFER",00,69,17,83),
	HX_("GAIN",7f,b8,1f,2f),
	HX_("MIN_GAIN",ac,29,d2,21),
	HX_("MAX_GAIN",5a,0f,b8,d4),
	HX_("ORIENTATION",b0,fa,3a,d4),
	HX_("SOURCE_STATE",4d,e8,1e,ab),
	HX_("INITIAL",64,e4,72,4b),
	HX_("PLAYING",4e,e3,eb,09),
	HX_("PAUSED",ae,ec,06,a2),
	HX_("STOPPED",ed,a5,35,c3),
	HX_("BUFFERS_QUEUED",5f,78,ce,71),
	HX_("BUFFERS_PROCESSED",42,9d,62,ac),
	HX_("REFERENCE_DISTANCE",89,d5,ce,9a),
	HX_("ROLLOFF_FACTOR",bc,10,98,56),
	HX_("CONE_OUTER_GAIN",3f,da,8d,e3),
	HX_("MAX_DISTANCE",90,83,bb,a5),
	HX_("SEC_OFFSET",e1,5d,a3,ac),
	HX_("SAMPLE_OFFSET",48,82,ac,b4),
	HX_("BYTE_OFFSET",2a,df,43,36),
	HX_("SOURCE_TYPE",de,ff,00,df),
	HX_("STATIC",ae,88,7e,b8),
	HX_("STREAMING",42,38,7b,b1),
	HX_("UNDETERMINED",0a,ed,9d,50),
	HX_("FORMAT_MONO8",6d,40,81,7a),
	HX_("FORMAT_MONO16",10,19,97,b6),
	HX_("FORMAT_STEREO8",b8,19,58,da),
	HX_("FORMAT_STEREO16",65,61,be,32),
	HX_("FREQUENCY",7c,f2,42,b7),
	HX_("BITS",06,c3,d7,2b),
	HX_("CHANNELS",50,3a,74,c4),
	HX_("SIZE",c1,68,14,37),
	HX_("UNUSED",16,45,05,1e),
	HX_("PENDING",37,6c,c0,ab),
	HX_("PROCESSED",6e,24,64,ce),
	HX_("NO_ERROR",ea,b5,7d,2f),
	HX_("INVALID_NAME",f3,7b,59,19),
	HX_("INVALID_ENUM",a9,74,70,13),
	HX_("INVALID_VALUE",a9,e8,26,b0),
	HX_("INVALID_OPERATION",5f,b1,c8,29),
	HX_("OUT_OF_MEMORY",18,f2,97,e1),
	HX_("VENDOR",88,91,19,51),
	HX_("VERSION",f8,ba,c5,fc),
	HX_("RENDERER",43,55,61,0c),
	HX_("EXTENSIONS",14,f0,79,7b),
	HX_("DOPPLER_FACTOR",e0,6d,21,56),
	HX_("DOPPLER_VELOCITY",6e,e1,7d,1d),
	HX_("SPEED_OF_SOUND",5f,3f,54,ba),
	HX_("DISTANCE_MODEL",bf,9b,1a,00),
	HX_("INVERSE_DISTANCE",04,89,17,1d),
	HX_("INVERSE_DISTANCE_CLAMPED",7f,1a,32,28),
	HX_("LINEAR_DISTANCE",0f,b8,c7,14),
	HX_("LINEAR_DISTANCE_CLAMPED",8a,cc,88,b2),
	HX_("EXPONENT_DISTANCE",45,4a,ec,c8),
	HX_("EXPONENT_DISTANCE_CLAMPED",c0,84,7b,57),
	::String(null())
};

void Emulator_obj::__register()
{
	Emulator_obj _hx_dummy;
	Emulator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.openal.Emulator",6f,ec,01,c0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Emulator_obj::__GetStatic;
	__mClass->mSetStaticField = &Emulator_obj::__SetStatic;
	__mClass->mMarkFunc = Emulator_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Emulator_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Emulator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Emulator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Emulator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Emulator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Emulator_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_621_boot)
HXDLIN( 621)		FORMAT_MONOF32 = 4368;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_622_boot)
HXDLIN( 622)		FORMAT_STEREOF32 = 4369;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_628_boot)
HXDLIN( 628)		NONE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_629_boot)
HXDLIN( 629)		FALSE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_630_boot)
HXDLIN( 630)		TRUE = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_632_boot)
HXDLIN( 632)		SOURCE_RELATIVE = 514;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_633_boot)
HXDLIN( 633)		CONE_INNER_ANGLE = 4097;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_634_boot)
HXDLIN( 634)		CONE_OUTER_ANGLE = 4098;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_635_boot)
HXDLIN( 635)		PITCH = 4099;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_637_boot)
HXDLIN( 637)		POSITION = 4100;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_638_boot)
HXDLIN( 638)		DIRECTION = 4101;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_640_boot)
HXDLIN( 640)		VELOCITY = 4102;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_641_boot)
HXDLIN( 641)		LOOPING = 4103;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_642_boot)
HXDLIN( 642)		BUFFER = 4105;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_644_boot)
HXDLIN( 644)		GAIN = 4106;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_645_boot)
HXDLIN( 645)		MIN_GAIN = 4109;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_646_boot)
HXDLIN( 646)		MAX_GAIN = 4110;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_647_boot)
HXDLIN( 647)		ORIENTATION = 4111;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_648_boot)
HXDLIN( 648)		SOURCE_STATE = 4112;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_651_boot)
HXDLIN( 651)		INITIAL = 4113;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_652_boot)
HXDLIN( 652)		PLAYING = 4114;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_653_boot)
HXDLIN( 653)		PAUSED = 4115;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_654_boot)
HXDLIN( 654)		STOPPED = 4116;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_656_boot)
HXDLIN( 656)		BUFFERS_QUEUED = 4117;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_657_boot)
HXDLIN( 657)		BUFFERS_PROCESSED = 4118;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_659_boot)
HXDLIN( 659)		REFERENCE_DISTANCE = 4128;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_660_boot)
HXDLIN( 660)		ROLLOFF_FACTOR = 4129;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_661_boot)
HXDLIN( 661)		CONE_OUTER_GAIN = 4130;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_662_boot)
HXDLIN( 662)		MAX_DISTANCE = 4131;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_664_boot)
HXDLIN( 664)		SEC_OFFSET = 4132;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_665_boot)
HXDLIN( 665)		SAMPLE_OFFSET = 4133;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_666_boot)
HXDLIN( 666)		BYTE_OFFSET = 4134;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_667_boot)
HXDLIN( 667)		SOURCE_TYPE = 4135;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_670_boot)
HXDLIN( 670)		STATIC = 4136;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_671_boot)
HXDLIN( 671)		STREAMING = 4137;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_672_boot)
HXDLIN( 672)		UNDETERMINED = 4144;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_675_boot)
HXDLIN( 675)		FORMAT_MONO8 = 4352;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_676_boot)
HXDLIN( 676)		FORMAT_MONO16 = 4353;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_677_boot)
HXDLIN( 677)		FORMAT_STEREO8 = 4354;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_678_boot)
HXDLIN( 678)		FORMAT_STEREO16 = 4355;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_681_boot)
HXDLIN( 681)		FREQUENCY = 8193;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_682_boot)
HXDLIN( 682)		BITS = 8194;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_683_boot)
HXDLIN( 683)		CHANNELS = 8195;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_684_boot)
HXDLIN( 684)		SIZE = 8196;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_687_boot)
HXDLIN( 687)		UNUSED = 8208;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_688_boot)
HXDLIN( 688)		PENDING = 8209;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_689_boot)
HXDLIN( 689)		PROCESSED = 8210;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_692_boot)
HXDLIN( 692)		NO_ERROR = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_693_boot)
HXDLIN( 693)		INVALID_NAME = 40961;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_694_boot)
HXDLIN( 694)		INVALID_ENUM = 40962;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_695_boot)
HXDLIN( 695)		INVALID_VALUE = 40963;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_696_boot)
HXDLIN( 696)		INVALID_OPERATION = 40964;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_697_boot)
HXDLIN( 697)		OUT_OF_MEMORY = 40965;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_700_boot)
HXDLIN( 700)		VENDOR = 45057;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_701_boot)
HXDLIN( 701)		VERSION = 45058;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_702_boot)
HXDLIN( 702)		RENDERER = 45059;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_703_boot)
HXDLIN( 703)		EXTENSIONS = 45060;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_706_boot)
HXDLIN( 706)		DOPPLER_FACTOR = 49152;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_707_boot)
HXDLIN( 707)		DOPPLER_VELOCITY = 49153;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_708_boot)
HXDLIN( 708)		SPEED_OF_SOUND = 49155;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_709_boot)
HXDLIN( 709)		DISTANCE_MODEL = 53248;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_712_boot)
HXDLIN( 712)		INVERSE_DISTANCE = 53249;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_713_boot)
HXDLIN( 713)		INVERSE_DISTANCE_CLAMPED = 53250;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_714_boot)
HXDLIN( 714)		LINEAR_DISTANCE = 53251;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_715_boot)
HXDLIN( 715)		LINEAR_DISTANCE_CLAMPED = 53252;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_716_boot)
HXDLIN( 716)		EXPONENT_DISTANCE = 53253;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dc58d903c7921980_717_boot)
HXDLIN( 717)		EXPONENT_DISTANCE_CLAMPED = 53254;
            	}
}

} // end namespace hxd
} // end namespace snd
} // end namespace openal
