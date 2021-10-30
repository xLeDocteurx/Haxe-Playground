#include <hxcpp.h>

#ifndef INCLUDED_h3d_IDrawable
#include <h3d/IDrawable.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
#ifndef INCLUDED_h3d_scene_Interactive
#include <h3d/scene/Interactive.h>
#endif
#ifndef INCLUDED_h3d_scene_Object
#include <h3d/scene/Object.h>
#endif
#ifndef INCLUDED_h3d_scene_Scene
#include <h3d/scene/Scene.h>
#endif
#ifndef INCLUDED_hxd_Cursor
#include <hxd/Cursor.h>
#endif
#ifndef INCLUDED_hxd_Event
#include <hxd/Event.h>
#endif
#ifndef INCLUDED_hxd_EventKind
#include <hxd/EventKind.h>
#endif
#ifndef INCLUDED_hxd_Interactive
#include <hxd/Interactive.h>
#endif
#ifndef INCLUDED_hxd_InteractiveScene
#include <hxd/InteractiveScene.h>
#endif
#ifndef INCLUDED_hxd_SceneEvents
#include <hxd/SceneEvents.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_75547bc61c2b3402_3_new,"h3d.scene.Interactive","new",0x85e87b9d,"h3d.scene.Interactive.new","h3d/scene/Interactive.hx",3,0x8cb4acb5)
HX_LOCAL_STACK_FRAME(_hx_pos_75547bc61c2b3402_45_onAdd,"h3d.scene.Interactive","onAdd",0xc6e53abf,"h3d.scene.Interactive.onAdd","h3d/scene/Interactive.hx",45,0x8cb4acb5)
HX_LOCAL_STACK_FRAME(_hx_pos_75547bc61c2b3402_51_onRemove,"h3d.scene.Interactive","onRemove",0x109a0a66,"h3d.scene.Interactive.onRemove","h3d/scene/Interactive.hx",51,0x8cb4acb5)
HX_LOCAL_STACK_FRAME(_hx_pos_75547bc61c2b3402_63_preventClick,"h3d.scene.Interactive","preventClick",0xa341c373,"h3d.scene.Interactive.preventClick","h3d/scene/Interactive.hx",63,0x8cb4acb5)
HX_LOCAL_STACK_FRAME(_hx_pos_75547bc61c2b3402_67_getInteractiveScene,"h3d.scene.Interactive","getInteractiveScene",0x47ca95fd,"h3d.scene.Interactive.getInteractiveScene","h3d/scene/Interactive.hx",67,0x8cb4acb5)
HX_LOCAL_STACK_FRAME(_hx_pos_75547bc61c2b3402_70_handleEvent,"h3d.scene.Interactive","handleEvent",0xe64c238f,"h3d.scene.Interactive.handleEvent","h3d/scene/Interactive.hx",70,0x8cb4acb5)
HX_LOCAL_STACK_FRAME(_hx_pos_75547bc61c2b3402_117_set_cursor,"h3d.scene.Interactive","set_cursor",0x9b198376,"h3d.scene.Interactive.set_cursor","h3d/scene/Interactive.hx",117,0x8cb4acb5)
HX_LOCAL_STACK_FRAME(_hx_pos_75547bc61c2b3402_124_focus,"h3d.scene.Interactive","focus",0x990d1455,"h3d.scene.Interactive.focus","h3d/scene/Interactive.hx",124,0x8cb4acb5)
HX_LOCAL_STACK_FRAME(_hx_pos_75547bc61c2b3402_131_blur,"h3d.scene.Interactive","blur",0x9d9a6cca,"h3d.scene.Interactive.blur","h3d/scene/Interactive.hx",131,0x8cb4acb5)
HX_LOCAL_STACK_FRAME(_hx_pos_75547bc61c2b3402_135_isOver,"h3d.scene.Interactive","isOver",0xc5d98f41,"h3d.scene.Interactive.isOver","h3d/scene/Interactive.hx",135,0x8cb4acb5)
HX_LOCAL_STACK_FRAME(_hx_pos_75547bc61c2b3402_139_hasFocus,"h3d.scene.Interactive","hasFocus",0xbd4621c1,"h3d.scene.Interactive.hasFocus","h3d/scene/Interactive.hx",139,0x8cb4acb5)
HX_LOCAL_STACK_FRAME(_hx_pos_75547bc61c2b3402_147___default_onOver,"h3d.scene.Interactive","__default_onOver",0xa8d1bad4,"h3d.scene.Interactive.__default_onOver","h3d/scene/Interactive.hx",147,0x8cb4acb5)
HX_LOCAL_STACK_FRAME(_hx_pos_75547bc61c2b3402_153___default_onOut,"h3d.scene.Interactive","__default_onOut",0x4231270e,"h3d.scene.Interactive.__default_onOut","h3d/scene/Interactive.hx",153,0x8cb4acb5)
HX_LOCAL_STACK_FRAME(_hx_pos_75547bc61c2b3402_157___default_onPush,"h3d.scene.Interactive","__default_onPush",0xa97a3b5a,"h3d.scene.Interactive.__default_onPush","h3d/scene/Interactive.hx",157,0x8cb4acb5)
HX_LOCAL_STACK_FRAME(_hx_pos_75547bc61c2b3402_168___default_onRelease,"h3d.scene.Interactive","__default_onRelease",0x1dcf4c47,"h3d.scene.Interactive.__default_onRelease","h3d/scene/Interactive.hx",168,0x8cb4acb5)
HX_LOCAL_STACK_FRAME(_hx_pos_75547bc61c2b3402_175___default_onReleaseOutside,"h3d.scene.Interactive","__default_onReleaseOutside",0x549f8f9e,"h3d.scene.Interactive.__default_onReleaseOutside","h3d/scene/Interactive.hx",175,0x8cb4acb5)
HX_LOCAL_STACK_FRAME(_hx_pos_75547bc61c2b3402_182___default_onClick,"h3d.scene.Interactive","__default_onClick",0x1f49a2c8,"h3d.scene.Interactive.__default_onClick","h3d/scene/Interactive.hx",182,0x8cb4acb5)
HX_LOCAL_STACK_FRAME(_hx_pos_75547bc61c2b3402_185___default_onMove,"h3d.scene.Interactive","__default_onMove",0xa77a0c91,"h3d.scene.Interactive.__default_onMove","h3d/scene/Interactive.hx",185,0x8cb4acb5)
HX_LOCAL_STACK_FRAME(_hx_pos_75547bc61c2b3402_188___default_onWheel,"h3d.scene.Interactive","__default_onWheel",0xa0a55b1b,"h3d.scene.Interactive.__default_onWheel","h3d/scene/Interactive.hx",188,0x8cb4acb5)
HX_LOCAL_STACK_FRAME(_hx_pos_75547bc61c2b3402_191___default_onFocus,"h3d.scene.Interactive","__default_onFocus",0xdb748658,"h3d.scene.Interactive.__default_onFocus","h3d/scene/Interactive.hx",191,0x8cb4acb5)
HX_LOCAL_STACK_FRAME(_hx_pos_75547bc61c2b3402_194___default_onFocusLost,"h3d.scene.Interactive","__default_onFocusLost",0x3503685c,"h3d.scene.Interactive.__default_onFocusLost","h3d/scene/Interactive.hx",194,0x8cb4acb5)
HX_LOCAL_STACK_FRAME(_hx_pos_75547bc61c2b3402_197___default_onKeyUp,"h3d.scene.Interactive","__default_onKeyUp",0xb5e9e05a,"h3d.scene.Interactive.__default_onKeyUp","h3d/scene/Interactive.hx",197,0x8cb4acb5)
HX_LOCAL_STACK_FRAME(_hx_pos_75547bc61c2b3402_200___default_onKeyDown,"h3d.scene.Interactive","__default_onKeyDown",0x61293021,"h3d.scene.Interactive.__default_onKeyDown","h3d/scene/Interactive.hx",200,0x8cb4acb5)
HX_LOCAL_STACK_FRAME(_hx_pos_75547bc61c2b3402_203___default_onCheck,"h3d.scene.Interactive","__default_onCheck",0x1ca1bf48,"h3d.scene.Interactive.__default_onCheck","h3d/scene/Interactive.hx",203,0x8cb4acb5)
HX_LOCAL_STACK_FRAME(_hx_pos_75547bc61c2b3402_206___default_onTextInput,"h3d.scene.Interactive","__default_onTextInput",0x6ccbba9d,"h3d.scene.Interactive.__default_onTextInput","h3d/scene/Interactive.hx",206,0x8cb4acb5)
namespace h3d{
namespace scene{

void Interactive_obj::__construct(::Dynamic shape, ::h3d::scene::Object parent){
            	HX_GC_STACKFRAME(&_hx_pos_75547bc61c2b3402_3_new)
HXLINE(  37)		this->hitPoint =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  34)		this->mouseDownButton = -1;
HXLINE(  25)		this->propagateEvents = false;
HXLINE(  21)		this->cancelEvents = false;
HXLINE(  40)		super::__construct(parent);
HXLINE(  41)		this->shape = shape;
HXLINE(  42)		this->set_cursor(::hxd::Cursor_obj::Button_dyn());
            	}

Dynamic Interactive_obj::__CreateEmpty() { return new Interactive_obj; }

void *Interactive_obj::_hx_vtable = 0;

Dynamic Interactive_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Interactive_obj > _hx_result = new Interactive_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Interactive_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x156e9f0b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x156e9f0b;
	} else {
		return inClassId==(int)0x1797ae36;
	}
}

static ::hxd::Interactive_obj _hx_h3d_scene_Interactive__hx_hxd_Interactive= {
	(  ::hxd::Cursor (::hx::Object::*)( ::hxd::Cursor))&::h3d::scene::Interactive_obj::set_cursor,
	( void (::hx::Object::*)( ::hxd::Event))&::h3d::scene::Interactive_obj::handleEvent,
	( ::Dynamic (::hx::Object::*)())&::h3d::scene::Interactive_obj::getInteractiveScene,
};

void *Interactive_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xa0bf432e: return &_hx_h3d_scene_Interactive__hx_hxd_Interactive;
	}
	return super::_hx_getInterface(inHash);
}

void Interactive_obj::onAdd(){
            	HX_STACKFRAME(&_hx_pos_75547bc61c2b3402_45_onAdd)
HXLINE(  46)		this->scene = this->getScene();
HXLINE(  47)		if (::hx::IsNotNull( this->scene )) {
HXLINE(  47)			this->scene->addEventTarget(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(  48)		this->super::onAdd();
            	}


void Interactive_obj::onRemove(){
            	HX_STACKFRAME(&_hx_pos_75547bc61c2b3402_51_onRemove)
HXLINE(  52)		if (::hx::IsNotNull( this->scene )) {
HXLINE(  53)			this->scene->removeEventTarget(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  54)			this->scene = null();
            		}
HXLINE(  56)		this->super::onRemove();
            	}


void Interactive_obj::preventClick(){
            	HX_STACKFRAME(&_hx_pos_75547bc61c2b3402_63_preventClick)
HXDLIN(  63)		this->mouseDownButton = -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interactive_obj,preventClick,(void))

::Dynamic Interactive_obj::getInteractiveScene(){
            	HX_STACKFRAME(&_hx_pos_75547bc61c2b3402_67_getInteractiveScene)
HXDLIN(  67)		return this->scene;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interactive_obj,getInteractiveScene,return )

void Interactive_obj::handleEvent( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_75547bc61c2b3402_70_handleEvent)
HXLINE(  71)		if (this->propagateEvents) {
HXLINE(  71)			e->propagate = true;
            		}
HXLINE(  72)		if (this->cancelEvents) {
HXLINE(  72)			e->cancel = true;
            		}
HXLINE(  73)		switch((int)(e->kind->_hx_getIndex())){
            			case (int)0: {
HXLINE(  77)				bool _hx_tmp;
HXDLIN(  77)				if (!(this->enableRightButton)) {
HXLINE(  77)					_hx_tmp = (e->button == 0);
            				}
            				else {
HXLINE(  77)					_hx_tmp = true;
            				}
HXDLIN(  77)				if (_hx_tmp) {
HXLINE(  78)					this->mouseDownButton = e->button;
HXLINE(  79)					this->onPush(e);
HXLINE(  80)					if (e->cancel) {
HXLINE(  80)						this->mouseDownButton = -1;
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXLINE(  83)				bool _hx_tmp;
HXDLIN(  83)				if (!(this->enableRightButton)) {
HXLINE(  83)					_hx_tmp = (e->button == 0);
            				}
            				else {
HXLINE(  83)					_hx_tmp = true;
            				}
HXDLIN(  83)				if (_hx_tmp) {
HXLINE(  84)					this->onRelease(e);
HXLINE(  85)					if ((this->mouseDownButton == e->button)) {
HXLINE(  86)						this->onClick(e);
            					}
            				}
HXLINE(  88)				this->mouseDownButton = -1;
            			}
            			break;
            			case (int)2: {
HXLINE(  75)				this->onMove(e);
            			}
            			break;
            			case (int)3: {
HXLINE(  97)				this->onOver(e);
            			}
            			break;
            			case (int)4: {
HXLINE(  99)				this->onOut(e);
            			}
            			break;
            			case (int)5: {
HXLINE( 101)				this->onWheel(e);
            			}
            			break;
            			case (int)6: {
HXLINE( 105)				this->onFocus(e);
            			}
            			break;
            			case (int)7: {
HXLINE( 103)				this->onFocusLost(e);
            			}
            			break;
            			case (int)8: {
HXLINE( 109)				this->onKeyDown(e);
            			}
            			break;
            			case (int)9: {
HXLINE( 107)				this->onKeyUp(e);
            			}
            			break;
            			case (int)10: {
HXLINE(  90)				bool _hx_tmp;
HXDLIN(  90)				if (!(this->enableRightButton)) {
HXLINE(  90)					_hx_tmp = (e->button == 0);
            				}
            				else {
HXLINE(  90)					_hx_tmp = true;
            				}
HXDLIN(  90)				if (_hx_tmp) {
HXLINE(  91)					this->onRelease(e);
HXLINE(  92)					if ((this->mouseDownButton == e->button)) {
HXLINE(  93)						this->onReleaseOutside(e);
            					}
            				}
HXLINE(  95)				this->mouseDownButton = -1;
            			}
            			break;
            			case (int)11: {
HXLINE( 113)				this->onTextInput(e);
            			}
            			break;
            			case (int)12: {
HXLINE( 111)				this->onCheck(e);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interactive_obj,handleEvent,(void))

 ::hxd::Cursor Interactive_obj::set_cursor( ::hxd::Cursor c){
            	HX_STACKFRAME(&_hx_pos_75547bc61c2b3402_117_set_cursor)
HXLINE( 118)		this->cursor = c;
HXLINE( 119)		bool _hx_tmp;
HXDLIN( 119)		if (::hx::IsNotNull( this->scene )) {
HXLINE( 119)			_hx_tmp = ::hx::IsNotNull( this->scene->events );
            		}
            		else {
HXLINE( 119)			_hx_tmp = false;
            		}
HXDLIN( 119)		if (_hx_tmp) {
HXLINE( 120)			this->scene->events->updateCursor(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 121)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interactive_obj,set_cursor,return )

void Interactive_obj::focus(){
            	HX_STACKFRAME(&_hx_pos_75547bc61c2b3402_124_focus)
HXLINE( 125)		bool _hx_tmp;
HXDLIN( 125)		if (::hx::IsNotNull( this->scene )) {
HXLINE( 125)			_hx_tmp = ::hx::IsNull( this->scene->events );
            		}
            		else {
HXLINE( 125)			_hx_tmp = true;
            		}
HXDLIN( 125)		if (_hx_tmp) {
HXLINE( 126)			return;
            		}
HXLINE( 127)		this->scene->events->focus(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interactive_obj,focus,(void))

void Interactive_obj::blur(){
            	HX_STACKFRAME(&_hx_pos_75547bc61c2b3402_131_blur)
HXDLIN( 131)		if (this->hasFocus()) {
HXDLIN( 131)			this->scene->events->blur();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interactive_obj,blur,(void))

bool Interactive_obj::isOver(){
            	HX_STACKFRAME(&_hx_pos_75547bc61c2b3402_135_isOver)
HXDLIN( 135)		bool _hx_tmp;
HXDLIN( 135)		if (::hx::IsNotNull( this->scene )) {
HXDLIN( 135)			_hx_tmp = ::hx::IsNotNull( this->scene->events );
            		}
            		else {
HXDLIN( 135)			_hx_tmp = false;
            		}
HXDLIN( 135)		if (_hx_tmp) {
HXDLIN( 135)			return (this->scene->events->overList->indexOf(::hx::ObjectPtr<OBJ_>(this),null()) != -1);
            		}
            		else {
HXDLIN( 135)			return false;
            		}
HXDLIN( 135)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interactive_obj,isOver,return )

bool Interactive_obj::hasFocus(){
            	HX_STACKFRAME(&_hx_pos_75547bc61c2b3402_139_hasFocus)
HXDLIN( 139)		bool _hx_tmp;
HXDLIN( 139)		if (::hx::IsNotNull( this->scene )) {
HXDLIN( 139)			_hx_tmp = ::hx::IsNotNull( this->scene->events );
            		}
            		else {
HXDLIN( 139)			_hx_tmp = false;
            		}
HXDLIN( 139)		if (_hx_tmp) {
HXDLIN( 139)			return ::hx::IsInstanceEq( this->scene->events->currentFocus,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXDLIN( 139)			return false;
            		}
HXDLIN( 139)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interactive_obj,hasFocus,return )

HX_BEGIN_DEFAULT_FUNC(__default_onOver,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_75547bc61c2b3402_147___default_onOver)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onOut,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_75547bc61c2b3402_153___default_onOut)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onPush,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_75547bc61c2b3402_157___default_onPush)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onRelease,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_75547bc61c2b3402_168___default_onRelease)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onReleaseOutside,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_75547bc61c2b3402_175___default_onReleaseOutside)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onClick,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_75547bc61c2b3402_182___default_onClick)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onMove,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_75547bc61c2b3402_185___default_onMove)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onWheel,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_75547bc61c2b3402_188___default_onWheel)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onFocus,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_75547bc61c2b3402_191___default_onFocus)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onFocusLost,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_75547bc61c2b3402_194___default_onFocusLost)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onKeyUp,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_75547bc61c2b3402_197___default_onKeyUp)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onKeyDown,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_75547bc61c2b3402_200___default_onKeyDown)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onCheck,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_75547bc61c2b3402_203___default_onCheck)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onTextInput,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_75547bc61c2b3402_206___default_onTextInput)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC


void Interactive_obj::__alloc_dynamic_functions(::hx::Ctx *_hx_ctx,Interactive_obj *_hx_obj) {
	if (!_hx_obj->onTextInput.mPtr) _hx_obj->onTextInput = new __default_onTextInput(_hx_obj);
	if (!_hx_obj->onCheck.mPtr) _hx_obj->onCheck = new __default_onCheck(_hx_obj);
	if (!_hx_obj->onKeyDown.mPtr) _hx_obj->onKeyDown = new __default_onKeyDown(_hx_obj);
	if (!_hx_obj->onKeyUp.mPtr) _hx_obj->onKeyUp = new __default_onKeyUp(_hx_obj);
	if (!_hx_obj->onFocusLost.mPtr) _hx_obj->onFocusLost = new __default_onFocusLost(_hx_obj);
	if (!_hx_obj->onFocus.mPtr) _hx_obj->onFocus = new __default_onFocus(_hx_obj);
	if (!_hx_obj->onWheel.mPtr) _hx_obj->onWheel = new __default_onWheel(_hx_obj);
	if (!_hx_obj->onMove.mPtr) _hx_obj->onMove = new __default_onMove(_hx_obj);
	if (!_hx_obj->onClick.mPtr) _hx_obj->onClick = new __default_onClick(_hx_obj);
	if (!_hx_obj->onReleaseOutside.mPtr) _hx_obj->onReleaseOutside = new __default_onReleaseOutside(_hx_obj);
	if (!_hx_obj->onRelease.mPtr) _hx_obj->onRelease = new __default_onRelease(_hx_obj);
	if (!_hx_obj->onPush.mPtr) _hx_obj->onPush = new __default_onPush(_hx_obj);
	if (!_hx_obj->onOut.mPtr) _hx_obj->onOut = new __default_onOut(_hx_obj);
	if (!_hx_obj->onOver.mPtr) _hx_obj->onOver = new __default_onOver(_hx_obj);
}
::hx::ObjectPtr< Interactive_obj > Interactive_obj::__new(::Dynamic shape, ::h3d::scene::Object parent) {
	::hx::ObjectPtr< Interactive_obj > __this = new Interactive_obj();
	__this->__construct(shape,parent);
	return __this;
}

::hx::ObjectPtr< Interactive_obj > Interactive_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic shape, ::h3d::scene::Object parent) {
	Interactive_obj *__this = (Interactive_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Interactive_obj), true, "h3d.scene.Interactive"));
	*(void **)__this = Interactive_obj::_hx_vtable;
	h3d::scene::Interactive_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(shape,parent);
	return __this;
}

Interactive_obj::Interactive_obj()
{
	onTextInput = new __default_onTextInput(this);
	onCheck = new __default_onCheck(this);
	onKeyDown = new __default_onKeyDown(this);
	onKeyUp = new __default_onKeyUp(this);
	onFocusLost = new __default_onFocusLost(this);
	onFocus = new __default_onFocus(this);
	onWheel = new __default_onWheel(this);
	onMove = new __default_onMove(this);
	onClick = new __default_onClick(this);
	onReleaseOutside = new __default_onReleaseOutside(this);
	onRelease = new __default_onRelease(this);
	onPush = new __default_onPush(this);
	onOut = new __default_onOut(this);
	onOver = new __default_onOver(this);
}

void Interactive_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Interactive);
	HX_MARK_MEMBER_NAME(shape,"shape");
	HX_MARK_MEMBER_NAME(preciseShape,"preciseShape");
	HX_MARK_MEMBER_NAME(priority,"priority");
	HX_MARK_MEMBER_NAME(cursor,"cursor");
	HX_MARK_MEMBER_NAME(cancelEvents,"cancelEvents");
	HX_MARK_MEMBER_NAME(propagateEvents,"propagateEvents");
	HX_MARK_MEMBER_NAME(enableRightButton,"enableRightButton");
	HX_MARK_MEMBER_NAME(bestMatch,"bestMatch");
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(mouseDownButton,"mouseDownButton");
	HX_MARK_MEMBER_NAME(hitPoint,"hitPoint");
	HX_MARK_MEMBER_NAME(onOver,"onOver");
	HX_MARK_MEMBER_NAME(onOut,"onOut");
	HX_MARK_MEMBER_NAME(onPush,"onPush");
	HX_MARK_MEMBER_NAME(onRelease,"onRelease");
	HX_MARK_MEMBER_NAME(onReleaseOutside,"onReleaseOutside");
	HX_MARK_MEMBER_NAME(onClick,"onClick");
	HX_MARK_MEMBER_NAME(onMove,"onMove");
	HX_MARK_MEMBER_NAME(onWheel,"onWheel");
	HX_MARK_MEMBER_NAME(onFocus,"onFocus");
	HX_MARK_MEMBER_NAME(onFocusLost,"onFocusLost");
	HX_MARK_MEMBER_NAME(onKeyUp,"onKeyUp");
	HX_MARK_MEMBER_NAME(onKeyDown,"onKeyDown");
	HX_MARK_MEMBER_NAME(onCheck,"onCheck");
	HX_MARK_MEMBER_NAME(onTextInput,"onTextInput");
	 ::h3d::scene::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Interactive_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shape,"shape");
	HX_VISIT_MEMBER_NAME(preciseShape,"preciseShape");
	HX_VISIT_MEMBER_NAME(priority,"priority");
	HX_VISIT_MEMBER_NAME(cursor,"cursor");
	HX_VISIT_MEMBER_NAME(cancelEvents,"cancelEvents");
	HX_VISIT_MEMBER_NAME(propagateEvents,"propagateEvents");
	HX_VISIT_MEMBER_NAME(enableRightButton,"enableRightButton");
	HX_VISIT_MEMBER_NAME(bestMatch,"bestMatch");
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(mouseDownButton,"mouseDownButton");
	HX_VISIT_MEMBER_NAME(hitPoint,"hitPoint");
	HX_VISIT_MEMBER_NAME(onOver,"onOver");
	HX_VISIT_MEMBER_NAME(onOut,"onOut");
	HX_VISIT_MEMBER_NAME(onPush,"onPush");
	HX_VISIT_MEMBER_NAME(onRelease,"onRelease");
	HX_VISIT_MEMBER_NAME(onReleaseOutside,"onReleaseOutside");
	HX_VISIT_MEMBER_NAME(onClick,"onClick");
	HX_VISIT_MEMBER_NAME(onMove,"onMove");
	HX_VISIT_MEMBER_NAME(onWheel,"onWheel");
	HX_VISIT_MEMBER_NAME(onFocus,"onFocus");
	HX_VISIT_MEMBER_NAME(onFocusLost,"onFocusLost");
	HX_VISIT_MEMBER_NAME(onKeyUp,"onKeyUp");
	HX_VISIT_MEMBER_NAME(onKeyDown,"onKeyDown");
	HX_VISIT_MEMBER_NAME(onCheck,"onCheck");
	HX_VISIT_MEMBER_NAME(onTextInput,"onTextInput");
	 ::h3d::scene::Object_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Interactive_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"blur") ) { return ::hx::Val( blur_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { return ::hx::Val( shape ); }
		if (HX_FIELD_EQ(inName,"scene") ) { return ::hx::Val( scene ); }
		if (HX_FIELD_EQ(inName,"onAdd") ) { return ::hx::Val( onAdd_dyn() ); }
		if (HX_FIELD_EQ(inName,"focus") ) { return ::hx::Val( focus_dyn() ); }
		if (HX_FIELD_EQ(inName,"onOut") ) { return ::hx::Val( onOut ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { return ::hx::Val( cursor ); }
		if (HX_FIELD_EQ(inName,"isOver") ) { return ::hx::Val( isOver_dyn() ); }
		if (HX_FIELD_EQ(inName,"onOver") ) { return ::hx::Val( onOver ); }
		if (HX_FIELD_EQ(inName,"onPush") ) { return ::hx::Val( onPush ); }
		if (HX_FIELD_EQ(inName,"onMove") ) { return ::hx::Val( onMove ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onClick") ) { return ::hx::Val( onClick ); }
		if (HX_FIELD_EQ(inName,"onWheel") ) { return ::hx::Val( onWheel ); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return ::hx::Val( onFocus ); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return ::hx::Val( onKeyUp ); }
		if (HX_FIELD_EQ(inName,"onCheck") ) { return ::hx::Val( onCheck ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { return ::hx::Val( priority ); }
		if (HX_FIELD_EQ(inName,"hitPoint") ) { return ::hx::Val( hitPoint ); }
		if (HX_FIELD_EQ(inName,"onRemove") ) { return ::hx::Val( onRemove_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasFocus") ) { return ::hx::Val( hasFocus_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bestMatch") ) { return ::hx::Val( bestMatch ); }
		if (HX_FIELD_EQ(inName,"onRelease") ) { return ::hx::Val( onRelease ); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return ::hx::Val( onKeyDown ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_cursor") ) { return ::hx::Val( set_cursor_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"handleEvent") ) { return ::hx::Val( handleEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return ::hx::Val( onFocusLost ); }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { return ::hx::Val( onTextInput ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"preciseShape") ) { return ::hx::Val( preciseShape ); }
		if (HX_FIELD_EQ(inName,"cancelEvents") ) { return ::hx::Val( cancelEvents ); }
		if (HX_FIELD_EQ(inName,"preventClick") ) { return ::hx::Val( preventClick_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"propagateEvents") ) { return ::hx::Val( propagateEvents ); }
		if (HX_FIELD_EQ(inName,"mouseDownButton") ) { return ::hx::Val( mouseDownButton ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onReleaseOutside") ) { return ::hx::Val( onReleaseOutside ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"enableRightButton") ) { return ::hx::Val( enableRightButton ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getInteractiveScene") ) { return ::hx::Val( getInteractiveScene_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Interactive_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { shape=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast<  ::h3d::scene::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onOut") ) { onOut=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cursor(inValue.Cast<  ::hxd::Cursor >()) );cursor=inValue.Cast<  ::hxd::Cursor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onOver") ) { onOver=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onPush") ) { onPush=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMove") ) { onMove=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onClick") ) { onClick=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWheel") ) { onWheel=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onFocus") ) { onFocus=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { onKeyUp=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onCheck") ) { onCheck=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { priority=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hitPoint") ) { hitPoint=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bestMatch") ) { bestMatch=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onRelease") ) { onRelease=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { onKeyDown=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { onFocusLost=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { onTextInput=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"preciseShape") ) { preciseShape=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cancelEvents") ) { cancelEvents=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"propagateEvents") ) { propagateEvents=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseDownButton") ) { mouseDownButton=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onReleaseOutside") ) { onReleaseOutside=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"enableRightButton") ) { enableRightButton=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Interactive_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shape",21,e3,1c,7c));
	outFields->push(HX_("preciseShape",c6,8a,b3,2c));
	outFields->push(HX_("priority",64,7b,3e,bb));
	outFields->push(HX_("cursor",d6,8e,e8,3e));
	outFields->push(HX_("cancelEvents",33,08,9d,5b));
	outFields->push(HX_("propagateEvents",62,60,03,1f));
	outFields->push(HX_("enableRightButton",2b,f1,e7,bf));
	outFields->push(HX_("bestMatch",81,25,2c,f7));
	outFields->push(HX_("scene",4c,d9,d1,78));
	outFields->push(HX_("mouseDownButton",79,5e,97,27));
	outFields->push(HX_("hitPoint",fd,10,ef,05));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Interactive_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(Interactive_obj,shape),HX_("shape",21,e3,1c,7c)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(Interactive_obj,preciseShape),HX_("preciseShape",c6,8a,b3,2c)},
	{::hx::fsInt,(int)offsetof(Interactive_obj,priority),HX_("priority",64,7b,3e,bb)},
	{::hx::fsObject /*  ::hxd::Cursor */ ,(int)offsetof(Interactive_obj,cursor),HX_("cursor",d6,8e,e8,3e)},
	{::hx::fsBool,(int)offsetof(Interactive_obj,cancelEvents),HX_("cancelEvents",33,08,9d,5b)},
	{::hx::fsBool,(int)offsetof(Interactive_obj,propagateEvents),HX_("propagateEvents",62,60,03,1f)},
	{::hx::fsBool,(int)offsetof(Interactive_obj,enableRightButton),HX_("enableRightButton",2b,f1,e7,bf)},
	{::hx::fsBool,(int)offsetof(Interactive_obj,bestMatch),HX_("bestMatch",81,25,2c,f7)},
	{::hx::fsObject /*  ::h3d::scene::Scene */ ,(int)offsetof(Interactive_obj,scene),HX_("scene",4c,d9,d1,78)},
	{::hx::fsInt,(int)offsetof(Interactive_obj,mouseDownButton),HX_("mouseDownButton",79,5e,97,27)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(Interactive_obj,hitPoint),HX_("hitPoint",fd,10,ef,05)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Interactive_obj,onOver),HX_("onOver",13,9a,42,ec)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Interactive_obj,onOut),HX_("onOut",af,34,6c,32)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Interactive_obj,onPush),HX_("onPush",99,1a,eb,ec)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Interactive_obj,onRelease),HX_("onRelease",68,3e,98,30)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Interactive_obj,onReleaseOutside),HX_("onReleaseOutside",9d,93,39,ba)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Interactive_obj,onClick),HX_("onClick",a9,1a,9c,de)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Interactive_obj,onMove),HX_("onMove",d0,eb,ea,ea)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Interactive_obj,onWheel),HX_("onWheel",fc,d2,f7,5f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Interactive_obj,onFocus),HX_("onFocus",39,fe,c6,9a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Interactive_obj,onFocusLost),HX_("onFocusLost",bd,e4,85,41)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Interactive_obj,onKeyUp),HX_("onKeyUp",3b,58,3c,75)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Interactive_obj,onKeyDown),HX_("onKeyDown",42,22,f2,73)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Interactive_obj,onCheck),HX_("onCheck",29,37,f4,db)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Interactive_obj,onTextInput),HX_("onTextInput",fe,36,4e,79)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Interactive_obj_sStaticStorageInfo = 0;
#endif

static ::String Interactive_obj_sMemberFields[] = {
	HX_("shape",21,e3,1c,7c),
	HX_("preciseShape",c6,8a,b3,2c),
	HX_("priority",64,7b,3e,bb),
	HX_("cursor",d6,8e,e8,3e),
	HX_("cancelEvents",33,08,9d,5b),
	HX_("propagateEvents",62,60,03,1f),
	HX_("enableRightButton",2b,f1,e7,bf),
	HX_("bestMatch",81,25,2c,f7),
	HX_("scene",4c,d9,d1,78),
	HX_("mouseDownButton",79,5e,97,27),
	HX_("hitPoint",fd,10,ef,05),
	HX_("onAdd",42,86,61,32),
	HX_("onRemove",c3,92,35,e4),
	HX_("preventClick",50,3e,85,eb),
	HX_("getInteractiveScene",c0,e0,d6,48),
	HX_("handleEvent",52,73,0e,28),
	HX_("set_cursor",13,9d,ed,32),
	HX_("focus",d8,5f,89,04),
	HX_("blur",a7,42,19,41),
	HX_("isOver",5e,56,1f,67),
	HX_("hasFocus",1e,aa,e1,90),
	HX_("onOver",13,9a,42,ec),
	HX_("onOut",af,34,6c,32),
	HX_("onPush",99,1a,eb,ec),
	HX_("onRelease",68,3e,98,30),
	HX_("onReleaseOutside",9d,93,39,ba),
	HX_("onClick",a9,1a,9c,de),
	HX_("onMove",d0,eb,ea,ea),
	HX_("onWheel",fc,d2,f7,5f),
	HX_("onFocus",39,fe,c6,9a),
	HX_("onFocusLost",bd,e4,85,41),
	HX_("onKeyUp",3b,58,3c,75),
	HX_("onKeyDown",42,22,f2,73),
	HX_("onCheck",29,37,f4,db),
	HX_("onTextInput",fe,36,4e,79),
	::String(null()) };

::hx::Class Interactive_obj::__mClass;

void Interactive_obj::__register()
{
	Interactive_obj _hx_dummy;
	Interactive_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.scene.Interactive",2b,69,89,99);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Interactive_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Interactive_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Interactive_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Interactive_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace scene
