#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_sys_thread_EventLoop
#include <sys/thread/EventLoop.h>
#endif
#ifndef INCLUDED_sys_thread_Lock
#include <sys/thread/Lock.h>
#endif
#ifndef INCLUDED_sys_thread_Mutex
#include <sys/thread/Mutex.h>
#endif
#ifndef INCLUDED_sys_thread__EventLoop_RegularEvent
#include <sys/thread/_EventLoop/RegularEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5c74e9f0f4a640e0_24_new,"sys.thread.EventLoop","new",0xafe12fcd,"sys.thread.EventLoop.new","/usr/local/lib/haxe/std/sys/thread/EventLoop.hx",24,0xbeb01246)
HX_LOCAL_STACK_FRAME(_hx_pos_5c74e9f0f4a640e0_37_repeat,"sys.thread.EventLoop","repeat",0xe060da0e,"sys.thread.EventLoop.repeat","/usr/local/lib/haxe/std/sys/thread/EventLoop.hx",37,0xbeb01246)
HX_LOCAL_STACK_FRAME(_hx_pos_5c74e9f0f4a640e0_56_cancel,"sys.thread.EventLoop","cancel",0x9218302d,"sys.thread.EventLoop.cancel","/usr/local/lib/haxe/std/sys/thread/EventLoop.hx",56,0xbeb01246)
HX_LOCAL_STACK_FRAME(_hx_pos_5c74e9f0f4a640e0_147_loop,"sys.thread.EventLoop","loop",0x33ddc657,"sys.thread.EventLoop.loop","/usr/local/lib/haxe/std/sys/thread/EventLoop.hx",147,0xbeb01246)
namespace sys{
namespace thread{

void EventLoop_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_5c74e9f0f4a640e0_24_new)
HXLINE(  29)		this->promisedEventsCount = 0;
HXLINE(  28)		this->waitLock =  ::sys::thread::Lock_obj::__alloc( HX_CTX );
HXLINE(  27)		this->oneTimeEventsIdx = 0;
HXLINE(  26)		this->oneTimeEvents = ::Array_obj< ::Dynamic>::__new();
HXLINE(  25)		this->mutex =  ::sys::thread::Mutex_obj::__alloc( HX_CTX );
            	}

Dynamic EventLoop_obj::__CreateEmpty() { return new EventLoop_obj; }

void *EventLoop_obj::_hx_vtable = 0;

Dynamic EventLoop_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EventLoop_obj > _hx_result = new EventLoop_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EventLoop_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6a581147;
}

 ::sys::thread::_EventLoop::RegularEvent EventLoop_obj::repeat( ::Dynamic event,int intervalMs){
            	HX_GC_STACKFRAME(&_hx_pos_5c74e9f0f4a640e0_37_repeat)
HXLINE(  38)		this->mutex->acquire();
HXLINE(  39)		Float interval = (((Float)0.001) * ( (Float)(intervalMs) ));
HXLINE(  40)		 ::sys::thread::_EventLoop::RegularEvent event1 =  ::sys::thread::_EventLoop::RegularEvent_obj::__alloc( HX_CTX ,event,(::Sys_obj::time() + interval),interval);
HXLINE(  41)		{
HXLINE(  41)			 ::sys::thread::_EventLoop::RegularEvent _g = this->regularEvents;
HXLINE(  42)			if (::hx::IsNotNull( _g )) {
HXLINE(  43)				 ::sys::thread::_EventLoop::RegularEvent current = _g;
HXDLIN(  43)				{
HXLINE(  44)					event1->next = current;
HXLINE(  45)					current->previous = event1;
            				}
            			}
            		}
HXLINE(  47)		this->regularEvents = event1;
HXLINE(  48)		this->waitLock->release();
HXLINE(  49)		this->mutex->release();
HXLINE(  50)		return event1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(EventLoop_obj,repeat,return )

void EventLoop_obj::cancel( ::sys::thread::_EventLoop::RegularEvent eventHandler){
            	HX_STACKFRAME(&_hx_pos_5c74e9f0f4a640e0_56_cancel)
HXLINE(  57)		this->mutex->acquire();
HXLINE(  58)		 ::sys::thread::_EventLoop::RegularEvent event = eventHandler;
HXLINE(  59)		if (::hx::IsInstanceEq( this->regularEvents,event )) {
HXLINE(  60)			this->regularEvents = event->next;
            		}
HXLINE(  62)		{
HXLINE(  62)			 ::sys::thread::_EventLoop::RegularEvent _g = event->next;
HXLINE(  63)			if (::hx::IsNotNull( _g )) {
HXLINE(  64)				 ::sys::thread::_EventLoop::RegularEvent e = _g;
HXDLIN(  64)				e->previous = event->previous;
            			}
            		}
HXLINE(  66)		{
HXLINE(  66)			 ::sys::thread::_EventLoop::RegularEvent _g1 = event->previous;
HXLINE(  67)			if (::hx::IsNotNull( _g1 )) {
HXLINE(  68)				 ::sys::thread::_EventLoop::RegularEvent e = _g1;
HXDLIN(  68)				e->next = event->next;
            			}
            		}
HXLINE(  70)		this->mutex->release();
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventLoop_obj,cancel,(void))

void EventLoop_obj::loop(){
            	HX_STACKFRAME(&_hx_pos_5c74e9f0f4a640e0_147_loop)
HXLINE( 148)		::Array< ::Dynamic> events = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 149)		while(true){
HXLINE( 150)			Float now = ::Sys_obj::time();
HXDLIN( 150)			::Array< ::Dynamic> eventsToRun = events;
HXDLIN( 150)			int eventsToRunIdx = 0;
HXDLIN( 150)			Float nextEventAt = ( (Float)(-1) );
HXDLIN( 150)			this->mutex->acquire();
HXDLIN( 150)			while(this->waitLock->wait(((Float)0.0))){
            			}
HXLINE( 150)			 ::sys::thread::_EventLoop::RegularEvent current = this->regularEvents;
HXDLIN( 150)			while(::hx::IsNotNull( current )){
HXLINE( 150)				if ((current->nextRunTime <= now)) {
HXLINE( 150)					eventsToRunIdx = (eventsToRunIdx + 1);
HXDLIN( 150)					eventsToRun[(eventsToRunIdx - 1)] = current->run;
HXDLIN( 150)					 ::sys::thread::_EventLoop::RegularEvent current1 = current;
HXDLIN( 150)					current1->nextRunTime = (current1->nextRunTime + current->interval);
HXLINE( 187)					nextEventAt = ( (Float)(-2) );
            				}
            				else {
HXLINE( 150)					bool _hx_tmp;
HXDLIN( 150)					if ((nextEventAt != -1)) {
HXLINE( 150)						_hx_tmp = (current->nextRunTime < nextEventAt);
            					}
            					else {
HXLINE( 150)						_hx_tmp = true;
            					}
HXDLIN( 150)					if (_hx_tmp) {
HXLINE( 189)						nextEventAt = current->nextRunTime;
            					}
            				}
HXLINE( 191)				current = current->next;
            			}
HXLINE( 150)			this->mutex->release();
HXDLIN( 150)			int _g = 0;
HXDLIN( 150)			int _g1 = eventsToRunIdx;
HXDLIN( 150)			while((_g < _g1)){
HXLINE( 150)				_g = (_g + 1);
HXDLIN( 150)				int i = (_g - 1);
HXDLIN( 150)				eventsToRun->__get(i)();
HXDLIN( 150)				eventsToRun[i] = null();
            			}
HXLINE( 200)			eventsToRunIdx = 0;
HXLINE( 150)			this->mutex->acquire();
HXDLIN( 150)			int _g2_current = 0;
HXDLIN( 150)			::Array< ::Dynamic> _g2_array = this->oneTimeEvents;
HXDLIN( 150)			while((_g2_current < _g2_array->length)){
HXLINE( 150)				 ::Dynamic _g3_value = _g2_array->__get(_g2_current);
HXDLIN( 150)				_g2_current = (_g2_current + 1);
HXDLIN( 150)				int _g3_key = (_g2_current - 1);
HXDLIN( 150)				int i = _g3_key;
HXDLIN( 150)				 ::Dynamic event = _g3_value;
HXDLIN( 150)				if (::hx::IsNull( event )) {
HXLINE( 150)					goto _hx_goto_7;
            				}
            				else {
HXLINE( 150)					eventsToRunIdx = (eventsToRunIdx + 1);
HXDLIN( 150)					eventsToRun[(eventsToRunIdx - 1)] = event;
HXDLIN( 150)					this->oneTimeEvents[i] = null();
            				}
            			}
            			_hx_goto_7:;
HXDLIN( 150)			this->oneTimeEventsIdx = 0;
HXDLIN( 150)			bool hasPromisedEvents = (this->promisedEventsCount > 0);
HXDLIN( 150)			this->mutex->release();
HXDLIN( 150)			int _g2 = 0;
HXDLIN( 150)			int _g3 = eventsToRunIdx;
HXDLIN( 150)			while((_g2 < _g3)){
HXLINE( 150)				_g2 = (_g2 + 1);
HXDLIN( 150)				int i = (_g2 - 1);
HXDLIN( 150)				eventsToRun->__get(i)();
HXDLIN( 150)				eventsToRun[i] = null();
            			}
HXDLIN( 150)			if ((eventsToRunIdx > 0)) {
HXLINE( 225)				nextEventAt = ( (Float)(-2) );
            			}
HXLINE( 150)			Float r_nextEventAt = nextEventAt;
HXDLIN( 150)			bool r_anyTime = hasPromisedEvents;
HXLINE( 151)			{
HXLINE( 151)				bool _g4 = r_anyTime;
HXDLIN( 151)				Float _g5 = r_nextEventAt;
HXDLIN( 151)				Float _hx_switch_0 = _g5;
            				if (  (_hx_switch_0==( (Float)(-2) )) ){
HXLINE( 152)					goto _hx_goto_9;
            				}
            				if (  (_hx_switch_0==( (Float)(-1) )) ){
HXLINE( 151)					if (_g4) {
HXLINE( 156)						this->waitLock->wait(null());
            					}
            					else {
HXLINE( 154)						goto _hx_goto_3;
            					}
HXLINE( 151)					goto _hx_goto_9;
            				}
            				/* default */{
HXLINE( 157)					Float time = _g5;
HXDLIN( 157)					{
HXLINE( 158)						Float timeout = (time - ::Sys_obj::time());
HXLINE( 159)						this->waitLock->wait(::Math_obj::max(( (Float)(0) ),timeout));
            					}
            				}
            				_hx_goto_9:;
            			}
            		}
            		_hx_goto_3:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventLoop_obj,loop,(void))


::hx::ObjectPtr< EventLoop_obj > EventLoop_obj::__new() {
	::hx::ObjectPtr< EventLoop_obj > __this = new EventLoop_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< EventLoop_obj > EventLoop_obj::__alloc(::hx::Ctx *_hx_ctx) {
	EventLoop_obj *__this = (EventLoop_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EventLoop_obj), true, "sys.thread.EventLoop"));
	*(void **)__this = EventLoop_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

EventLoop_obj::EventLoop_obj()
{
}

void EventLoop_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventLoop);
	HX_MARK_MEMBER_NAME(mutex,"mutex");
	HX_MARK_MEMBER_NAME(oneTimeEvents,"oneTimeEvents");
	HX_MARK_MEMBER_NAME(oneTimeEventsIdx,"oneTimeEventsIdx");
	HX_MARK_MEMBER_NAME(waitLock,"waitLock");
	HX_MARK_MEMBER_NAME(promisedEventsCount,"promisedEventsCount");
	HX_MARK_MEMBER_NAME(regularEvents,"regularEvents");
	HX_MARK_END_CLASS();
}

void EventLoop_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mutex,"mutex");
	HX_VISIT_MEMBER_NAME(oneTimeEvents,"oneTimeEvents");
	HX_VISIT_MEMBER_NAME(oneTimeEventsIdx,"oneTimeEventsIdx");
	HX_VISIT_MEMBER_NAME(waitLock,"waitLock");
	HX_VISIT_MEMBER_NAME(promisedEventsCount,"promisedEventsCount");
	HX_VISIT_MEMBER_NAME(regularEvents,"regularEvents");
}

::hx::Val EventLoop_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { return ::hx::Val( loop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { return ::hx::Val( mutex ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"repeat") ) { return ::hx::Val( repeat_dyn() ); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"waitLock") ) { return ::hx::Val( waitLock ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"oneTimeEvents") ) { return ::hx::Val( oneTimeEvents ); }
		if (HX_FIELD_EQ(inName,"regularEvents") ) { return ::hx::Val( regularEvents ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"oneTimeEventsIdx") ) { return ::hx::Val( oneTimeEventsIdx ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"promisedEventsCount") ) { return ::hx::Val( promisedEventsCount ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EventLoop_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { mutex=inValue.Cast<  ::sys::thread::Mutex >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"waitLock") ) { waitLock=inValue.Cast<  ::sys::thread::Lock >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"oneTimeEvents") ) { oneTimeEvents=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"regularEvents") ) { regularEvents=inValue.Cast<  ::sys::thread::_EventLoop::RegularEvent >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"oneTimeEventsIdx") ) { oneTimeEventsIdx=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"promisedEventsCount") ) { promisedEventsCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventLoop_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mutex",7f,8f,5b,10));
	outFields->push(HX_("oneTimeEvents",0c,71,5c,81));
	outFields->push(HX_("oneTimeEventsIdx",91,7a,66,79));
	outFields->push(HX_("waitLock",00,01,9a,50));
	outFields->push(HX_("promisedEventsCount",0d,bf,c2,9b));
	outFields->push(HX_("regularEvents",95,42,47,b5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EventLoop_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::sys::thread::Mutex */ ,(int)offsetof(EventLoop_obj,mutex),HX_("mutex",7f,8f,5b,10)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(EventLoop_obj,oneTimeEvents),HX_("oneTimeEvents",0c,71,5c,81)},
	{::hx::fsInt,(int)offsetof(EventLoop_obj,oneTimeEventsIdx),HX_("oneTimeEventsIdx",91,7a,66,79)},
	{::hx::fsObject /*  ::sys::thread::Lock */ ,(int)offsetof(EventLoop_obj,waitLock),HX_("waitLock",00,01,9a,50)},
	{::hx::fsInt,(int)offsetof(EventLoop_obj,promisedEventsCount),HX_("promisedEventsCount",0d,bf,c2,9b)},
	{::hx::fsObject /*  ::sys::thread::_EventLoop::RegularEvent */ ,(int)offsetof(EventLoop_obj,regularEvents),HX_("regularEvents",95,42,47,b5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EventLoop_obj_sStaticStorageInfo = 0;
#endif

static ::String EventLoop_obj_sMemberFields[] = {
	HX_("mutex",7f,8f,5b,10),
	HX_("oneTimeEvents",0c,71,5c,81),
	HX_("oneTimeEventsIdx",91,7a,66,79),
	HX_("waitLock",00,01,9a,50),
	HX_("promisedEventsCount",0d,bf,c2,9b),
	HX_("regularEvents",95,42,47,b5),
	HX_("repeat",5b,97,7c,06),
	HX_("cancel",7a,ed,33,b8),
	HX_("loop",64,a6,b7,47),
	::String(null()) };

::hx::Class EventLoop_obj::__mClass;

void EventLoop_obj::__register()
{
	EventLoop_obj _hx_dummy;
	EventLoop_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("sys.thread.EventLoop",5b,45,a8,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EventLoop_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EventLoop_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EventLoop_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EventLoop_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace thread
