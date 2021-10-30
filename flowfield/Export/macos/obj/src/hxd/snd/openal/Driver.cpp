#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
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
#ifndef INCLUDED_hxd_snd_openal_ALC
#include <hxd/snd/openal/ALC.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_Buffer
#include <hxd/snd/openal/Buffer.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_BufferHandle
#include <hxd/snd/openal/BufferHandle.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_Context
#include <hxd/snd/openal/Context.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_Device
#include <hxd/snd/openal/Device.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_Driver
#include <hxd/snd/openal/Driver.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_Emulator
#include <hxd/snd/openal/Emulator.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_Source
#include <hxd/snd/openal/Source.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_SourceHandle
#include <hxd/snd/openal/SourceHandle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_89caa1e4aadc887c_21_new,"hxd.snd.openal.Driver","new",0xcd35bef4,"hxd.snd.openal.Driver.new","hxd/snd/openal/Driver.hx",21,0x5a480b5d)
HX_LOCAL_STACK_FRAME(_hx_pos_89caa1e4aadc887c_40_hasFeature,"hxd.snd.openal.Driver","hasFeature",0x9db2a668,"hxd.snd.openal.Driver.hasFeature","hxd/snd/openal/Driver.hx",40,0x5a480b5d)
HX_LOCAL_STACK_FRAME(_hx_pos_89caa1e4aadc887c_45_getTmpBytes,"hxd.snd.openal.Driver","getTmpBytes",0x57418d5e,"hxd.snd.openal.Driver.getTmpBytes","hxd/snd/openal/Driver.hx",45,0x5a480b5d)
HX_LOCAL_STACK_FRAME(_hx_pos_89caa1e4aadc887c_51_setMasterVolume,"hxd.snd.openal.Driver","setMasterVolume",0xf40a9372,"hxd.snd.openal.Driver.setMasterVolume","hxd/snd/openal/Driver.hx",51,0x5a480b5d)
HX_LOCAL_STACK_FRAME(_hx_pos_89caa1e4aadc887c_54_setListenerParams,"hxd.snd.openal.Driver","setListenerParams",0x3dfb8fb0,"hxd.snd.openal.Driver.setListenerParams","hxd/snd/openal/Driver.hx",54,0x5a480b5d)
HX_LOCAL_STACK_FRAME(_hx_pos_89caa1e4aadc887c_73_createSource,"hxd.snd.openal.Driver","createSource",0xca048fe3,"hxd.snd.openal.Driver.createSource","hxd/snd/openal/Driver.hx",73,0x5a480b5d)
HX_LOCAL_STACK_FRAME(_hx_pos_89caa1e4aadc887c_85_destroySource,"hxd.snd.openal.Driver","destroySource",0x5898b909,"hxd.snd.openal.Driver.destroySource","hxd/snd/openal/Driver.hx",85,0x5a480b5d)
HX_LOCAL_STACK_FRAME(_hx_pos_89caa1e4aadc887c_93_playSource,"hxd.snd.openal.Driver","playSource",0xd1770ddb,"hxd.snd.openal.Driver.playSource","hxd/snd/openal/Driver.hx",93,0x5a480b5d)
HX_LOCAL_STACK_FRAME(_hx_pos_89caa1e4aadc887c_99_stopSource,"hxd.snd.openal.Driver","stopSource",0x5462ce69,"hxd.snd.openal.Driver.stopSource","hxd/snd/openal/Driver.hx",99,0x5a480b5d)
HX_LOCAL_STACK_FRAME(_hx_pos_89caa1e4aadc887c_105_setSourceVolume,"hxd.snd.openal.Driver","setSourceVolume",0xd667346b,"hxd.snd.openal.Driver.setSourceVolume","hxd/snd/openal/Driver.hx",105,0x5a480b5d)
HX_LOCAL_STACK_FRAME(_hx_pos_89caa1e4aadc887c_108_createBuffer,"hxd.snd.openal.Driver","createBuffer",0x68679c08,"hxd.snd.openal.Driver.createBuffer","hxd/snd/openal/Driver.hx",108,0x5a480b5d)
HX_LOCAL_STACK_FRAME(_hx_pos_89caa1e4aadc887c_116_destroyBuffer,"hxd.snd.openal.Driver","destroyBuffer",0xf6fbc52e,"hxd.snd.openal.Driver.destroyBuffer","hxd/snd/openal/Driver.hx",116,0x5a480b5d)
HX_LOCAL_STACK_FRAME(_hx_pos_89caa1e4aadc887c_122_setBufferData,"hxd.snd.openal.Driver","setBufferData",0x8d596d20,"hxd.snd.openal.Driver.setBufferData","hxd/snd/openal/Driver.hx",122,0x5a480b5d)
HX_LOCAL_STACK_FRAME(_hx_pos_89caa1e4aadc887c_135_getPlayedSampleCount,"hxd.snd.openal.Driver","getPlayedSampleCount",0x9b213528,"hxd.snd.openal.Driver.getPlayedSampleCount","hxd/snd/openal/Driver.hx",135,0x5a480b5d)
HX_LOCAL_STACK_FRAME(_hx_pos_89caa1e4aadc887c_143_getProcessedBuffers,"hxd.snd.openal.Driver","getProcessedBuffers",0xa0a9a3cf,"hxd.snd.openal.Driver.getProcessedBuffers","hxd/snd/openal/Driver.hx",143,0x5a480b5d)
HX_LOCAL_STACK_FRAME(_hx_pos_89caa1e4aadc887c_146_queueBuffer,"hxd.snd.openal.Driver","queueBuffer",0x07b46405,"hxd.snd.openal.Driver.queueBuffer","hxd/snd/openal/Driver.hx",146,0x5a480b5d)
HX_LOCAL_STACK_FRAME(_hx_pos_89caa1e4aadc887c_167_unqueueBuffer,"hxd.snd.openal.Driver","unqueueBuffer",0x084ba74c,"hxd.snd.openal.Driver.unqueueBuffer","hxd/snd/openal/Driver.hx",167,0x5a480b5d)
HX_LOCAL_STACK_FRAME(_hx_pos_89caa1e4aadc887c_180_update,"hxd.snd.openal.Driver","update",0xef5febf5,"hxd.snd.openal.Driver.update","hxd/snd/openal/Driver.hx",180,0x5a480b5d)
HX_LOCAL_STACK_FRAME(_hx_pos_89caa1e4aadc887c_183_dispose,"hxd.snd.openal.Driver","dispose",0xa20b4933,"hxd.snd.openal.Driver.dispose","hxd/snd/openal/Driver.hx",183,0x5a480b5d)
HX_LOCAL_STACK_FRAME(_hx_pos_89caa1e4aadc887c_190_getEffectDriver,"hxd.snd.openal.Driver","getEffectDriver",0xb540e3e3,"hxd.snd.openal.Driver.getEffectDriver","hxd/snd/openal/Driver.hx",190,0x5a480b5d)
namespace hxd{
namespace snd{
namespace openal{

void Driver_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_89caa1e4aadc887c_21_new)
HXLINE(  22)		this->tmpBytes = ::haxe::io::Bytes_obj::alloc(24);
HXLINE(  23)		this->device = ::hxd::snd::openal::ALC_obj::openDevice(null());
HXLINE(  24)		this->context = ::hxd::snd::openal::ALC_obj::createContext(this->device,null());
HXLINE(  26)		::hxd::snd::openal::ALC_obj::makeContextCurrent(this->context);
HXLINE(  27)		::hxd::snd::openal::ALC_obj::loadExtensions(this->device);
HXLINE(  28)		::hxd::snd::openal::Emulator_obj::loadExtensions();
HXLINE(  31)		 ::haxe::io::Bytes bytes = this->getTmpBytes(4);
HXLINE(  32)		::hxd::snd::openal::ALC_obj::getIntegerv(this->device,131075,1,bytes);
HXLINE(  33)		this->maxAuxiliarySends = (((( (int)(bytes->b->__get(0)) ) | (( (int)(bytes->b->__get(1)) ) << 8)) | (( (int)(bytes->b->__get(2)) ) << 16)) | (( (int)(bytes->b->__get(3)) ) << 24));
HXLINE(  35)		if ((::hxd::snd::openal::Emulator_obj::getError() != 0)) {
HXLINE(  36)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("could not init openAL Driver",ef,08,3d,d8)));
            		}
            	}

Dynamic Driver_obj::__CreateEmpty() { return new Driver_obj; }

void *Driver_obj::_hx_vtable = 0;

Dynamic Driver_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Driver_obj > _hx_result = new Driver_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Driver_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x29324792;
}

static ::hxd::snd::Driver_obj _hx_hxd_snd_openal_Driver__hx_hxd_snd_Driver= {
	( bool (::hx::Object::*)( ::hxd::snd::DriverFeature))&::hxd::snd::openal::Driver_obj::hasFeature,
	( void (::hx::Object::*)(Float))&::hxd::snd::openal::Driver_obj::setMasterVolume,
	( void (::hx::Object::*)( ::h3d::Vector, ::h3d::Vector, ::h3d::Vector, ::h3d::Vector))&::hxd::snd::openal::Driver_obj::setListenerParams,
	(  ::hxd::snd::openal::SourceHandle (::hx::Object::*)())&::hxd::snd::openal::Driver_obj::createSource,
	( void (::hx::Object::*)( ::hxd::snd::openal::SourceHandle))&::hxd::snd::openal::Driver_obj::playSource,
	( void (::hx::Object::*)( ::hxd::snd::openal::SourceHandle))&::hxd::snd::openal::Driver_obj::stopSource,
	( void (::hx::Object::*)( ::hxd::snd::openal::SourceHandle,Float))&::hxd::snd::openal::Driver_obj::setSourceVolume,
	( void (::hx::Object::*)( ::hxd::snd::openal::SourceHandle))&::hxd::snd::openal::Driver_obj::destroySource,
	(  ::hxd::snd::openal::BufferHandle (::hx::Object::*)())&::hxd::snd::openal::Driver_obj::createBuffer,
	( void (::hx::Object::*)( ::hxd::snd::openal::BufferHandle, ::haxe::io::Bytes,int, ::hxd::snd::SampleFormat,int,int))&::hxd::snd::openal::Driver_obj::setBufferData,
	( void (::hx::Object::*)( ::hxd::snd::openal::BufferHandle))&::hxd::snd::openal::Driver_obj::destroyBuffer,
	( void (::hx::Object::*)( ::hxd::snd::openal::SourceHandle, ::hxd::snd::openal::BufferHandle,int,bool))&::hxd::snd::openal::Driver_obj::queueBuffer,
	( void (::hx::Object::*)( ::hxd::snd::openal::SourceHandle, ::hxd::snd::openal::BufferHandle))&::hxd::snd::openal::Driver_obj::unqueueBuffer,
	( int (::hx::Object::*)( ::hxd::snd::openal::SourceHandle))&::hxd::snd::openal::Driver_obj::getProcessedBuffers,
	( int (::hx::Object::*)( ::hxd::snd::openal::SourceHandle))&::hxd::snd::openal::Driver_obj::getPlayedSampleCount,
	( void (::hx::Object::*)())&::hxd::snd::openal::Driver_obj::update,
	( void (::hx::Object::*)())&::hxd::snd::openal::Driver_obj::dispose,
	(  ::hxd::snd::EffectDriver (::hx::Object::*)(::String))&::hxd::snd::openal::Driver_obj::getEffectDriver,
};

void *Driver_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xe568d8dd: return &_hx_hxd_snd_openal_Driver__hx_hxd_snd_Driver;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool Driver_obj::hasFeature( ::hxd::snd::DriverFeature f){
            	HX_STACKFRAME(&_hx_pos_89caa1e4aadc887c_40_hasFeature)
HXDLIN(  40)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,hasFeature,return )

 ::haxe::io::Bytes Driver_obj::getTmpBytes(int size){
            	HX_STACKFRAME(&_hx_pos_89caa1e4aadc887c_45_getTmpBytes)
HXLINE(  46)		if ((this->tmpBytes->length < size)) {
HXLINE(  46)			this->tmpBytes = ::haxe::io::Bytes_obj::alloc(size);
            		}
HXLINE(  47)		return this->tmpBytes;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,getTmpBytes,return )

void Driver_obj::setMasterVolume(Float value){
            	HX_STACKFRAME(&_hx_pos_89caa1e4aadc887c_51_setMasterVolume)
HXDLIN(  51)		::hxd::snd::openal::Emulator_obj::listenerf(4106,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,setMasterVolume,(void))

void Driver_obj::setListenerParams( ::h3d::Vector position, ::h3d::Vector direction, ::h3d::Vector up, ::h3d::Vector velocity){
            	HX_STACKFRAME(&_hx_pos_89caa1e4aadc887c_54_setListenerParams)
HXLINE(  55)		::hxd::snd::openal::Emulator_obj::listener3f(4100,-(position->x),position->y,position->z);
HXLINE(  57)		 ::haxe::io::Bytes bytes = this->getTmpBytes(24);
HXLINE(  58)		bytes->setFloat(0,-(direction->x));
HXLINE(  59)		bytes->setFloat(4,direction->y);
HXLINE(  60)		bytes->setFloat(8,direction->z);
HXLINE(  62)		{
HXLINE(  62)			Float k = (((up->x * up->x) + (up->y * up->y)) + (up->z * up->z));
HXDLIN(  62)			if ((k < ((Float)1e-10))) {
HXLINE(  62)				k = ( (Float)(0) );
            			}
            			else {
HXLINE(  62)				k = (((Float)1.) / ::Math_obj::sqrt(k));
            			}
HXDLIN(  62)			 ::h3d::Vector up1 = up;
HXDLIN(  62)			up1->x = (up1->x * k);
HXDLIN(  62)			 ::h3d::Vector up2 = up;
HXDLIN(  62)			up2->y = (up2->y * k);
HXDLIN(  62)			 ::h3d::Vector up3 = up;
HXDLIN(  62)			up3->z = (up3->z * k);
            		}
HXLINE(  63)		bytes->setFloat(12,-(up->x));
HXLINE(  64)		bytes->setFloat(16,up->y);
HXLINE(  65)		bytes->setFloat(20,up->z);
HXLINE(  67)		::hxd::snd::openal::Emulator_obj::listenerfv(4111,this->tmpBytes);
HXLINE(  69)		if (::hx::IsNotNull( velocity )) {
HXLINE(  70)			::hxd::snd::openal::Emulator_obj::listener3f(4102,-(velocity->x),velocity->y,velocity->z);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Driver_obj,setListenerParams,(void))

 ::hxd::snd::openal::SourceHandle Driver_obj::createSource(){
            	HX_GC_STACKFRAME(&_hx_pos_89caa1e4aadc887c_73_createSource)
HXLINE(  74)		 ::hxd::snd::openal::SourceHandle source =  ::hxd::snd::openal::SourceHandle_obj::__alloc( HX_CTX );
HXLINE(  75)		 ::haxe::io::Bytes bytes = this->getTmpBytes(4);
HXLINE(  77)		::hxd::snd::openal::Emulator_obj::genSources(1,bytes);
HXLINE(  78)		if ((::hxd::snd::openal::Emulator_obj::getError() != 0)) {
HXLINE(  78)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("could not create source",d3,0c,22,57)));
            		}
HXLINE(  79)		source->inst = ( ( ::hxd::snd::openal::Source)(::hxd::snd::openal::Source_obj::all->get((((( (int)(bytes->b->__get(0)) ) | (( (int)(bytes->b->__get(1)) ) << 8)) | (( (int)(bytes->b->__get(2)) ) << 16)) | (( (int)(bytes->b->__get(3)) ) << 24)))) );
HXLINE(  80)		::hxd::snd::openal::Emulator_obj::sourcei(source->inst,514,1);
HXLINE(  82)		return source;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Driver_obj,createSource,return )

void Driver_obj::destroySource( ::hxd::snd::openal::SourceHandle source){
            	HX_STACKFRAME(&_hx_pos_89caa1e4aadc887c_85_destroySource)
HXLINE(  86)		::hxd::snd::openal::Emulator_obj::sourcei(source->inst,131077,0);
HXLINE(  88)		 ::haxe::io::Bytes bytes = this->getTmpBytes(4);
HXLINE(  89)		{
HXLINE(  89)			int v = source->inst->id;
HXDLIN(  89)			bytes->b[0] = ( (unsigned char)((v & 255)) );
HXDLIN(  89)			bytes->b[1] = ( (unsigned char)(((v >> 8) & 255)) );
HXDLIN(  89)			bytes->b[2] = ( (unsigned char)(((v >> 16) & 255)) );
HXDLIN(  89)			bytes->b[3] = ( (unsigned char)((::hx::UShr(v,24) & 255)) );
            		}
HXLINE(  90)		::hxd::snd::openal::Emulator_obj::deleteSources(1,bytes);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,destroySource,(void))

void Driver_obj::playSource( ::hxd::snd::openal::SourceHandle source){
            	HX_STACKFRAME(&_hx_pos_89caa1e4aadc887c_93_playSource)
HXLINE(  94)		::hxd::snd::openal::Emulator_obj::sourcePlay(source->inst);
HXLINE(  95)		source->sampleOffset = 0;
HXLINE(  96)		source->playing = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,playSource,(void))

void Driver_obj::stopSource( ::hxd::snd::openal::SourceHandle source){
            	HX_STACKFRAME(&_hx_pos_89caa1e4aadc887c_99_stopSource)
HXLINE( 100)		::hxd::snd::openal::Emulator_obj::sourceStop(source->inst);
HXLINE( 101)		source->playing = false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,stopSource,(void))

void Driver_obj::setSourceVolume( ::hxd::snd::openal::SourceHandle source,Float value){
            	HX_STACKFRAME(&_hx_pos_89caa1e4aadc887c_105_setSourceVolume)
HXDLIN( 105)		::hxd::snd::openal::Emulator_obj::sourcef(source->inst,4106,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Driver_obj,setSourceVolume,(void))

 ::hxd::snd::openal::BufferHandle Driver_obj::createBuffer(){
            	HX_GC_STACKFRAME(&_hx_pos_89caa1e4aadc887c_108_createBuffer)
HXLINE( 109)		 ::hxd::snd::openal::BufferHandle buffer =  ::hxd::snd::openal::BufferHandle_obj::__alloc( HX_CTX );
HXLINE( 110)		 ::haxe::io::Bytes bytes = this->getTmpBytes(4);
HXLINE( 111)		::hxd::snd::openal::Emulator_obj::genBuffers(1,bytes);
HXLINE( 112)		buffer->inst = ( ( ::hxd::snd::openal::Buffer)(::hxd::snd::openal::Buffer_obj::all->get((((( (int)(bytes->b->__get(0)) ) | (( (int)(bytes->b->__get(1)) ) << 8)) | (( (int)(bytes->b->__get(2)) ) << 16)) | (( (int)(bytes->b->__get(3)) ) << 24)))) );
HXLINE( 113)		return buffer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Driver_obj,createBuffer,return )

void Driver_obj::destroyBuffer( ::hxd::snd::openal::BufferHandle buffer){
            	HX_STACKFRAME(&_hx_pos_89caa1e4aadc887c_116_destroyBuffer)
HXLINE( 117)		 ::haxe::io::Bytes bytes = this->getTmpBytes(4);
HXLINE( 118)		{
HXLINE( 118)			int v = buffer->inst->id;
HXDLIN( 118)			bytes->b[0] = ( (unsigned char)((v & 255)) );
HXDLIN( 118)			bytes->b[1] = ( (unsigned char)(((v >> 8) & 255)) );
HXDLIN( 118)			bytes->b[2] = ( (unsigned char)(((v >> 16) & 255)) );
HXDLIN( 118)			bytes->b[3] = ( (unsigned char)((::hx::UShr(v,24) & 255)) );
            		}
HXLINE( 119)		::hxd::snd::openal::Emulator_obj::deleteBuffers(1,bytes);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,destroyBuffer,(void))

void Driver_obj::setBufferData( ::hxd::snd::openal::BufferHandle buffer, ::haxe::io::Bytes data,int size, ::hxd::snd::SampleFormat format,int channelCount,int samplingRate){
            	HX_STACKFRAME(&_hx_pos_89caa1e4aadc887c_122_setBufferData)
HXLINE( 123)		int alFormat;
HXDLIN( 123)		switch((int)(format->_hx_getIndex())){
            			case (int)0: {
HXLINE( 124)				if ((channelCount == 1)) {
HXLINE( 123)					alFormat = 4352;
            				}
            				else {
HXLINE( 123)					alFormat = 4354;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 125)				if ((channelCount == 1)) {
HXLINE( 123)					alFormat = 4353;
            				}
            				else {
HXLINE( 123)					alFormat = 4355;
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 129)				if ((channelCount == 1)) {
HXLINE( 123)					alFormat = 4353;
            				}
            				else {
HXLINE( 123)					alFormat = 4355;
            				}
            			}
            			break;
            		}
HXLINE( 132)		::hxd::snd::openal::Emulator_obj::bufferData(buffer->inst,alFormat,data,size,samplingRate);
            	}


HX_DEFINE_DYNAMIC_FUNC6(Driver_obj,setBufferData,(void))

int Driver_obj::getPlayedSampleCount( ::hxd::snd::openal::SourceHandle source){
            	HX_STACKFRAME(&_hx_pos_89caa1e4aadc887c_135_getPlayedSampleCount)
HXLINE( 136)		int source1 = source->sampleOffset;
HXDLIN( 136)		int v = (source1 + ::hxd::snd::openal::Emulator_obj::getSourcei(source->inst,4133));
HXLINE( 137)		if ((v < 0)) {
HXLINE( 138)			v = 0;
            		}
HXLINE( 139)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,getPlayedSampleCount,return )

int Driver_obj::getProcessedBuffers( ::hxd::snd::openal::SourceHandle source){
            	HX_STACKFRAME(&_hx_pos_89caa1e4aadc887c_143_getProcessedBuffers)
HXDLIN( 143)		return ::hxd::snd::openal::Emulator_obj::getSourcei(source->inst,4118);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,getProcessedBuffers,return )

void Driver_obj::queueBuffer( ::hxd::snd::openal::SourceHandle source, ::hxd::snd::openal::BufferHandle buffer,int sampleStart,bool endOfStream){
            	HX_STACKFRAME(&_hx_pos_89caa1e4aadc887c_146_queueBuffer)
HXLINE( 147)		 ::haxe::io::Bytes bytes = this->getTmpBytes(4);
HXLINE( 148)		{
HXLINE( 148)			int v = buffer->inst->id;
HXDLIN( 148)			bytes->b[0] = ( (unsigned char)((v & 255)) );
HXDLIN( 148)			bytes->b[1] = ( (unsigned char)(((v >> 8) & 255)) );
HXDLIN( 148)			bytes->b[2] = ( (unsigned char)(((v >> 16) & 255)) );
HXDLIN( 148)			bytes->b[3] = ( (unsigned char)((::hx::UShr(v,24) & 255)) );
            		}
HXLINE( 149)		::hxd::snd::openal::Emulator_obj::sourceQueueBuffers(source->inst,1,bytes);
HXLINE( 151)		int err = ::hxd::snd::openal::Emulator_obj::getError();
HXLINE( 152)		if ((err != 0)) {
HXLINE( 153)			::String _hx_tmp = ((HX_("Failed to queue buffers: ",48,dd,db,3d) + ::StringTools_obj::hex(err,null())) + HX_(" (",08,1c,00,00));
HXDLIN( 153)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((_hx_tmp + buffer->inst->id) + HX_(")",29,00,00,00))));
            		}
HXLINE( 155)		if ((::hxd::snd::openal::Emulator_obj::getSourcei(source->inst,4112) == 4116)) {
HXLINE( 156)			if ((sampleStart > 0)) {
HXLINE( 157)				::hxd::snd::openal::Emulator_obj::sourcei(source->inst,4133,sampleStart);
            			}
            			else {
HXLINE( 159)				::hxd::snd::openal::Emulator_obj::sourcei(source->inst,4133,0);
            			}
HXLINE( 161)			if (source->playing) {
HXLINE( 162)				::hxd::snd::openal::Emulator_obj::sourcePlay(source->inst);
            			}
            		}
HXLINE( 164)		buffer->isEnd = endOfStream;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Driver_obj,queueBuffer,(void))

void Driver_obj::unqueueBuffer( ::hxd::snd::openal::SourceHandle source, ::hxd::snd::openal::BufferHandle buffer){
            	HX_STACKFRAME(&_hx_pos_89caa1e4aadc887c_167_unqueueBuffer)
HXLINE( 168)		 ::haxe::io::Bytes bytes = this->getTmpBytes(4);
HXLINE( 169)		{
HXLINE( 169)			int v = buffer->inst->id;
HXDLIN( 169)			bytes->b[0] = ( (unsigned char)((v & 255)) );
HXDLIN( 169)			bytes->b[1] = ( (unsigned char)(((v >> 8) & 255)) );
HXDLIN( 169)			bytes->b[2] = ( (unsigned char)(((v >> 16) & 255)) );
HXDLIN( 169)			bytes->b[3] = ( (unsigned char)((::hx::UShr(v,24) & 255)) );
            		}
HXLINE( 170)		::hxd::snd::openal::Emulator_obj::sourceUnqueueBuffers(source->inst,1,bytes);
HXLINE( 172)		int size = ::hxd::snd::openal::Emulator_obj::getBufferi(buffer->inst,8196);
HXLINE( 173)		int bps = ::hxd::snd::openal::Emulator_obj::getBufferi(buffer->inst,8194);
HXDLIN( 173)		Float bps1 = (( (Float)((bps * ::hxd::snd::openal::Emulator_obj::getBufferi(buffer->inst,8195))) ) / ( (Float)(8) ));
HXLINE( 174)		int samples = ::Std_obj::_hx_int((( (Float)(size) ) / bps1));
HXLINE( 176)		if (buffer->isEnd) {
HXLINE( 176)			source->sampleOffset = 0;
            		}
            		else {
HXLINE( 177)			 ::hxd::snd::openal::SourceHandle source1 = source;
HXDLIN( 177)			source1->sampleOffset = (source1->sampleOffset + samples);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Driver_obj,unqueueBuffer,(void))

void Driver_obj::update(){
            	HX_STACKFRAME(&_hx_pos_89caa1e4aadc887c_180_update)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Driver_obj,update,(void))

void Driver_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_89caa1e4aadc887c_183_dispose)
HXLINE( 184)		::hxd::snd::openal::ALC_obj::makeContextCurrent(null());
HXLINE( 185)		::hxd::snd::openal::ALC_obj::destroyContext(this->context);
HXLINE( 186)		::hxd::snd::openal::ALC_obj::closeDevice(this->device);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Driver_obj,dispose,(void))

 ::hxd::snd::EffectDriver Driver_obj::getEffectDriver(::String type){
            	HX_GC_STACKFRAME(&_hx_pos_89caa1e4aadc887c_190_getEffectDriver)
HXDLIN( 190)		return  ::hxd::snd::EffectDriver_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,getEffectDriver,return )


::hx::ObjectPtr< Driver_obj > Driver_obj::__new() {
	::hx::ObjectPtr< Driver_obj > __this = new Driver_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Driver_obj > Driver_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Driver_obj *__this = (Driver_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Driver_obj), true, "hxd.snd.openal.Driver"));
	*(void **)__this = Driver_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Driver_obj::Driver_obj()
{
}

void Driver_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Driver);
	HX_MARK_MEMBER_NAME(device,"device");
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(maxAuxiliarySends,"maxAuxiliarySends");
	HX_MARK_MEMBER_NAME(tmpBytes,"tmpBytes");
	HX_MARK_END_CLASS();
}

void Driver_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(device,"device");
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(maxAuxiliarySends,"maxAuxiliarySends");
	HX_VISIT_MEMBER_NAME(tmpBytes,"tmpBytes");
}

::hx::Val Driver_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { return ::hx::Val( device ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return ::hx::Val( context ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tmpBytes") ) { return ::hx::Val( tmpBytes ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hasFeature") ) { return ::hx::Val( hasFeature_dyn() ); }
		if (HX_FIELD_EQ(inName,"playSource") ) { return ::hx::Val( playSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"stopSource") ) { return ::hx::Val( stopSource_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getTmpBytes") ) { return ::hx::Val( getTmpBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"queueBuffer") ) { return ::hx::Val( queueBuffer_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createSource") ) { return ::hx::Val( createSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return ::hx::Val( createBuffer_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"destroySource") ) { return ::hx::Val( destroySource_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroyBuffer") ) { return ::hx::Val( destroyBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"setBufferData") ) { return ::hx::Val( setBufferData_dyn() ); }
		if (HX_FIELD_EQ(inName,"unqueueBuffer") ) { return ::hx::Val( unqueueBuffer_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setMasterVolume") ) { return ::hx::Val( setMasterVolume_dyn() ); }
		if (HX_FIELD_EQ(inName,"setSourceVolume") ) { return ::hx::Val( setSourceVolume_dyn() ); }
		if (HX_FIELD_EQ(inName,"getEffectDriver") ) { return ::hx::Val( getEffectDriver_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"maxAuxiliarySends") ) { return ::hx::Val( maxAuxiliarySends ); }
		if (HX_FIELD_EQ(inName,"setListenerParams") ) { return ::hx::Val( setListenerParams_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getProcessedBuffers") ) { return ::hx::Val( getProcessedBuffers_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getPlayedSampleCount") ) { return ::hx::Val( getPlayedSampleCount_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Driver_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { device=inValue.Cast<  ::hxd::snd::openal::Device >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast<  ::hxd::snd::openal::Context >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tmpBytes") ) { tmpBytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"maxAuxiliarySends") ) { maxAuxiliarySends=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Driver_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("device",96,dc,77,71));
	outFields->push(HX_("context",ef,95,77,19));
	outFields->push(HX_("maxAuxiliarySends",09,b7,95,50));
	outFields->push(HX_("tmpBytes",14,28,3d,b8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Driver_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::snd::openal::Device */ ,(int)offsetof(Driver_obj,device),HX_("device",96,dc,77,71)},
	{::hx::fsObject /*  ::hxd::snd::openal::Context */ ,(int)offsetof(Driver_obj,context),HX_("context",ef,95,77,19)},
	{::hx::fsInt,(int)offsetof(Driver_obj,maxAuxiliarySends),HX_("maxAuxiliarySends",09,b7,95,50)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(Driver_obj,tmpBytes),HX_("tmpBytes",14,28,3d,b8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Driver_obj_sStaticStorageInfo = 0;
#endif

static ::String Driver_obj_sMemberFields[] = {
	HX_("device",96,dc,77,71),
	HX_("context",ef,95,77,19),
	HX_("maxAuxiliarySends",09,b7,95,50),
	HX_("tmpBytes",14,28,3d,b8),
	HX_("hasFeature",7c,da,30,a5),
	HX_("getTmpBytes",ca,ea,30,de),
	HX_("setMasterVolume",de,16,b3,91),
	HX_("setListenerParams",1c,c6,5c,f9),
	HX_("createSource",f7,f0,86,54),
	HX_("destroySource",75,49,2b,00),
	HX_("playSource",ef,41,f5,d8),
	HX_("stopSource",7d,02,e1,5b),
	HX_("setSourceVolume",d7,b7,0f,74),
	HX_("createBuffer",1c,fd,e9,f2),
	HX_("destroyBuffer",9a,55,8e,9e),
	HX_("setBufferData",8c,fd,eb,34),
	HX_("getPlayedSampleCount",3c,ca,48,6b),
	HX_("getProcessedBuffers",3b,4d,96,df),
	HX_("queueBuffer",71,c1,a3,8e),
	HX_("unqueueBuffer",b8,37,de,af),
	HX_("update",09,86,05,87),
	HX_("dispose",9f,80,4c,bb),
	HX_("getEffectDriver",4f,67,e9,52),
	::String(null()) };

::hx::Class Driver_obj::__mClass;

void Driver_obj::__register()
{
	Driver_obj _hx_dummy;
	Driver_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.openal.Driver",02,75,ce,26);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Driver_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Driver_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Driver_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Driver_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace snd
} // end namespace openal
