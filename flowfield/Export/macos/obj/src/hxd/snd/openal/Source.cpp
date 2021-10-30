#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxd_snd_NativeChannel
#include <hxd/snd/NativeChannel.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_Buffer
#include <hxd/snd/openal/Buffer.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_Source
#include <hxd/snd/openal/Source.h>
#endif
#ifndef INCLUDED_hxd_snd_openal__Emulator_Channel
#include <hxd/snd/openal/_Emulator/Channel.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0960e26731a76acd_78_new,"hxd.snd.openal.Source","new",0x57d9c527,"hxd.snd.openal.Source.new","hxd/snd/openal/Emulator.hx",78,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_0960e26731a76acd_106_updateDuration,"hxd.snd.openal.Source","updateDuration",0xd69cc516,"hxd.snd.openal.Source.updateDuration","hxd/snd/openal/Emulator.hx",106,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_0960e26731a76acd_113_get_playing,"hxd.snd.openal.Source","get_playing",0x0655034c,"hxd.snd.openal.Source.get_playing","hxd/snd/openal/Emulator.hx",113,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_0960e26731a76acd_116_play,"hxd.snd.openal.Source","play",0x880a674d,"hxd.snd.openal.Source.play","hxd/snd/openal/Emulator.hx",116,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_0960e26731a76acd_123_stop,"hxd.snd.openal.Source","stop",0x8a0c295b,"hxd.snd.openal.Source.stop","hxd/snd/openal/Emulator.hx",123,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_0960e26731a76acd_132_dispose,"hxd.snd.openal.Source","dispose",0x1399e4e6,"hxd.snd.openal.Source.dispose","hxd/snd/openal/Emulator.hx",132,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_0960e26731a76acd_138_toInt,"hxd.snd.openal.Source","toInt",0xd093b2bb,"hxd.snd.openal.Source.toInt","hxd/snd/openal/Emulator.hx",138,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_0960e26731a76acd_139_ofInt,"hxd.snd.openal.Source","ofInt",0xe99fe09f,"hxd.snd.openal.Source.ofInt","hxd/snd/openal/Emulator.hx",139,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_0960e26731a76acd_82_boot,"hxd.snd.openal.Source","boot",0x7ecbbd8b,"hxd.snd.openal.Source.boot","hxd/snd/openal/Emulator.hx",82,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_0960e26731a76acd_84_boot,"hxd.snd.openal.Source","boot",0x7ecbbd8b,"hxd.snd.openal.Source.boot","hxd/snd/openal/Emulator.hx",84,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_0960e26731a76acd_86_boot,"hxd.snd.openal.Source","boot",0x7ecbbd8b,"hxd.snd.openal.Source.boot","hxd/snd/openal/Emulator.hx",86,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_0960e26731a76acd_87_boot,"hxd.snd.openal.Source","boot",0x7ecbbd8b,"hxd.snd.openal.Source.boot","hxd/snd/openal/Emulator.hx",87,0x857ad050)
namespace hxd{
namespace snd{
namespace openal{

void Source_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0960e26731a76acd_78_new)
HXLINE(  96)		this->volume = ((Float)1.);
HXLINE(  95)		this->loop = false;
HXLINE(  94)		this->buffers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  93)		this->currentSample = 0;
HXLINE(  92)		this->playedTime = ((Float)0.);
HXLINE( 102)		this->id = ++::hxd::snd::openal::Source_obj::ID;
HXLINE( 103)		::hxd::snd::openal::Source_obj::all->set(this->id,::hx::ObjectPtr<OBJ_>(this));
            	}

Dynamic Source_obj::__CreateEmpty() { return new Source_obj; }

void *Source_obj::_hx_vtable = 0;

Dynamic Source_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Source_obj > _hx_result = new Source_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Source_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x76447845;
}

void Source_obj::updateDuration(){
            	HX_STACKFRAME(&_hx_pos_0960e26731a76acd_106_updateDuration)
HXLINE( 107)		int _hx_tmp;
HXDLIN( 107)		if ((this->buffers->length == 0)) {
HXLINE( 107)			_hx_tmp = 1;
            		}
            		else {
HXLINE( 107)			_hx_tmp = this->buffers->__get(0).StaticCast<  ::hxd::snd::openal::Buffer >()->frequency;
            		}
HXDLIN( 107)		this->frequency = _hx_tmp;
HXLINE( 108)		this->duration = ((Float)0.);
HXLINE( 109)		{
HXLINE( 109)			int _g = 0;
HXDLIN( 109)			::Array< ::Dynamic> _g1 = this->buffers;
HXDLIN( 109)			while((_g < _g1->length)){
HXLINE( 109)				 ::hxd::snd::openal::Buffer b = _g1->__get(_g).StaticCast<  ::hxd::snd::openal::Buffer >();
HXDLIN( 109)				_g = (_g + 1);
HXLINE( 110)				 ::hxd::snd::openal::Source _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 110)				_hx_tmp->duration = (_hx_tmp->duration + (( (Float)(b->samples) ) / ( (Float)(b->frequency) )));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Source_obj,updateDuration,(void))

bool Source_obj::get_playing(){
            	HX_STACKFRAME(&_hx_pos_0960e26731a76acd_113_get_playing)
HXDLIN( 113)		return ::hx::IsNotNull( this->chan );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Source_obj,get_playing,return )

void Source_obj::play(){
            	HX_GC_STACKFRAME(&_hx_pos_0960e26731a76acd_116_play)
HXDLIN( 116)		if (::hx::IsNull( this->chan )) {
HXLINE( 117)			int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 117)			Float _hx_tmp;
HXDLIN( 117)			if ((timer > 0)) {
HXLINE( 117)				_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            			}
            			else {
HXLINE( 117)				_hx_tmp = ( (Float)(0) );
            			}
HXDLIN( 117)			this->playedTime = (_hx_tmp - (( (Float)(this->currentSample) ) / ( (Float)(this->frequency) )));
HXLINE( 118)			this->chan =  ::hxd::snd::openal::_Emulator::Channel_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),::hxd::snd::openal::Source_obj::CHANNEL_BUFSIZE);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Source_obj,play,(void))

void Source_obj::stop(::hx::Null< bool >  __o_immediate){
            		bool immediate = __o_immediate.Default(false);
            	HX_STACKFRAME(&_hx_pos_0960e26731a76acd_123_stop)
HXDLIN( 123)		if (::hx::IsNotNull( this->chan )) {
HXLINE( 125)			this->chan->stop();
HXLINE( 128)			this->chan = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Source_obj,stop,(void))

void Source_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_0960e26731a76acd_132_dispose)
HXLINE( 133)		this->stop(null());
HXLINE( 134)		::hxd::snd::openal::Source_obj::all->remove(this->id);
HXLINE( 135)		this->id = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Source_obj,dispose,(void))

int Source_obj::toInt(){
            	HX_STACKFRAME(&_hx_pos_0960e26731a76acd_138_toInt)
HXDLIN( 138)		return this->id;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Source_obj,toInt,return )

int Source_obj::STOP_DELAY;

int Source_obj::CHANNEL_BUFSIZE;

int Source_obj::ID;

 ::haxe::ds::IntMap Source_obj::all;

 ::hxd::snd::openal::Source Source_obj::ofInt(int i){
            	HX_STACKFRAME(&_hx_pos_0960e26731a76acd_139_ofInt)
HXDLIN( 139)		return ( ( ::hxd::snd::openal::Source)(::hxd::snd::openal::Source_obj::all->get(i)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Source_obj,ofInt,return )


::hx::ObjectPtr< Source_obj > Source_obj::__new() {
	::hx::ObjectPtr< Source_obj > __this = new Source_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Source_obj > Source_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Source_obj *__this = (Source_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Source_obj), true, "hxd.snd.openal.Source"));
	*(void **)__this = Source_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Source_obj::Source_obj()
{
}

void Source_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Source);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(chan,"chan");
	HX_MARK_MEMBER_NAME(playedTime,"playedTime");
	HX_MARK_MEMBER_NAME(currentSample,"currentSample");
	HX_MARK_MEMBER_NAME(buffers,"buffers");
	HX_MARK_MEMBER_NAME(loop,"loop");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(frequency,"frequency");
	HX_MARK_END_CLASS();
}

void Source_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(chan,"chan");
	HX_VISIT_MEMBER_NAME(playedTime,"playedTime");
	HX_VISIT_MEMBER_NAME(currentSample,"currentSample");
	HX_VISIT_MEMBER_NAME(buffers,"buffers");
	HX_VISIT_MEMBER_NAME(loop,"loop");
	HX_VISIT_MEMBER_NAME(volume,"volume");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(frequency,"frequency");
}

::hx::Val Source_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"chan") ) { return ::hx::Val( chan ); }
		if (HX_FIELD_EQ(inName,"loop") ) { return ::hx::Val( loop ); }
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { return ::hx::Val( toInt_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return ::hx::Val( volume ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buffers") ) { return ::hx::Val( buffers ); }
		if (HX_FIELD_EQ(inName,"playing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_playing() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return ::hx::Val( duration ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frequency") ) { return ::hx::Val( frequency ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playedTime") ) { return ::hx::Val( playedTime ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_playing") ) { return ::hx::Val( get_playing_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentSample") ) { return ::hx::Val( currentSample ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateDuration") ) { return ::hx::Val( updateDuration_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Source_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { outValue = ( ID ); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"all") ) { outValue = ( all ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ofInt") ) { outValue = ofInt_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"CHANNEL_BUFSIZE") ) { outValue = ( CHANNEL_BUFSIZE ); return true; }
	}
	return false;
}

::hx::Val Source_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"chan") ) { chan=inValue.Cast<  ::hxd::snd::NativeChannel >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loop") ) { loop=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buffers") ) { buffers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frequency") ) { frequency=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playedTime") ) { playedTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentSample") ) { currentSample=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Source_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=ioValue.Cast< int >(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"all") ) { all=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"CHANNEL_BUFSIZE") ) { CHANNEL_BUFSIZE=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Source_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("chan",d2,5e,bf,41));
	outFields->push(HX_("playedTime",00,89,22,a0));
	outFields->push(HX_("currentSample",43,e1,a6,00));
	outFields->push(HX_("buffers",73,a3,90,b1));
	outFields->push(HX_("loop",64,a6,b7,47));
	outFields->push(HX_("volume",da,29,53,5f));
	outFields->push(HX_("playing",6e,0f,18,8a));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("frequency",9c,82,ea,bb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Source_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Source_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsObject /*  ::hxd::snd::NativeChannel */ ,(int)offsetof(Source_obj,chan),HX_("chan",d2,5e,bf,41)},
	{::hx::fsFloat,(int)offsetof(Source_obj,playedTime),HX_("playedTime",00,89,22,a0)},
	{::hx::fsInt,(int)offsetof(Source_obj,currentSample),HX_("currentSample",43,e1,a6,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Source_obj,buffers),HX_("buffers",73,a3,90,b1)},
	{::hx::fsBool,(int)offsetof(Source_obj,loop),HX_("loop",64,a6,b7,47)},
	{::hx::fsFloat,(int)offsetof(Source_obj,volume),HX_("volume",da,29,53,5f)},
	{::hx::fsFloat,(int)offsetof(Source_obj,duration),HX_("duration",54,0f,8e,14)},
	{::hx::fsInt,(int)offsetof(Source_obj,frequency),HX_("frequency",9c,82,ea,bb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Source_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Source_obj::STOP_DELAY,HX_("STOP_DELAY",26,fc,9d,85)},
	{::hx::fsInt,(void *) &Source_obj::CHANNEL_BUFSIZE,HX_("CHANNEL_BUFSIZE",78,56,07,a8)},
	{::hx::fsInt,(void *) &Source_obj::ID,HX_("ID",db,3f,00,00)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &Source_obj::all,HX_("all",21,f9,49,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Source_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("chan",d2,5e,bf,41),
	HX_("playedTime",00,89,22,a0),
	HX_("currentSample",43,e1,a6,00),
	HX_("buffers",73,a3,90,b1),
	HX_("loop",64,a6,b7,47),
	HX_("volume",da,29,53,5f),
	HX_("duration",54,0f,8e,14),
	HX_("frequency",9c,82,ea,bb),
	HX_("updateDuration",7d,02,b8,49),
	HX_("get_playing",85,6f,12,10),
	HX_("play",f4,2d,5a,4a),
	HX_("stop",02,f0,5b,4c),
	HX_("dispose",9f,80,4c,bb),
	HX_("toInt",34,be,11,14),
	::String(null()) };

static void Source_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Source_obj::STOP_DELAY,"STOP_DELAY");
	HX_MARK_MEMBER_NAME(Source_obj::CHANNEL_BUFSIZE,"CHANNEL_BUFSIZE");
	HX_MARK_MEMBER_NAME(Source_obj::ID,"ID");
	HX_MARK_MEMBER_NAME(Source_obj::all,"all");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Source_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Source_obj::STOP_DELAY,"STOP_DELAY");
	HX_VISIT_MEMBER_NAME(Source_obj::CHANNEL_BUFSIZE,"CHANNEL_BUFSIZE");
	HX_VISIT_MEMBER_NAME(Source_obj::ID,"ID");
	HX_VISIT_MEMBER_NAME(Source_obj::all,"all");
};

#endif

::hx::Class Source_obj::__mClass;

static ::String Source_obj_sStaticFields[] = {
	HX_("STOP_DELAY",26,fc,9d,85),
	HX_("CHANNEL_BUFSIZE",78,56,07,a8),
	HX_("ID",db,3f,00,00),
	HX_("all",21,f9,49,00),
	HX_("ofInt",18,ec,1d,2d),
	::String(null())
};

void Source_obj::__register()
{
	Source_obj _hx_dummy;
	Source_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.openal.Source",b5,a5,e0,73);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Source_obj::__GetStatic;
	__mClass->mSetStaticField = &Source_obj::__SetStatic;
	__mClass->mMarkFunc = Source_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Source_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Source_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Source_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Source_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Source_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Source_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Source_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0960e26731a76acd_82_boot)
HXDLIN(  82)		STOP_DELAY = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0960e26731a76acd_84_boot)
HXDLIN(  84)		CHANNEL_BUFSIZE = 4096;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0960e26731a76acd_86_boot)
HXDLIN(  86)		ID = 0;
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_0960e26731a76acd_87_boot)
HXDLIN(  87)		all =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace hxd
} // end namespace snd
} // end namespace openal
