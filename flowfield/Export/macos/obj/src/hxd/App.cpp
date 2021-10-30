#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h2d_Layers
#include <h2d/Layers.h>
#endif
#ifndef INCLUDED_h2d_Object
#include <h2d/Object.h>
#endif
#ifndef INCLUDED_h2d_Scene
#include <h2d/Scene.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_IDrawable
#include <h3d/IDrawable.h>
#endif
#ifndef INCLUDED_h3d_scene_Object
#include <h3d/scene/Object.h>
#endif
#ifndef INCLUDED_h3d_scene_Scene
#include <h3d/scene/Scene.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_hxd_App
#include <hxd/App.h>
#endif
#ifndef INCLUDED_hxd_InteractiveScene
#include <hxd/InteractiveScene.h>
#endif
#ifndef INCLUDED_hxd_Key
#include <hxd/Key.h>
#endif
#ifndef INCLUDED_hxd_SceneEvents
#include <hxd/SceneEvents.h>
#endif
#ifndef INCLUDED_hxd_System
#include <hxd/System.h>
#endif
#ifndef INCLUDED_hxd_Timer
#include <hxd/Timer.h>
#endif
#ifndef INCLUDED_hxd_Window
#include <hxd/Window.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_75b53e51d1efa6a3_38_new,"hxd.App","new",0x1d2972d9,"hxd.App.new","hxd/App.hx",38,0xbdcde178)
HX_DEFINE_STACK_FRAME(_hx_pos_75b53e51d1efa6a3_45_new,"hxd.App","new",0x1d2972d9,"hxd.App.new","hxd/App.hx",45,0xbdcde178)
HX_LOCAL_STACK_FRAME(_hx_pos_75b53e51d1efa6a3_59_onResize,"hxd.App","onResize",0x58d6175a,"hxd.App.onResize","hxd/App.hx",59,0xbdcde178)
HX_LOCAL_STACK_FRAME(_hx_pos_75b53e51d1efa6a3_66_setScene,"hxd.App","setScene",0xf7b40931,"hxd.App.setScene","hxd/App.hx",66,0xbdcde178)
HX_LOCAL_STACK_FRAME(_hx_pos_75b53e51d1efa6a3_98_setCurrent,"hxd.App","setCurrent",0x6b9d4f5e,"hxd.App.setCurrent","hxd/App.hx",98,0xbdcde178)
HX_LOCAL_STACK_FRAME(_hx_pos_75b53e51d1efa6a3_94_setCurrent,"hxd.App","setCurrent",0x6b9d4f5e,"hxd.App.setCurrent","hxd/App.hx",94,0xbdcde178)
HX_LOCAL_STACK_FRAME(_hx_pos_75b53e51d1efa6a3_106_setScene2D,"hxd.App","setScene2D",0x53ada343,"hxd.App.setScene2D","hxd/App.hx",106,0xbdcde178)
HX_LOCAL_STACK_FRAME(_hx_pos_75b53e51d1efa6a3_114_setScene3D,"hxd.App","setScene3D",0x53ada422,"hxd.App.setScene3D","hxd/App.hx",114,0xbdcde178)
HX_LOCAL_STACK_FRAME(_hx_pos_75b53e51d1efa6a3_122_render,"hxd.App","render",0x3fffda7d,"hxd.App.render","hxd/App.hx",122,0xbdcde178)
HX_LOCAL_STACK_FRAME(_hx_pos_75b53e51d1efa6a3_130_setup,"hxd.App","setup",0xb18da136,"hxd.App.setup","hxd/App.hx",130,0xbdcde178)
HX_LOCAL_STACK_FRAME(_hx_pos_75b53e51d1efa6a3_140_setup,"hxd.App","setup",0xb18da136,"hxd.App.setup","hxd/App.hx",140,0xbdcde178)
HX_LOCAL_STACK_FRAME(_hx_pos_75b53e51d1efa6a3_127_setup,"hxd.App","setup",0xb18da136,"hxd.App.setup","hxd/App.hx",127,0xbdcde178)
static const bool _hx_array_data_92371267_12[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_75b53e51d1efa6a3_150_dispose,"hxd.App","dispose",0xfc175398,"hxd.App.dispose","hxd/App.hx",150,0xbdcde178)
HX_LOCAL_STACK_FRAME(_hx_pos_75b53e51d1efa6a3_170_loadAssets,"hxd.App","loadAssets",0x4e0905f0,"hxd.App.loadAssets","hxd/App.hx",170,0xbdcde178)
HX_LOCAL_STACK_FRAME(_hx_pos_75b53e51d1efa6a3_180_init,"hxd.App","init",0x63d3c277,"hxd.App.init","hxd/App.hx",180,0xbdcde178)
HX_LOCAL_STACK_FRAME(_hx_pos_75b53e51d1efa6a3_183_mainLoop,"hxd.App","mainLoop",0x10e7e224,"hxd.App.mainLoop","hxd/App.hx",183,0xbdcde178)
HX_LOCAL_STACK_FRAME(_hx_pos_75b53e51d1efa6a3_204_update,"hxd.App","update",0xc1dbf530,"hxd.App.update","hxd/App.hx",204,0xbdcde178)
HX_LOCAL_STACK_FRAME(_hx_pos_75b53e51d1efa6a3_207_staticHandler,"hxd.App","staticHandler",0xcefce075,"hxd.App.staticHandler","hxd/App.hx",207,0xbdcde178)
namespace hxd{

void App_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_75b53e51d1efa6a3_38_new)
HXDLIN(  38)		 ::hxd::App _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  39)		::Array< ::Dynamic> engine = ::Array_obj< ::Dynamic>::__new(1)->init(0,::h3d::Engine_obj::CURRENT);
HXLINE(  40)		if (::hx::IsNotNull( engine->__get(0).StaticCast<  ::h3d::Engine >() )) {
HXLINE(  41)			this->engine = engine->__get(0).StaticCast<  ::h3d::Engine >();
HXLINE(  42)			engine->__get(0).StaticCast<  ::h3d::Engine >()->onReady = this->setup_dyn();
HXLINE(  43)			::haxe::Timer_obj::delay(this->setup_dyn(),0);
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::hxd::App,_gthis,::Array< ::Dynamic>,engine) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_75b53e51d1efa6a3_45_new)
HXLINE(  46)				_gthis->engine = (engine[0] =  ::h3d::Engine_obj::__alloc( HX_CTX ));
HXLINE(  47)				engine->__get(0).StaticCast<  ::h3d::Engine >()->onReady = _gthis->setup_dyn();
HXLINE(  48)				engine->__get(0).StaticCast<  ::h3d::Engine >()->init();
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE(  45)			::hxd::System_obj::start( ::Dynamic(new _hx_Closure_0(_gthis,engine)));
            		}
            	}

Dynamic App_obj::__CreateEmpty() { return new App_obj; }

void *App_obj::_hx_vtable = 0;

Dynamic App_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< App_obj > _hx_result = new App_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool App_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4b589375;
}

static ::h3d::IDrawable_obj _hx_hxd_App__hx_h3d_IDrawable= {
	( void (::hx::Object::*)( ::h3d::Engine))&::hxd::App_obj::render,
};

void *App_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd84ebfae: return &_hx_hxd_App__hx_h3d_IDrawable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void App_obj::onResize(){
            	HX_STACKFRAME(&_hx_pos_75b53e51d1efa6a3_59_onResize)
            	}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,onResize,(void))

void App_obj::setScene(::Dynamic scene,::hx::Null< bool >  __o_disposePrevious){
            		bool disposePrevious = __o_disposePrevious.Default(true);
            	HX_STACKFRAME(&_hx_pos_75b53e51d1efa6a3_66_setScene)
HXLINE(  67)		 ::h2d::Scene new2D = ( ( ::h2d::Scene)(::Std_obj::downcast(scene,::hx::ClassOf< ::h2d::Scene >())) );
HXLINE(  68)		 ::h3d::scene::Scene new3D = ( ( ::h3d::scene::Scene)(::Std_obj::downcast(scene,::hx::ClassOf< ::h3d::scene::Scene >())) );
HXLINE(  69)		if (::hx::IsNotNull( new2D )) {
HXLINE(  70)			this->sevents->removeScene(this->s2d);
HXLINE(  71)			this->sevents->addScene(scene,0);
            		}
            		else {
HXLINE(  73)			if (::hx::IsNotNull( new3D )) {
HXLINE(  74)				this->sevents->removeScene(this->s3d);
            			}
HXLINE(  75)			this->sevents->addScene(scene,null());
            		}
HXLINE(  77)		if (disposePrevious) {
HXLINE(  78)			if (::hx::IsNotNull( new2D )) {
HXLINE(  79)				this->s2d->dispose();
            			}
            			else {
HXLINE(  80)				if (::hx::IsNotNull( new3D )) {
HXLINE(  81)					this->s3d->dispose();
            				}
            				else {
HXLINE(  83)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Can't dispose previous scene",67,40,92,4d)));
            				}
            			}
            		}
HXLINE(  85)		if (::hx::IsNotNull( new2D )) {
HXLINE(  86)			this->s2d = new2D;
            		}
HXLINE(  87)		if (::hx::IsNotNull( new3D )) {
HXLINE(  88)			this->s3d = new3D;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(App_obj,setScene,(void))

void App_obj::setCurrent(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::hxd::App,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_75b53e51d1efa6a3_98_setCurrent)
HXLINE(  99)			if (::hx::IsNull( _gthis->s2d )) {
HXLINE(  99)				return;
            			}
HXLINE( 100)			_gthis->s2d->checkResize();
HXLINE( 101)			_gthis->onResize();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_75b53e51d1efa6a3_94_setCurrent)
HXDLIN(  94)		 ::hxd::App _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  95)		this->engine = ::h3d::Engine_obj::CURRENT;
HXLINE(  96)		this->isDisposed = false;
HXLINE(  97)		this->engine->onReady = ::hxd::App_obj::staticHandler_dyn();
HXLINE(  98)		this->engine->onResized =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 103)		::hxd::System_obj::setLoop(this->mainLoop_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,setCurrent,(void))

void App_obj::setScene2D( ::h2d::Scene s2d,::hx::Null< bool >  __o_disposePrevious){
            		bool disposePrevious = __o_disposePrevious.Default(true);
            	HX_STACKFRAME(&_hx_pos_75b53e51d1efa6a3_106_setScene2D)
HXLINE( 107)		this->sevents->removeScene(this->s2d);
HXLINE( 108)		this->sevents->addScene(s2d,0);
HXLINE( 109)		if (disposePrevious) {
HXLINE( 110)			this->s2d->dispose();
            		}
HXLINE( 111)		this->s2d = s2d;
            	}


HX_DEFINE_DYNAMIC_FUNC2(App_obj,setScene2D,(void))

void App_obj::setScene3D( ::h3d::scene::Scene s3d,::hx::Null< bool >  __o_disposePrevious){
            		bool disposePrevious = __o_disposePrevious.Default(true);
            	HX_STACKFRAME(&_hx_pos_75b53e51d1efa6a3_114_setScene3D)
HXLINE( 115)		this->sevents->removeScene(this->s3d);
HXLINE( 116)		this->sevents->addScene(s3d,null());
HXLINE( 117)		if (disposePrevious) {
HXLINE( 118)			this->s3d->dispose();
            		}
HXLINE( 119)		this->s3d = s3d;
            	}


HX_DEFINE_DYNAMIC_FUNC2(App_obj,setScene3D,(void))

void App_obj::render( ::h3d::Engine e){
            	HX_STACKFRAME(&_hx_pos_75b53e51d1efa6a3_122_render)
HXLINE( 123)		this->s3d->render(e);
HXLINE( 124)		this->s2d->render(e);
            	}


HX_DEFINE_DYNAMIC_FUNC1(App_obj,render,(void))

void App_obj::setup(){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::hxd::App,_gthis,::Array< bool >,initDone) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_75b53e51d1efa6a3_130_setup)
HXLINE( 131)			if (::hx::IsNull( _gthis->s2d )) {
HXLINE( 131)				return;
            			}
HXLINE( 132)			_gthis->s2d->checkResize();
HXLINE( 133)			if (initDone->__get(0)) {
HXLINE( 133)				_gthis->onResize();
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::hxd::App,_gthis,::Array< bool >,initDone) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_75b53e51d1efa6a3_140_setup)
HXLINE( 141)			initDone[0] = true;
HXLINE( 142)			_gthis->init();
HXLINE( 143)			::hxd::Timer_obj::skip();
HXLINE( 144)			_gthis->mainLoop();
HXLINE( 145)			::hxd::System_obj::setLoop(_gthis->mainLoop_dyn());
HXLINE( 146)			::hxd::Key_obj::initialize();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_75b53e51d1efa6a3_127_setup)
HXDLIN( 127)		 ::hxd::App _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 128)		::Array< bool > initDone = ::Array_obj< bool >::fromData( _hx_array_data_92371267_12,1);
HXLINE( 129)		this->engine->onReady = ::hxd::App_obj::staticHandler_dyn();
HXLINE( 130)		this->engine->onResized =  ::Dynamic(new _hx_Closure_0(_gthis,initDone));
HXLINE( 135)		this->s3d =  ::h3d::scene::Scene_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 136)		this->s2d =  ::h2d::Scene_obj::__alloc( HX_CTX );
HXLINE( 137)		this->sevents =  ::hxd::SceneEvents_obj::__alloc( HX_CTX ,null());
HXLINE( 138)		this->sevents->addScene(this->s2d,null());
HXLINE( 139)		this->sevents->addScene(this->s3d,null());
HXLINE( 140)		this->loadAssets( ::Dynamic(new _hx_Closure_1(_gthis,initDone)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,setup,(void))

void App_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_75b53e51d1efa6a3_150_dispose)
HXLINE( 151)		this->engine->onResized = ::hxd::App_obj::staticHandler_dyn();
HXLINE( 152)		this->engine->onContextLost = ::hxd::App_obj::staticHandler_dyn();
HXLINE( 153)		this->isDisposed = true;
HXLINE( 154)		if (::hx::IsNotNull( this->s2d )) {
HXLINE( 154)			this->s2d->dispose();
            		}
HXLINE( 155)		if (::hx::IsNotNull( this->s3d )) {
HXLINE( 155)			this->s3d->dispose();
            		}
HXLINE( 156)		if (::hx::IsNotNull( this->sevents )) {
HXLINE( 156)			this->sevents->dispose();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,dispose,(void))

void App_obj::loadAssets( ::Dynamic onLoaded){
            	HX_STACKFRAME(&_hx_pos_75b53e51d1efa6a3_170_loadAssets)
HXDLIN( 170)		onLoaded();
            	}


HX_DEFINE_DYNAMIC_FUNC1(App_obj,loadAssets,(void))

void App_obj::init(){
            	HX_STACKFRAME(&_hx_pos_75b53e51d1efa6a3_180_init)
            	}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,init,(void))

void App_obj::mainLoop(){
            	HX_STACKFRAME(&_hx_pos_75b53e51d1efa6a3_183_mainLoop)
HXLINE( 184)		::hxd::Timer_obj::update();
HXLINE( 185)		this->sevents->checkEvents();
HXLINE( 186)		if (this->isDisposed) {
HXLINE( 186)			return;
            		}
HXLINE( 187)		this->update(::hxd::Timer_obj::dt);
HXLINE( 188)		if (this->isDisposed) {
HXLINE( 188)			return;
            		}
HXLINE( 189)		Float dt = ::hxd::Timer_obj::dt;
HXLINE( 190)		if (::hx::IsNotNull( this->s2d )) {
HXLINE( 190)			this->s2d->setElapsedTime(dt);
            		}
HXLINE( 191)		if (::hx::IsNotNull( this->s3d )) {
HXLINE( 191)			this->s3d->setElapsedTime(dt);
            		}
HXLINE( 192)		this->engine->render(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,mainLoop,(void))

void App_obj::update(Float dt){
            	HX_STACKFRAME(&_hx_pos_75b53e51d1efa6a3_204_update)
            	}


HX_DEFINE_DYNAMIC_FUNC1(App_obj,update,(void))

void App_obj::staticHandler(){
            	HX_STACKFRAME(&_hx_pos_75b53e51d1efa6a3_207_staticHandler)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(App_obj,staticHandler,(void))


::hx::ObjectPtr< App_obj > App_obj::__new() {
	::hx::ObjectPtr< App_obj > __this = new App_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< App_obj > App_obj::__alloc(::hx::Ctx *_hx_ctx) {
	App_obj *__this = (App_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(App_obj), true, "hxd.App"));
	*(void **)__this = App_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

App_obj::App_obj()
{
}

void App_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(App);
	HX_MARK_MEMBER_NAME(engine,"engine");
	HX_MARK_MEMBER_NAME(s3d,"s3d");
	HX_MARK_MEMBER_NAME(s2d,"s2d");
	HX_MARK_MEMBER_NAME(sevents,"sevents");
	HX_MARK_MEMBER_NAME(isDisposed,"isDisposed");
	HX_MARK_END_CLASS();
}

void App_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(engine,"engine");
	HX_VISIT_MEMBER_NAME(s3d,"s3d");
	HX_VISIT_MEMBER_NAME(s2d,"s2d");
	HX_VISIT_MEMBER_NAME(sevents,"sevents");
	HX_VISIT_MEMBER_NAME(isDisposed,"isDisposed");
}

::hx::Val App_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"s3d") ) { return ::hx::Val( s3d ); }
		if (HX_FIELD_EQ(inName,"s2d") ) { return ::hx::Val( s2d ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"setup") ) { return ::hx::Val( setup_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"engine") ) { return ::hx::Val( engine ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sevents") ) { return ::hx::Val( sevents ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResize") ) { return ::hx::Val( onResize_dyn() ); }
		if (HX_FIELD_EQ(inName,"setScene") ) { return ::hx::Val( setScene_dyn() ); }
		if (HX_FIELD_EQ(inName,"mainLoop") ) { return ::hx::Val( mainLoop_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isDisposed") ) { return ::hx::Val( isDisposed ); }
		if (HX_FIELD_EQ(inName,"setCurrent") ) { return ::hx::Val( setCurrent_dyn() ); }
		if (HX_FIELD_EQ(inName,"setScene2D") ) { return ::hx::Val( setScene2D_dyn() ); }
		if (HX_FIELD_EQ(inName,"setScene3D") ) { return ::hx::Val( setScene3D_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadAssets") ) { return ::hx::Val( loadAssets_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool App_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"staticHandler") ) { outValue = staticHandler_dyn(); return true; }
	}
	return false;
}

::hx::Val App_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"s3d") ) { s3d=inValue.Cast<  ::h3d::scene::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s2d") ) { s2d=inValue.Cast<  ::h2d::Scene >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"engine") ) { engine=inValue.Cast<  ::h3d::Engine >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sevents") ) { sevents=inValue.Cast<  ::hxd::SceneEvents >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isDisposed") ) { isDisposed=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void App_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("engine",c2,47,84,fc));
	outFields->push(HX_("s3d",04,70,57,00));
	outFields->push(HX_("s2d",25,6f,57,00));
	outFields->push(HX_("sevents",cc,a7,8e,44));
	outFields->push(HX_("isDisposed",ef,1c,53,a2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo App_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::Engine */ ,(int)offsetof(App_obj,engine),HX_("engine",c2,47,84,fc)},
	{::hx::fsObject /*  ::h3d::scene::Scene */ ,(int)offsetof(App_obj,s3d),HX_("s3d",04,70,57,00)},
	{::hx::fsObject /*  ::h2d::Scene */ ,(int)offsetof(App_obj,s2d),HX_("s2d",25,6f,57,00)},
	{::hx::fsObject /*  ::hxd::SceneEvents */ ,(int)offsetof(App_obj,sevents),HX_("sevents",cc,a7,8e,44)},
	{::hx::fsBool,(int)offsetof(App_obj,isDisposed),HX_("isDisposed",ef,1c,53,a2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *App_obj_sStaticStorageInfo = 0;
#endif

static ::String App_obj_sMemberFields[] = {
	HX_("engine",c2,47,84,fc),
	HX_("s3d",04,70,57,00),
	HX_("s2d",25,6f,57,00),
	HX_("sevents",cc,a7,8e,44),
	HX_("isDisposed",ef,1c,53,a2),
	HX_("onResize",73,50,28,e8),
	HX_("setScene",4a,42,06,87),
	HX_("setCurrent",b7,c0,c2,1e),
	HX_("setScene2D",9c,14,d3,06),
	HX_("setScene3D",7b,15,d3,06),
	HX_("render",56,6b,29,05),
	HX_("setup",7d,ae,2f,7a),
	HX_("dispose",9f,80,4c,bb),
	HX_("loadAssets",49,77,2e,01),
	HX_("init",10,3b,bb,45),
	HX_("mainLoop",3d,1b,3a,a0),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class App_obj::__mClass;

static ::String App_obj_sStaticFields[] = {
	HX_("staticHandler",bc,0c,e8,cc),
	::String(null())
};

void App_obj::__register()
{
	App_obj _hx_dummy;
	App_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.App",67,12,37,92);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &App_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(App_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(App_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< App_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = App_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = App_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
