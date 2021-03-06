#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_MainEvent
#include <haxe/MainEvent.h>
#endif
#ifndef INCLUDED_haxe_MainLoop
#include <haxe/MainLoop.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_sys_thread_EventLoop
#include <sys/thread/EventLoop.h>
#endif
#ifndef INCLUDED_sys_thread_Mutex
#include <sys/thread/Mutex.h>
#endif
#ifndef INCLUDED_sys_thread__EventLoop_RegularEvent
#include <sys/thread/_EventLoop/RegularEvent.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_HaxeThread
#include <sys/thread/_Thread/HaxeThread.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_Thread_Impl_
#include <sys/thread/_Thread/Thread_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c09dd4c76a148f98_76_hasEvents,"haxe.MainLoop","hasEvents",0xbbf2790a,"haxe.MainLoop.hasEvents","/usr/local/lib/haxe/std/haxe/MainLoop.hx",76,0x4a7d9295)
HX_LOCAL_STACK_FRAME(_hx_pos_c09dd4c76a148f98_97_add,"haxe.MainLoop","add",0xf65145d8,"haxe.MainLoop.add","/usr/local/lib/haxe/std/haxe/MainLoop.hx",97,0x4a7d9295)
HX_LOCAL_STACK_FRAME(_hx_pos_c09dd4c76a148f98_117_injectIntoEventLoop,"haxe.MainLoop","injectIntoEventLoop",0x7b532744,"haxe.MainLoop.injectIntoEventLoop","/usr/local/lib/haxe/std/haxe/MainLoop.hx",117,0x4a7d9295)
HX_LOCAL_STACK_FRAME(_hx_pos_c09dd4c76a148f98_110_injectIntoEventLoop,"haxe.MainLoop","injectIntoEventLoop",0x7b532744,"haxe.MainLoop.injectIntoEventLoop","/usr/local/lib/haxe/std/haxe/MainLoop.hx",110,0x4a7d9295)
HX_LOCAL_STACK_FRAME(_hx_pos_c09dd4c76a148f98_129_sortEvents,"haxe.MainLoop","sortEvents",0x1a386640,"haxe.MainLoop.sortEvents","/usr/local/lib/haxe/std/haxe/MainLoop.hx",129,0x4a7d9295)
HX_LOCAL_STACK_FRAME(_hx_pos_c09dd4c76a148f98_194_tick,"haxe.MainLoop","tick",0x9d5eafc6,"haxe.MainLoop.tick","/usr/local/lib/haxe/std/haxe/MainLoop.hx",194,0x4a7d9295)
HX_LOCAL_STACK_FRAME(_hx_pos_c09dd4c76a148f98_65_boot,"haxe.MainLoop","boot",0x917d709b,"haxe.MainLoop.boot","/usr/local/lib/haxe/std/haxe/MainLoop.hx",65,0x4a7d9295)
HX_LOCAL_STACK_FRAME(_hx_pos_c09dd4c76a148f98_66_boot,"haxe.MainLoop","boot",0x917d709b,"haxe.MainLoop.boot","/usr/local/lib/haxe/std/haxe/MainLoop.hx",66,0x4a7d9295)
namespace haxe{

void MainLoop_obj::__construct() { }

Dynamic MainLoop_obj::__CreateEmpty() { return new MainLoop_obj; }

void *MainLoop_obj::_hx_vtable = 0;

Dynamic MainLoop_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainLoop_obj > _hx_result = new MainLoop_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MainLoop_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c7b74e7;
}

 ::sys::thread::_EventLoop::RegularEvent MainLoop_obj::eventLoopHandler;

 ::sys::thread::Mutex MainLoop_obj::mutex;

 ::sys::thread::_Thread::HaxeThread MainLoop_obj::mainThread;

 ::haxe::MainEvent MainLoop_obj::pending;

bool MainLoop_obj::hasEvents(){
            	HX_STACKFRAME(&_hx_pos_c09dd4c76a148f98_76_hasEvents)
HXLINE(  77)		 ::haxe::MainEvent p = ::haxe::MainLoop_obj::pending;
HXLINE(  78)		while(::hx::IsNotNull( p )){
HXLINE(  79)			if (p->isBlocking) {
HXLINE(  80)				return true;
            			}
HXLINE(  81)			p = p->next;
            		}
HXLINE(  83)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MainLoop_obj,hasEvents,return )

 ::haxe::MainEvent MainLoop_obj::add( ::Dynamic f,::hx::Null< int >  __o_priority){
            		int priority = __o_priority.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_c09dd4c76a148f98_97_add)
HXLINE(  98)		if (::hx::IsNull( f )) {
HXLINE(  99)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Event function is null",5b,98,d0,36)));
            		}
HXLINE( 100)		 ::haxe::MainEvent e =  ::haxe::MainEvent_obj::__alloc( HX_CTX ,f,priority);
HXLINE( 101)		 ::haxe::MainEvent head = ::haxe::MainLoop_obj::pending;
HXLINE( 102)		if (::hx::IsNotNull( head )) {
HXLINE( 103)			head->prev = e;
            		}
HXLINE( 104)		e->next = head;
HXLINE( 105)		::haxe::MainLoop_obj::pending = e;
HXLINE( 106)		::haxe::MainLoop_obj::injectIntoEventLoop(0);
HXLINE( 107)		return e;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MainLoop_obj,add,return )

void MainLoop_obj::injectIntoEventLoop(int waitMs){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_c09dd4c76a148f98_117_injectIntoEventLoop)
HXLINE( 118)			Float wait = ::haxe::MainLoop_obj::tick();
HXLINE( 119)			if (::haxe::MainLoop_obj::hasEvents()) {
HXLINE( 120)				::haxe::MainLoop_obj::injectIntoEventLoop(::Std_obj::_hx_int((wait * ( (Float)(1000) ))));
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_c09dd4c76a148f98_110_injectIntoEventLoop)
HXLINE( 112)		::haxe::MainLoop_obj::mutex->acquire();
HXLINE( 113)		if (::hx::IsNotNull( ::haxe::MainLoop_obj::eventLoopHandler )) {
HXLINE( 114)			::sys::thread::_Thread::Thread_Impl__obj::get_events(::haxe::MainLoop_obj::mainThread)->cancel(::haxe::MainLoop_obj::eventLoopHandler);
            		}
HXLINE( 116)		::haxe::MainLoop_obj::eventLoopHandler = ::sys::thread::_Thread::Thread_Impl__obj::get_events(::haxe::MainLoop_obj::mainThread)->repeat( ::Dynamic(new _hx_Closure_0()),waitMs);
HXLINE( 125)		::haxe::MainLoop_obj::mutex->release();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MainLoop_obj,injectIntoEventLoop,(void))

void MainLoop_obj::sortEvents(){
            	HX_STACKFRAME(&_hx_pos_c09dd4c76a148f98_129_sortEvents)
HXLINE( 133)		 ::haxe::MainEvent list = ::haxe::MainLoop_obj::pending;
HXLINE( 135)		if (::hx::IsNull( list )) {
HXLINE( 136)			return;
            		}
HXLINE( 138)		int insize = 1;
HXDLIN( 138)		int nmerges;
HXDLIN( 138)		int psize = 0;
HXDLIN( 138)		int qsize = 0;
HXLINE( 139)		 ::haxe::MainEvent p;
HXDLIN( 139)		 ::haxe::MainEvent q;
HXDLIN( 139)		 ::haxe::MainEvent e;
HXDLIN( 139)		 ::haxe::MainEvent tail;
HXLINE( 141)		while(true){
HXLINE( 142)			p = list;
HXLINE( 143)			list = null();
HXLINE( 144)			tail = null();
HXLINE( 145)			nmerges = 0;
HXLINE( 146)			while(::hx::IsNotNull( p )){
HXLINE( 147)				nmerges = (nmerges + 1);
HXLINE( 148)				q = p;
HXLINE( 149)				psize = 0;
HXLINE( 150)				{
HXLINE( 150)					int _g = 0;
HXDLIN( 150)					int _g1 = insize;
HXDLIN( 150)					while((_g < _g1)){
HXLINE( 150)						_g = (_g + 1);
HXDLIN( 150)						int i = (_g - 1);
HXLINE( 151)						psize = (psize + 1);
HXLINE( 152)						q = q->next;
HXLINE( 153)						if (::hx::IsNull( q )) {
HXLINE( 154)							goto _hx_goto_7;
            						}
            					}
            					_hx_goto_7:;
            				}
HXLINE( 156)				qsize = insize;
HXLINE( 157)				while(true){
HXLINE( 157)					bool _hx_tmp;
HXDLIN( 157)					if ((psize <= 0)) {
HXLINE( 157)						if ((qsize > 0)) {
HXLINE( 157)							_hx_tmp = ::hx::IsNotNull( q );
            						}
            						else {
HXLINE( 157)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE( 157)						_hx_tmp = true;
            					}
HXDLIN( 157)					if (!(_hx_tmp)) {
HXLINE( 157)						goto _hx_goto_8;
            					}
HXLINE( 158)					if ((psize == 0)) {
HXLINE( 159)						e = q;
HXLINE( 160)						q = q->next;
HXLINE( 161)						qsize = (qsize - 1);
            					}
            					else {
HXLINE( 162)						bool _hx_tmp;
HXDLIN( 162)						bool _hx_tmp1;
HXDLIN( 162)						if ((qsize != 0)) {
HXLINE( 162)							_hx_tmp1 = ::hx::IsNull( q );
            						}
            						else {
HXLINE( 162)							_hx_tmp1 = true;
            						}
HXDLIN( 162)						if (!(_hx_tmp1)) {
HXLINE( 164)							if ((p->priority <= q->priority)) {
HXLINE( 164)								if ((p->priority == q->priority)) {
HXLINE( 162)									_hx_tmp = (p->nextRun <= q->nextRun);
            								}
            								else {
HXLINE( 162)									_hx_tmp = false;
            								}
            							}
            							else {
HXLINE( 162)								_hx_tmp = true;
            							}
            						}
            						else {
HXLINE( 162)							_hx_tmp = true;
            						}
HXDLIN( 162)						if (_hx_tmp) {
HXLINE( 165)							e = p;
HXLINE( 166)							p = p->next;
HXLINE( 167)							psize = (psize - 1);
            						}
            						else {
HXLINE( 169)							e = q;
HXLINE( 170)							q = q->next;
HXLINE( 171)							qsize = (qsize - 1);
            						}
            					}
HXLINE( 173)					if (::hx::IsNotNull( tail )) {
HXLINE( 174)						tail->next = e;
            					}
            					else {
HXLINE( 176)						list = e;
            					}
HXLINE( 177)					e->prev = tail;
HXLINE( 178)					tail = e;
            				}
            				_hx_goto_8:;
HXLINE( 180)				p = q;
            			}
HXLINE( 182)			tail->next = null();
HXLINE( 183)			if ((nmerges <= 1)) {
HXLINE( 184)				goto _hx_goto_5;
            			}
HXLINE( 185)			insize = (insize * 2);
            		}
            		_hx_goto_5:;
HXLINE( 187)		list->prev = null();
HXLINE( 188)		::haxe::MainLoop_obj::pending = list;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MainLoop_obj,sortEvents,(void))

Float MainLoop_obj::tick(){
            	HX_STACKFRAME(&_hx_pos_c09dd4c76a148f98_194_tick)
HXLINE( 195)		::haxe::MainLoop_obj::sortEvents();
HXLINE( 196)		 ::haxe::MainEvent e = ::haxe::MainLoop_obj::pending;
HXLINE( 197)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 197)		Float now;
HXDLIN( 197)		if ((timer > 0)) {
HXLINE( 197)			now = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE( 197)			now = ( (Float)(0) );
            		}
HXLINE( 198)		Float wait = ((Float)1e9);
HXLINE( 199)		while(::hx::IsNotNull( e )){
HXLINE( 200)			 ::haxe::MainEvent next = e->next;
HXLINE( 201)			Float wt = (e->nextRun - now);
HXLINE( 202)			if ((wt <= 0)) {
HXLINE( 203)				wait = ( (Float)(0) );
HXLINE( 204)				if (::hx::IsNotNull( e->f )) {
HXLINE( 204)					e->f();
            				}
            			}
            			else {
HXLINE( 205)				if ((wait > wt)) {
HXLINE( 206)					wait = wt;
            				}
            			}
HXLINE( 207)			e = next;
            		}
HXLINE( 209)		return wait;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MainLoop_obj,tick,return )


MainLoop_obj::MainLoop_obj()
{
}

bool MainLoop_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { outValue = add_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tick") ) { outValue = tick_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { outValue = ( mutex ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pending") ) { outValue = ( pending ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasEvents") ) { outValue = hasEvents_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mainThread") ) { outValue = ( mainThread ); return true; }
		if (HX_FIELD_EQ(inName,"sortEvents") ) { outValue = sortEvents_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"eventLoopHandler") ) { outValue = ( eventLoopHandler ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"injectIntoEventLoop") ) { outValue = injectIntoEventLoop_dyn(); return true; }
	}
	return false;
}

bool MainLoop_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { mutex=ioValue.Cast<  ::sys::thread::Mutex >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pending") ) { pending=ioValue.Cast<  ::haxe::MainEvent >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mainThread") ) { mainThread=ioValue.Cast<  ::sys::thread::_Thread::HaxeThread >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"eventLoopHandler") ) { eventLoopHandler=ioValue.Cast<  ::sys::thread::_EventLoop::RegularEvent >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MainLoop_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo MainLoop_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::sys::thread::_EventLoop::RegularEvent */ ,(void *) &MainLoop_obj::eventLoopHandler,HX_("eventLoopHandler",cc,77,08,06)},
	{::hx::fsObject /*  ::sys::thread::Mutex */ ,(void *) &MainLoop_obj::mutex,HX_("mutex",7f,8f,5b,10)},
	{::hx::fsObject /*  ::sys::thread::_Thread::HaxeThread */ ,(void *) &MainLoop_obj::mainThread,HX_("mainThread",e3,97,65,e4)},
	{::hx::fsObject /*  ::haxe::MainEvent */ ,(void *) &MainLoop_obj::pending,HX_("pending",57,98,ec,2b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void MainLoop_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainLoop_obj::eventLoopHandler,"eventLoopHandler");
	HX_MARK_MEMBER_NAME(MainLoop_obj::mutex,"mutex");
	HX_MARK_MEMBER_NAME(MainLoop_obj::mainThread,"mainThread");
	HX_MARK_MEMBER_NAME(MainLoop_obj::pending,"pending");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MainLoop_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainLoop_obj::eventLoopHandler,"eventLoopHandler");
	HX_VISIT_MEMBER_NAME(MainLoop_obj::mutex,"mutex");
	HX_VISIT_MEMBER_NAME(MainLoop_obj::mainThread,"mainThread");
	HX_VISIT_MEMBER_NAME(MainLoop_obj::pending,"pending");
};

#endif

::hx::Class MainLoop_obj::__mClass;

static ::String MainLoop_obj_sStaticFields[] = {
	HX_("eventLoopHandler",cc,77,08,06),
	HX_("mutex",7f,8f,5b,10),
	HX_("mainThread",e3,97,65,e4),
	HX_("pending",57,98,ec,2b),
	HX_("hasEvents",13,02,53,d7),
	HX_("add",21,f2,49,00),
	HX_("injectIntoEventLoop",8d,b5,ea,1d),
	HX_("sortEvents",17,c5,4f,f3),
	HX_("tick",5d,c3,fc,4c),
	::String(null())
};

void MainLoop_obj::__register()
{
	MainLoop_obj _hx_dummy;
	MainLoop_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.MainLoop",a5,cc,ab,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MainLoop_obj::__GetStatic;
	__mClass->mSetStaticField = &MainLoop_obj::__SetStatic;
	__mClass->mMarkFunc = MainLoop_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MainLoop_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< MainLoop_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MainLoop_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainLoop_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainLoop_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MainLoop_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_c09dd4c76a148f98_65_boot)
HXDLIN(  65)		mutex =  ::sys::thread::Mutex_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_c09dd4c76a148f98_66_boot)
HXDLIN(  66)		mainThread = ::sys::thread::_Thread::HaxeThread_obj::current();
            	}
}

} // end namespace haxe
