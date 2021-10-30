#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_ALC
#include <hxd/snd/openal/ALC.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_Context
#include <hxd/snd/openal/Context.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_Device
#include <hxd/snd/openal/Device.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_741_getError,"hxd.snd.openal.ALC","getError",0xd0148dc2,"hxd.snd.openal.ALC.getError","hxd/snd/openal/Emulator.hx",741,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_746_createContext,"hxd.snd.openal.ALC","createContext",0x0df9e5e3,"hxd.snd.openal.ALC.createContext","hxd/snd/openal/Emulator.hx",746,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_749_makeContextCurrent,"hxd.snd.openal.ALC","makeContextCurrent",0xcf838b08,"hxd.snd.openal.ALC.makeContextCurrent","hxd/snd/openal/Emulator.hx",749,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_754_processContext,"hxd.snd.openal.ALC","processContext",0x771efdb0,"hxd.snd.openal.ALC.processContext","hxd/snd/openal/Emulator.hx",754,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_757_suspendContext,"hxd.snd.openal.ALC","suspendContext",0xaa05dc43,"hxd.snd.openal.ALC.suspendContext","hxd/snd/openal/Emulator.hx",757,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_760_destroyContext,"hxd.snd.openal.ALC","destroyContext",0x312caa85,"hxd.snd.openal.ALC.destroyContext","hxd/snd/openal/Emulator.hx",760,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_764_getCurrentContext,"hxd.snd.openal.ALC","getCurrentContext",0xc9fa397c,"hxd.snd.openal.ALC.getCurrentContext","hxd/snd/openal/Emulator.hx",764,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_768_getContextsDevice,"hxd.snd.openal.ALC","getContextsDevice",0xcd0c6e20,"hxd.snd.openal.ALC.getContextsDevice","hxd/snd/openal/Emulator.hx",768,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_773_openDevice,"hxd.snd.openal.ALC","openDevice",0xee4d7670,"hxd.snd.openal.ALC.openDevice","hxd/snd/openal/Emulator.hx",773,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_777_closeDevice,"hxd.snd.openal.ALC","closeDevice",0x4e9775fe,"hxd.snd.openal.ALC.closeDevice","hxd/snd/openal/Emulator.hx",777,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_781_loadExtensions,"hxd.snd.openal.ALC","loadExtensions",0xcb6aac4a,"hxd.snd.openal.ALC.loadExtensions","hxd/snd/openal/Emulator.hx",781,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_784_isExtensionPresent,"hxd.snd.openal.ALC","isExtensionPresent",0xeee017b6,"hxd.snd.openal.ALC.isExtensionPresent","hxd/snd/openal/Emulator.hx",784,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_787_getEnumValue,"hxd.snd.openal.ALC","getEnumValue",0x8a1347aa,"hxd.snd.openal.ALC.getEnumValue","hxd/snd/openal/Emulator.hx",787,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_793_getString,"hxd.snd.openal.ALC","getString",0x01af2197,"hxd.snd.openal.ALC.getString","hxd/snd/openal/Emulator.hx",793,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_796_getIntegerv,"hxd.snd.openal.ALC","getIntegerv",0x69ed7f3e,"hxd.snd.openal.ALC.getIntegerv","hxd/snd/openal/Emulator.hx",796,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_738_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",738,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_813_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",813,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_814_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",814,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_817_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",817,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_818_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",818,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_819_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",819,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_820_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",820,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_821_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",821,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_824_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",824,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_825_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",825,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_826_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",826,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_827_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",827,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_828_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",828,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_829_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",829,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_832_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",832,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_833_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",833,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_836_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",836,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_837_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",837,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_840_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",840,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_841_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",841,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_842_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",842,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_845_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",845,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_846_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",846,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_847_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",847,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_848_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",848,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_851_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",851,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_852_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",852,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_89c49f357482f728_853_boot,"hxd.snd.openal.ALC","boot",0xcee93ea2,"hxd.snd.openal.ALC.boot","hxd/snd/openal/Emulator.hx",853,0x857ad050)
namespace hxd{
namespace snd{
namespace openal{

void ALC_obj::__construct() { }

Dynamic ALC_obj::__CreateEmpty() { return new ALC_obj; }

void *ALC_obj::_hx_vtable = 0;

Dynamic ALC_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ALC_obj > _hx_result = new ALC_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ALC_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x085eaf6e;
}

 ::hxd::snd::openal::Context ALC_obj::ctx;

int ALC_obj::getError( ::hxd::snd::openal::Device device){
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_741_getError)
HXDLIN( 741)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,getError,return )

 ::hxd::snd::openal::Context ALC_obj::createContext( ::hxd::snd::openal::Device device, ::haxe::io::Bytes attrlist){
            	HX_GC_STACKFRAME(&_hx_pos_89c49f357482f728_746_createContext)
HXDLIN( 746)		return  ::hxd::snd::openal::Context_obj::__alloc( HX_CTX ,device);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ALC_obj,createContext,return )

bool ALC_obj::makeContextCurrent( ::hxd::snd::openal::Context context){
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_749_makeContextCurrent)
HXLINE( 750)		::hxd::snd::openal::ALC_obj::ctx = context;
HXLINE( 751)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,makeContextCurrent,return )

void ALC_obj::processContext( ::hxd::snd::openal::Context context){
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_754_processContext)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,processContext,(void))

void ALC_obj::suspendContext( ::hxd::snd::openal::Context context){
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_757_suspendContext)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,suspendContext,(void))

void ALC_obj::destroyContext( ::hxd::snd::openal::Context context){
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_760_destroyContext)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,destroyContext,(void))

 ::hxd::snd::openal::Context ALC_obj::getCurrentContext(){
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_764_getCurrentContext)
HXDLIN( 764)		return ::hxd::snd::openal::ALC_obj::ctx;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ALC_obj,getCurrentContext,return )

 ::hxd::snd::openal::Device ALC_obj::getContextsDevice( ::hxd::snd::openal::Context context){
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_768_getContextsDevice)
HXDLIN( 768)		return ::hxd::snd::openal::ALC_obj::ctx->device;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,getContextsDevice,return )

 ::hxd::snd::openal::Device ALC_obj::openDevice( ::haxe::io::Bytes devicename){
            	HX_GC_STACKFRAME(&_hx_pos_89c49f357482f728_773_openDevice)
HXDLIN( 773)		return  ::hxd::snd::openal::Device_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,openDevice,return )

bool ALC_obj::closeDevice( ::hxd::snd::openal::Device device){
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_777_closeDevice)
HXDLIN( 777)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,closeDevice,return )

void ALC_obj::loadExtensions( ::hxd::snd::openal::Device alDevice){
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_781_loadExtensions)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,loadExtensions,(void))

bool ALC_obj::isExtensionPresent( ::hxd::snd::openal::Device device, ::haxe::io::Bytes extname){
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_784_isExtensionPresent)
HXDLIN( 784)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ALC_obj,isExtensionPresent,return )

int ALC_obj::getEnumValue( ::hxd::snd::openal::Device device, ::haxe::io::Bytes enumname){
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_787_getEnumValue)
HXDLIN( 787)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
HXDLIN( 787)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ALC_obj,getEnumValue,return )

 ::haxe::io::Bytes ALC_obj::getString( ::hxd::snd::openal::Device device,int param){
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_793_getString)
HXDLIN( 793)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
HXDLIN( 793)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ALC_obj,getString,return )

void ALC_obj::getIntegerv( ::hxd::snd::openal::Device device,int param,int size, ::haxe::io::Bytes values){
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_796_getIntegerv)
HXDLIN( 796)		if ((param != 131075)) {
HXLINE( 798)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported param 0x",e6,88,8b,af) + ::StringTools_obj::hex(param,null()))));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ALC_obj,getIntegerv,(void))

int ALC_obj::FALSE;

int ALC_obj::TRUE;

int ALC_obj::FREQUENCY;

int ALC_obj::REFRESH;

int ALC_obj::SYNC;

int ALC_obj::MONO_SOURCES;

int ALC_obj::STEREO_SOURCES;

int ALC_obj::NO_ERROR;

int ALC_obj::INVALID_DEVICE;

int ALC_obj::INVALID_CONTEXT;

int ALC_obj::INVALID_ENUM;

int ALC_obj::INVALID_VALUE;

int ALC_obj::OUT_OF_MEMORY;

int ALC_obj::MAJOR_VERSION;

int ALC_obj::MINOR_VERSION;

int ALC_obj::ATTRIBUTES_SIZE;

int ALC_obj::ALL_ATTRIBUTES;

int ALC_obj::DEFAULT_DEVICE_SPECIFIER;

int ALC_obj::DEVICE_SPECIFIER;

int ALC_obj::EXTENSIONS;

int ALC_obj::EXT_CAPTURE;

int ALC_obj::CAPTURE_DEVICE_SPECIFIER;

int ALC_obj::CAPTURE_DEFAULT_DEVICE_SPECIFIER;

int ALC_obj::CAPTURE_SAMPLES;

int ALC_obj::ENUMERATE_ALL_EXT;

int ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER;

int ALC_obj::ALL_DEVICES_SPECIFIER;


ALC_obj::ALC_obj()
{
}

bool ALC_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ctx") ) { outValue = ( ctx ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getError") ) { outValue = getError_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getString") ) { outValue = getString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"openDevice") ) { outValue = openDevice_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"closeDevice") ) { outValue = closeDevice_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getIntegerv") ) { outValue = getIntegerv_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getEnumValue") ) { outValue = getEnumValue_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createContext") ) { outValue = createContext_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"processContext") ) { outValue = processContext_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"suspendContext") ) { outValue = suspendContext_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"destroyContext") ) { outValue = destroyContext_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadExtensions") ) { outValue = loadExtensions_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getCurrentContext") ) { outValue = getCurrentContext_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getContextsDevice") ) { outValue = getContextsDevice_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"makeContextCurrent") ) { outValue = makeContextCurrent_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isExtensionPresent") ) { outValue = isExtensionPresent_dyn(); return true; }
	}
	return false;
}

bool ALC_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ctx") ) { ctx=ioValue.Cast<  ::hxd::snd::openal::Context >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ALC_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ALC_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::snd::openal::Context */ ,(void *) &ALC_obj::ctx,HX_("ctx",a7,84,4b,00)},
	{::hx::fsInt,(void *) &ALC_obj::FALSE,HX_("FALSE",83,6d,3d,79)},
	{::hx::fsInt,(void *) &ALC_obj::TRUE,HX_("TRUE",4e,6f,c4,37)},
	{::hx::fsInt,(void *) &ALC_obj::FREQUENCY,HX_("FREQUENCY",7c,f2,42,b7)},
	{::hx::fsInt,(void *) &ALC_obj::REFRESH,HX_("REFRESH",bb,ad,f4,6c)},
	{::hx::fsInt,(void *) &ALC_obj::SYNC,HX_("SYNC",5b,82,20,37)},
	{::hx::fsInt,(void *) &ALC_obj::MONO_SOURCES,HX_("MONO_SOURCES",bc,3b,3c,ad)},
	{::hx::fsInt,(void *) &ALC_obj::STEREO_SOURCES,HX_("STEREO_SOURCES",d1,0f,99,60)},
	{::hx::fsInt,(void *) &ALC_obj::NO_ERROR,HX_("NO_ERROR",ea,b5,7d,2f)},
	{::hx::fsInt,(void *) &ALC_obj::INVALID_DEVICE,HX_("INVALID_DEVICE",3e,84,a5,93)},
	{::hx::fsInt,(void *) &ALC_obj::INVALID_CONTEXT,HX_("INVALID_CONTEXT",27,a1,3c,df)},
	{::hx::fsInt,(void *) &ALC_obj::INVALID_ENUM,HX_("INVALID_ENUM",a9,74,70,13)},
	{::hx::fsInt,(void *) &ALC_obj::INVALID_VALUE,HX_("INVALID_VALUE",a9,e8,26,b0)},
	{::hx::fsInt,(void *) &ALC_obj::OUT_OF_MEMORY,HX_("OUT_OF_MEMORY",18,f2,97,e1)},
	{::hx::fsInt,(void *) &ALC_obj::MAJOR_VERSION,HX_("MAJOR_VERSION",92,4a,98,0b)},
	{::hx::fsInt,(void *) &ALC_obj::MINOR_VERSION,HX_("MINOR_VERSION",8e,64,0d,1d)},
	{::hx::fsInt,(void *) &ALC_obj::ATTRIBUTES_SIZE,HX_("ATTRIBUTES_SIZE",69,7c,9f,17)},
	{::hx::fsInt,(void *) &ALC_obj::ALL_ATTRIBUTES,HX_("ALL_ATTRIBUTES",95,e2,00,04)},
	{::hx::fsInt,(void *) &ALC_obj::DEFAULT_DEVICE_SPECIFIER,HX_("DEFAULT_DEVICE_SPECIFIER",93,a5,bc,d9)},
	{::hx::fsInt,(void *) &ALC_obj::DEVICE_SPECIFIER,HX_("DEVICE_SPECIFIER",f5,a8,61,21)},
	{::hx::fsInt,(void *) &ALC_obj::EXTENSIONS,HX_("EXTENSIONS",14,f0,79,7b)},
	{::hx::fsInt,(void *) &ALC_obj::EXT_CAPTURE,HX_("EXT_CAPTURE",68,8f,a0,6d)},
	{::hx::fsInt,(void *) &ALC_obj::CAPTURE_DEVICE_SPECIFIER,HX_("CAPTURE_DEVICE_SPECIFIER",2e,a0,ef,91)},
	{::hx::fsInt,(void *) &ALC_obj::CAPTURE_DEFAULT_DEVICE_SPECIFIER,HX_("CAPTURE_DEFAULT_DEVICE_SPECIFIER",cc,fd,59,03)},
	{::hx::fsInt,(void *) &ALC_obj::CAPTURE_SAMPLES,HX_("CAPTURE_SAMPLES",d0,6c,ef,44)},
	{::hx::fsInt,(void *) &ALC_obj::ENUMERATE_ALL_EXT,HX_("ENUMERATE_ALL_EXT",88,ff,7d,b7)},
	{::hx::fsInt,(void *) &ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER,HX_("DEFAULT_ALL_DEVICES_SPECIFIER",c0,d6,77,d2)},
	{::hx::fsInt,(void *) &ALC_obj::ALL_DEVICES_SPECIFIER,HX_("ALL_DEVICES_SPECIFIER",1e,50,c1,f5)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ALC_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALC_obj::ctx,"ctx");
	HX_MARK_MEMBER_NAME(ALC_obj::FALSE,"FALSE");
	HX_MARK_MEMBER_NAME(ALC_obj::TRUE,"TRUE");
	HX_MARK_MEMBER_NAME(ALC_obj::FREQUENCY,"FREQUENCY");
	HX_MARK_MEMBER_NAME(ALC_obj::REFRESH,"REFRESH");
	HX_MARK_MEMBER_NAME(ALC_obj::SYNC,"SYNC");
	HX_MARK_MEMBER_NAME(ALC_obj::MONO_SOURCES,"MONO_SOURCES");
	HX_MARK_MEMBER_NAME(ALC_obj::STEREO_SOURCES,"STEREO_SOURCES");
	HX_MARK_MEMBER_NAME(ALC_obj::NO_ERROR,"NO_ERROR");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_DEVICE,"INVALID_DEVICE");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_CONTEXT,"INVALID_CONTEXT");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(ALC_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_MARK_MEMBER_NAME(ALC_obj::MAJOR_VERSION,"MAJOR_VERSION");
	HX_MARK_MEMBER_NAME(ALC_obj::MINOR_VERSION,"MINOR_VERSION");
	HX_MARK_MEMBER_NAME(ALC_obj::ATTRIBUTES_SIZE,"ATTRIBUTES_SIZE");
	HX_MARK_MEMBER_NAME(ALC_obj::ALL_ATTRIBUTES,"ALL_ATTRIBUTES");
	HX_MARK_MEMBER_NAME(ALC_obj::DEFAULT_DEVICE_SPECIFIER,"DEFAULT_DEVICE_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::DEVICE_SPECIFIER,"DEVICE_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::EXTENSIONS,"EXTENSIONS");
	HX_MARK_MEMBER_NAME(ALC_obj::EXT_CAPTURE,"EXT_CAPTURE");
	HX_MARK_MEMBER_NAME(ALC_obj::CAPTURE_DEVICE_SPECIFIER,"CAPTURE_DEVICE_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::CAPTURE_DEFAULT_DEVICE_SPECIFIER,"CAPTURE_DEFAULT_DEVICE_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::CAPTURE_SAMPLES,"CAPTURE_SAMPLES");
	HX_MARK_MEMBER_NAME(ALC_obj::ENUMERATE_ALL_EXT,"ENUMERATE_ALL_EXT");
	HX_MARK_MEMBER_NAME(ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER,"DEFAULT_ALL_DEVICES_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::ALL_DEVICES_SPECIFIER,"ALL_DEVICES_SPECIFIER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ALC_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALC_obj::ctx,"ctx");
	HX_VISIT_MEMBER_NAME(ALC_obj::FALSE,"FALSE");
	HX_VISIT_MEMBER_NAME(ALC_obj::TRUE,"TRUE");
	HX_VISIT_MEMBER_NAME(ALC_obj::FREQUENCY,"FREQUENCY");
	HX_VISIT_MEMBER_NAME(ALC_obj::REFRESH,"REFRESH");
	HX_VISIT_MEMBER_NAME(ALC_obj::SYNC,"SYNC");
	HX_VISIT_MEMBER_NAME(ALC_obj::MONO_SOURCES,"MONO_SOURCES");
	HX_VISIT_MEMBER_NAME(ALC_obj::STEREO_SOURCES,"STEREO_SOURCES");
	HX_VISIT_MEMBER_NAME(ALC_obj::NO_ERROR,"NO_ERROR");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_DEVICE,"INVALID_DEVICE");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_CONTEXT,"INVALID_CONTEXT");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_VISIT_MEMBER_NAME(ALC_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_VISIT_MEMBER_NAME(ALC_obj::MAJOR_VERSION,"MAJOR_VERSION");
	HX_VISIT_MEMBER_NAME(ALC_obj::MINOR_VERSION,"MINOR_VERSION");
	HX_VISIT_MEMBER_NAME(ALC_obj::ATTRIBUTES_SIZE,"ATTRIBUTES_SIZE");
	HX_VISIT_MEMBER_NAME(ALC_obj::ALL_ATTRIBUTES,"ALL_ATTRIBUTES");
	HX_VISIT_MEMBER_NAME(ALC_obj::DEFAULT_DEVICE_SPECIFIER,"DEFAULT_DEVICE_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::DEVICE_SPECIFIER,"DEVICE_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::EXTENSIONS,"EXTENSIONS");
	HX_VISIT_MEMBER_NAME(ALC_obj::EXT_CAPTURE,"EXT_CAPTURE");
	HX_VISIT_MEMBER_NAME(ALC_obj::CAPTURE_DEVICE_SPECIFIER,"CAPTURE_DEVICE_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::CAPTURE_DEFAULT_DEVICE_SPECIFIER,"CAPTURE_DEFAULT_DEVICE_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::CAPTURE_SAMPLES,"CAPTURE_SAMPLES");
	HX_VISIT_MEMBER_NAME(ALC_obj::ENUMERATE_ALL_EXT,"ENUMERATE_ALL_EXT");
	HX_VISIT_MEMBER_NAME(ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER,"DEFAULT_ALL_DEVICES_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::ALL_DEVICES_SPECIFIER,"ALL_DEVICES_SPECIFIER");
};

#endif

::hx::Class ALC_obj::__mClass;

static ::String ALC_obj_sStaticFields[] = {
	HX_("ctx",a7,84,4b,00),
	HX_("getError",52,db,00,d3),
	HX_("createContext",53,6e,ba,01),
	HX_("makeContextCurrent",98,6c,ce,94),
	HX_("processContext",40,d7,d5,cb),
	HX_("suspendContext",d3,b5,bc,fe),
	HX_("destroyContext",15,84,e3,85),
	HX_("getCurrentContext",ec,b9,7f,99),
	HX_("getContextsDevice",90,ee,91,9c),
	HX_("openDevice",00,48,14,bf),
	HX_("closeDevice",6e,02,c8,2b),
	HX_("loadExtensions",da,85,21,20),
	HX_("isExtensionPresent",46,f9,2a,b4),
	HX_("getEnumValue",3a,9d,5d,37),
	HX_("getString",07,b2,86,8d),
	HX_("getIntegerv",ae,0b,1e,47),
	HX_("FALSE",83,6d,3d,79),
	HX_("TRUE",4e,6f,c4,37),
	HX_("FREQUENCY",7c,f2,42,b7),
	HX_("REFRESH",bb,ad,f4,6c),
	HX_("SYNC",5b,82,20,37),
	HX_("MONO_SOURCES",bc,3b,3c,ad),
	HX_("STEREO_SOURCES",d1,0f,99,60),
	HX_("NO_ERROR",ea,b5,7d,2f),
	HX_("INVALID_DEVICE",3e,84,a5,93),
	HX_("INVALID_CONTEXT",27,a1,3c,df),
	HX_("INVALID_ENUM",a9,74,70,13),
	HX_("INVALID_VALUE",a9,e8,26,b0),
	HX_("OUT_OF_MEMORY",18,f2,97,e1),
	HX_("MAJOR_VERSION",92,4a,98,0b),
	HX_("MINOR_VERSION",8e,64,0d,1d),
	HX_("ATTRIBUTES_SIZE",69,7c,9f,17),
	HX_("ALL_ATTRIBUTES",95,e2,00,04),
	HX_("DEFAULT_DEVICE_SPECIFIER",93,a5,bc,d9),
	HX_("DEVICE_SPECIFIER",f5,a8,61,21),
	HX_("EXTENSIONS",14,f0,79,7b),
	HX_("EXT_CAPTURE",68,8f,a0,6d),
	HX_("CAPTURE_DEVICE_SPECIFIER",2e,a0,ef,91),
	HX_("CAPTURE_DEFAULT_DEVICE_SPECIFIER",cc,fd,59,03),
	HX_("CAPTURE_SAMPLES",d0,6c,ef,44),
	HX_("ENUMERATE_ALL_EXT",88,ff,7d,b7),
	HX_("DEFAULT_ALL_DEVICES_SPECIFIER",c0,d6,77,d2),
	HX_("ALL_DEVICES_SPECIFIER",1e,50,c1,f5),
	::String(null())
};

void ALC_obj::__register()
{
	ALC_obj _hx_dummy;
	ALC_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.openal.ALC",fe,bb,c0,e1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ALC_obj::__GetStatic;
	__mClass->mSetStaticField = &ALC_obj::__SetStatic;
	__mClass->mMarkFunc = ALC_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ALC_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ALC_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ALC_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ALC_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ALC_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ALC_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_738_boot)
HXDLIN( 738)		ctx = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_813_boot)
HXDLIN( 813)		FALSE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_814_boot)
HXDLIN( 814)		TRUE = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_817_boot)
HXDLIN( 817)		FREQUENCY = 4103;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_818_boot)
HXDLIN( 818)		REFRESH = 4104;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_819_boot)
HXDLIN( 819)		SYNC = 4105;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_820_boot)
HXDLIN( 820)		MONO_SOURCES = 4112;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_821_boot)
HXDLIN( 821)		STEREO_SOURCES = 4113;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_824_boot)
HXDLIN( 824)		NO_ERROR = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_825_boot)
HXDLIN( 825)		INVALID_DEVICE = 40961;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_826_boot)
HXDLIN( 826)		INVALID_CONTEXT = 40962;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_827_boot)
HXDLIN( 827)		INVALID_ENUM = 40963;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_828_boot)
HXDLIN( 828)		INVALID_VALUE = 40964;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_829_boot)
HXDLIN( 829)		OUT_OF_MEMORY = 40965;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_832_boot)
HXDLIN( 832)		MAJOR_VERSION = 4096;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_833_boot)
HXDLIN( 833)		MINOR_VERSION = 4097;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_836_boot)
HXDLIN( 836)		ATTRIBUTES_SIZE = 4098;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_837_boot)
HXDLIN( 837)		ALL_ATTRIBUTES = 4099;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_840_boot)
HXDLIN( 840)		DEFAULT_DEVICE_SPECIFIER = 4100;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_841_boot)
HXDLIN( 841)		DEVICE_SPECIFIER = 4101;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_842_boot)
HXDLIN( 842)		EXTENSIONS = 4102;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_845_boot)
HXDLIN( 845)		EXT_CAPTURE = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_846_boot)
HXDLIN( 846)		CAPTURE_DEVICE_SPECIFIER = 784;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_847_boot)
HXDLIN( 847)		CAPTURE_DEFAULT_DEVICE_SPECIFIER = 785;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_848_boot)
HXDLIN( 848)		CAPTURE_SAMPLES = 786;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_851_boot)
HXDLIN( 851)		ENUMERATE_ALL_EXT = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_852_boot)
HXDLIN( 852)		DEFAULT_ALL_DEVICES_SPECIFIER = 4114;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89c49f357482f728_853_boot)
HXDLIN( 853)		ALL_DEVICES_SPECIFIER = 4115;
            	}
}

} // end namespace hxd
} // end namespace snd
} // end namespace openal
