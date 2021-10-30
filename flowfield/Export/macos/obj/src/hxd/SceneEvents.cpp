#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_hxd_System
#include <hxd/System.h>
#endif
#ifndef INCLUDED_hxd_Window
#include <hxd/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b761c3e4ba772fc3_18_new,"hxd.SceneEvents","new",0x074b8bbd,"hxd.SceneEvents.new","hxd/SceneEvents.hx",18,0xfb2f9a14)
HX_LOCAL_STACK_FRAME(_hx_pos_b761c3e4ba772fc3_69_setMousePos,"hxd.SceneEvents","setMousePos",0x23dd4e8e,"hxd.SceneEvents.setMousePos","hxd/SceneEvents.hx",69,0xfb2f9a14)
HX_LOCAL_STACK_FRAME(_hx_pos_b761c3e4ba772fc3_74_onRemove,"hxd.SceneEvents","onRemove",0x29888646,"hxd.SceneEvents.onRemove","hxd/SceneEvents.hx",74,0xfb2f9a14)
HX_LOCAL_STACK_FRAME(_hx_pos_b761c3e4ba772fc3_92_addScene,"hxd.SceneEvents","addScene",0x3781f2ee,"hxd.SceneEvents.addScene","hxd/SceneEvents.hx",92,0xfb2f9a14)
HX_LOCAL_STACK_FRAME(_hx_pos_b761c3e4ba772fc3_98_removeScene,"hxd.SceneEvents","removeScene",0xc66396c5,"hxd.SceneEvents.removeScene","hxd/SceneEvents.hx",98,0xfb2f9a14)
HX_LOCAL_STACK_FRAME(_hx_pos_b761c3e4ba772fc3_102_dispose,"hxd.SceneEvents","dispose",0x8481ae7c,"hxd.SceneEvents.dispose","hxd/SceneEvents.hx",102,0xfb2f9a14)
HX_LOCAL_STACK_FRAME(_hx_pos_b761c3e4ba772fc3_105_focus,"hxd.SceneEvents","focus",0x856c6c75,"hxd.SceneEvents.focus","hxd/SceneEvents.hx",105,0xfb2f9a14)
HX_LOCAL_STACK_FRAME(_hx_pos_b761c3e4ba772fc3_122_blur,"hxd.SceneEvents","blur",0x52e578aa,"hxd.SceneEvents.blur","hxd/SceneEvents.hx",122,0xfb2f9a14)
HX_LOCAL_STACK_FRAME(_hx_pos_b761c3e4ba772fc3_131_checkFocus,"hxd.SceneEvents","checkFocus",0x8b127c33,"hxd.SceneEvents.checkFocus","hxd/SceneEvents.hx",131,0xfb2f9a14)
HX_LOCAL_STACK_FRAME(_hx_pos_b761c3e4ba772fc3_142_emitEvent,"hxd.SceneEvents","emitEvent",0x6fa0ebe4,"hxd.SceneEvents.emitEvent","hxd/SceneEvents.hx",142,0xfb2f9a14)
HX_LOCAL_STACK_FRAME(_hx_pos_b761c3e4ba772fc3_309_checkEvents,"hxd.SceneEvents","checkEvents",0xc7da025e,"hxd.SceneEvents.checkEvents","hxd/SceneEvents.hx",309,0xfb2f9a14)
HX_LOCAL_STACK_FRAME(_hx_pos_b761c3e4ba772fc3_382_startCapture,"hxd.SceneEvents","startCapture",0x3bc42547,"hxd.SceneEvents.startCapture","hxd/SceneEvents.hx",382,0xfb2f9a14)
HX_LOCAL_STACK_FRAME(_hx_pos_b761c3e4ba772fc3_388_stopCapture,"hxd.SceneEvents","stopCapture",0x4667cd01,"hxd.SceneEvents.stopCapture","hxd/SceneEvents.hx",388,0xfb2f9a14)
HX_LOCAL_STACK_FRAME(_hx_pos_b761c3e4ba772fc3_396_startDrag,"hxd.SceneEvents","startDrag",0x5ea5c493,"hxd.SceneEvents.startDrag","hxd/SceneEvents.hx",396,0xfb2f9a14)
HX_LOCAL_STACK_FRAME(_hx_pos_b761c3e4ba772fc3_401_stopDrag,"hxd.SceneEvents","stopDrag",0xda7d6499,"hxd.SceneEvents.stopDrag","hxd/SceneEvents.hx",401,0xfb2f9a14)
HX_LOCAL_STACK_FRAME(_hx_pos_b761c3e4ba772fc3_405_getFocus,"hxd.SceneEvents","getFocus",0xa9b362e5,"hxd.SceneEvents.getFocus","hxd/SceneEvents.hx",405,0xfb2f9a14)
HX_LOCAL_STACK_FRAME(_hx_pos_b761c3e4ba772fc3_409_updateCursor,"hxd.SceneEvents","updateCursor",0x6172a6c2,"hxd.SceneEvents.updateCursor","hxd/SceneEvents.hx",409,0xfb2f9a14)
HX_LOCAL_STACK_FRAME(_hx_pos_b761c3e4ba772fc3_412_set_defaultCursor,"hxd.SceneEvents","set_defaultCursor",0xf99149f7,"hxd.SceneEvents.set_defaultCursor","hxd/SceneEvents.hx",412,0xfb2f9a14)
HX_LOCAL_STACK_FRAME(_hx_pos_b761c3e4ba772fc3_420_selectCursor,"hxd.SceneEvents","selectCursor",0x45e6f3f5,"hxd.SceneEvents.selectCursor","hxd/SceneEvents.hx",420,0xfb2f9a14)
HX_LOCAL_STACK_FRAME(_hx_pos_b761c3e4ba772fc3_434_onEvent,"hxd.SceneEvents","onEvent",0xd5379458,"hxd.SceneEvents.onEvent","hxd/SceneEvents.hx",434,0xfb2f9a14)
HX_LOCAL_STACK_FRAME(_hx_pos_b761c3e4ba772fc3_439_dispatchListeners,"hxd.SceneEvents","dispatchListeners",0x4b80d382,"hxd.SceneEvents.dispatchListeners","hxd/SceneEvents.hx",439,0xfb2f9a14)
namespace hxd{

void SceneEvents_obj::__construct( ::hxd::Window window){
            	HX_GC_STACKFRAME(&_hx_pos_b761c3e4ba772fc3_18_new)
HXLINE(  56)		this->defaultCursor = ::hxd::Cursor_obj::Default_dyn();
HXLINE(  51)		this->mouseCheckMove = true;
HXLINE(  46)		this->enablePhysicalMouse = true;
HXLINE(  41)		this->isOut = false;
HXLINE(  40)		this->onOver =  ::hxd::Event_obj::__alloc( HX_CTX ,::hxd::EventKind_obj::EOver_dyn(),null(),null());
HXLINE(  39)		this->onOut =  ::hxd::Event_obj::__alloc( HX_CTX ,::hxd::EventKind_obj::EOut_dyn(),null(),null());
HXLINE(  38)		this->checkPos =  ::hxd::Event_obj::__alloc( HX_CTX ,::hxd::EventKind_obj::ECheck_dyn(),null(),null());
HXLINE(  37)		this->focusLost =  ::hxd::Event_obj::__alloc( HX_CTX ,::hxd::EventKind_obj::EFocusLost_dyn(),null(),null());
HXLINE(  35)		this->lastTouch = 0;
HXLINE(  34)		this->mouseY = ((Float)-1.);
HXLINE(  33)		this->mouseX = ((Float)-1.);
HXLINE(  27)		this->overIndex = -1;
HXLINE(  59)		this->scenes = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  60)		this->pendingEvents = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  61)		this->pushList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  62)		this->overList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  63)		this->overCandidates = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  64)		if (::hx::IsNull( window )) {
HXLINE(  64)			window = ::hxd::Window_obj::getInstance();
            		}
HXLINE(  65)		this->window = window;
HXLINE(  66)		window->addEventTarget(this->onEvent_dyn());
            	}

Dynamic SceneEvents_obj::__CreateEmpty() { return new SceneEvents_obj; }

void *SceneEvents_obj::_hx_vtable = 0;

Dynamic SceneEvents_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SceneEvents_obj > _hx_result = new SceneEvents_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SceneEvents_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ae05591;
}

void SceneEvents_obj::setMousePos(Float xPos,Float yPos){
            	HX_STACKFRAME(&_hx_pos_b761c3e4ba772fc3_69_setMousePos)
HXLINE(  70)		this->mouseX = xPos;
HXLINE(  71)		this->mouseY = yPos;
            	}


HX_DEFINE_DYNAMIC_FUNC2(SceneEvents_obj,setMousePos,(void))

void SceneEvents_obj::onRemove(::Dynamic i){
            	HX_STACKFRAME(&_hx_pos_b761c3e4ba772fc3_74_onRemove)
HXLINE(  75)		if (::hx::IsInstanceEq( i,this->currentFocus )) {
HXLINE(  76)			this->currentFocus = null();
            		}
HXLINE(  77)		if ((this->overIndex >= 0)) {
HXLINE(  78)			int index = this->overList->indexOf(i,null());
HXLINE(  79)			if ((index >= 0)) {
HXLINE(  82)				this->overList->remove(i);
HXLINE(  83)				if ((index < this->overIndex)) {
HXLINE(  83)					this->overIndex--;
            				}
            			}
            		}
            		else {
HXLINE(  86)			this->overList->remove(i);
HXLINE(  87)			this->selectCursor();
            		}
HXLINE(  89)		this->pushList->remove(i);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SceneEvents_obj,onRemove,(void))

void SceneEvents_obj::addScene(::Dynamic s, ::Dynamic index){
            	HX_STACKFRAME(&_hx_pos_b761c3e4ba772fc3_92_addScene)
HXLINE(  93)		::hxd::InteractiveScene_obj::setEvents(s,::hx::ObjectPtr<OBJ_>(this));
HXLINE(  94)		if (::hx::IsNull( index )) {
HXLINE(  94)			this->scenes->push(s);
            		}
            		else {
HXLINE(  94)			this->scenes->insert(( (int)(index) ),s);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(SceneEvents_obj,addScene,(void))

void SceneEvents_obj::removeScene(::Dynamic s){
            	HX_STACKFRAME(&_hx_pos_b761c3e4ba772fc3_98_removeScene)
HXDLIN(  98)		if (this->scenes->remove(s)) {
HXDLIN(  98)			::hxd::InteractiveScene_obj::setEvents(s,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SceneEvents_obj,removeScene,(void))

void SceneEvents_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_b761c3e4ba772fc3_102_dispose)
HXDLIN( 102)		this->window->removeEventTarget(this->onEvent_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(SceneEvents_obj,dispose,(void))

void SceneEvents_obj::focus(::Dynamic i){
            	HX_GC_STACKFRAME(&_hx_pos_b761c3e4ba772fc3_105_focus)
HXLINE( 106)		if (::hx::IsInstanceEq( this->currentFocus,i )) {
HXLINE( 107)			return;
            		}
HXLINE( 108)		if (::hx::IsNull( i )) {
HXLINE( 109)			this->blur();
HXLINE( 110)			return;
            		}
HXLINE( 112)		if (::hx::IsNotNull( this->currentFocus )) {
HXLINE( 113)			this->blur();
HXLINE( 114)			if (::hx::IsNotNull( this->currentFocus )) {
HXLINE( 114)				return;
            			}
            		}
HXLINE( 116)		 ::hxd::Event e =  ::hxd::Event_obj::__alloc( HX_CTX ,::hxd::EventKind_obj::EFocus_dyn(),null(),null());
HXLINE( 117)		::hxd::Interactive_obj::handleEvent(i,e);
HXLINE( 118)		if (!(e->cancel)) {
HXLINE( 119)			this->currentFocus = i;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SceneEvents_obj,focus,(void))

void SceneEvents_obj::blur(){
            	HX_STACKFRAME(&_hx_pos_b761c3e4ba772fc3_122_blur)
HXLINE( 123)		if (::hx::IsNull( this->currentFocus )) {
HXLINE( 124)			return;
            		}
HXLINE( 125)		this->focusLost->cancel = false;
HXLINE( 126)		::hxd::Interactive_obj::handleEvent(this->currentFocus,this->focusLost);
HXLINE( 127)		if (!(this->focusLost->cancel)) {
HXLINE( 128)			this->currentFocus = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SceneEvents_obj,blur,(void))

void SceneEvents_obj::checkFocus(){
            	HX_STACKFRAME(&_hx_pos_b761c3e4ba772fc3_131_checkFocus)
HXLINE( 132)		if (::hx::IsNull( this->currentFocus )) {
HXLINE( 132)			return;
            		}
HXLINE( 133)		::Dynamic s = ::hxd::Interactive_obj::getInteractiveScene(this->currentFocus);
HXLINE( 134)		if (::hx::IsNull( s )) {
HXLINE( 135)			this->currentFocus = null();
HXLINE( 136)			return;
            		}
HXLINE( 138)		if (!(::hxd::InteractiveScene_obj::isInteractiveVisible(s,this->currentFocus))) {
HXLINE( 139)			this->blur();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SceneEvents_obj,checkFocus,(void))

void SceneEvents_obj::emitEvent( ::hxd::Event event){
            	HX_STACKFRAME(&_hx_pos_b761c3e4ba772fc3_142_emitEvent)
HXLINE( 143)		Float oldX = event->relX;
HXDLIN( 143)		Float oldY = event->relY;
HXDLIN( 143)		int overCandidateCount = 0;
HXLINE( 144)		bool handled = false;
HXLINE( 145)		bool checkOver = false;
HXDLIN( 145)		bool fillOver = false;
HXDLIN( 145)		bool checkPush = false;
HXDLIN( 145)		bool cancelFocus = false;
HXDLIN( 145)		bool updateCursor = false;
HXLINE( 146)		this->overIndex = 0;
HXLINE( 147)		switch((int)(event->kind->_hx_getIndex())){
            			case (int)0: {
HXLINE( 151)				cancelFocus = true;
HXDLIN( 151)				checkPush = true;
            			}
            			break;
            			case (int)1: {
HXLINE( 152)				checkPush = true;
            			}
            			break;
            			case (int)2: case (int)12: {
HXLINE( 149)				checkOver = true;
HXLINE( 150)				fillOver = true;
            			}
            			break;
            			case (int)5: case (int)8: case (int)9: case (int)11: {
HXLINE( 154)				if (::hx::IsNotNull( this->currentFocus )) {
HXLINE( 155)					event->relX = (event->relY = ( (Float)(0) ));
HXLINE( 156)					::hxd::Interactive_obj::handleEvent(this->currentFocus,event);
HXLINE( 157)					event->relX = oldX;
HXLINE( 158)					event->relY = oldY;
HXLINE( 159)					if (!(event->propagate)) {
HXLINE( 160)						return;
            					}
            				}
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 165)		{
HXLINE( 165)			int _g = 0;
HXDLIN( 165)			::Array< ::Dynamic> _g1 = this->scenes;
HXDLIN( 165)			while((_g < _g1->length)){
HXLINE( 165)				::Dynamic s = _g1->__get(_g);
HXDLIN( 165)				_g = (_g + 1);
HXLINE( 166)				::Dynamic last = null();
HXLINE( 167)				while(true){
HXLINE( 168)					::Dynamic i = ::hxd::InteractiveScene_obj::handleEvent(s,event,last);
HXLINE( 170)					if (::hx::IsNull( i )) {
HXLINE( 171)						event->relX = oldX;
HXLINE( 172)						event->relY = oldY;
HXLINE( 173)						goto _hx_goto_10;
            					}
HXLINE( 176)					if (checkOver) {
HXLINE( 177)						if (fillOver) {
HXLINE( 178)							int idx = this->overList->indexOf(i,null());
HXLINE( 179)							if ((idx == -1)) {
HXLINE( 180)								if ((this->overCandidates->length == overCandidateCount)) {
HXLINE( 181)									this->overCandidates[overCandidateCount] =  ::Dynamic(::hx::Anon_obj::Create(5)
            										->setFixed(0,HX_("i",69,00,00,00),i)
            										->setFixed(1,HX_("s",73,00,00,00),s)
            										->setFixed(2,HX_("x",78,00,00,00),event->relX)
            										->setFixed(3,HX_("y",79,00,00,00),event->relY)
            										->setFixed(4,HX_("z",7a,00,00,00),event->relZ));
            								}
            								else {
HXLINE( 189)									 ::Dynamic info = this->overCandidates->__get(overCandidateCount);
HXLINE( 190)									info->__SetField(HX_("i",69,00,00,00),i,::hx::paccDynamic);
HXLINE( 191)									info->__SetField(HX_("s",73,00,00,00),s,::hx::paccDynamic);
HXLINE( 192)									info->__SetField(HX_("x",78,00,00,00),event->relX,::hx::paccDynamic);
HXLINE( 193)									info->__SetField(HX_("y",79,00,00,00),event->relY,::hx::paccDynamic);
HXLINE( 194)									info->__SetField(HX_("z",7a,00,00,00),event->relZ,::hx::paccDynamic);
            								}
HXLINE( 196)								overCandidateCount = (overCandidateCount + 1);
HXLINE( 197)								this->overList->insert(this->overIndex++,i);
HXLINE( 198)								updateCursor = true;
            							}
            							else {
HXLINE( 200)								if ((idx < this->overIndex)) {
HXLINE( 201)									while(true){
HXLINE( 202)										this->overList[idx] = this->overList->__get((idx + 1));
HXLINE( 203)										idx = (idx + 1);
HXLINE( 201)										if (!((idx < this->overIndex))) {
HXLINE( 201)											goto _hx_goto_11;
            										}
            									}
            									_hx_goto_11:;
HXLINE( 205)									this->overList[this->overIndex] = i;
HXLINE( 206)									updateCursor = true;
            								}
            								else {
HXLINE( 207)									if ((idx > this->overIndex)) {
HXLINE( 208)										while(true){
HXLINE( 209)											this->overList[idx] = this->overList->__get((idx - 1));
HXLINE( 210)											idx = (idx - 1);
HXLINE( 208)											if (!((idx > this->overIndex))) {
HXLINE( 208)												goto _hx_goto_12;
            											}
            										}
            										_hx_goto_12:;
HXLINE( 212)										this->overList[this->overIndex] = i;
HXLINE( 213)										updateCursor = true;
            									}
            								}
HXLINE( 215)								this->overIndex++;
            							}
HXLINE( 217)							fillOver = event->propagate;
            						}
            					}
            					else {
HXLINE( 220)						if (checkPush) {
HXLINE( 221)							if (::hx::IsPointerEq( event->kind,::hxd::EventKind_obj::EPush_dyn() )) {
HXLINE( 222)								this->pushList->push(i);
            							}
            							else {
HXLINE( 224)								this->pushList->remove(i);
            							}
            						}
HXLINE( 226)						bool _hx_tmp;
HXDLIN( 226)						if (cancelFocus) {
HXLINE( 226)							_hx_tmp = ::hx::IsInstanceEq( i,this->currentFocus );
            						}
            						else {
HXLINE( 226)							_hx_tmp = false;
            						}
HXDLIN( 226)						if (_hx_tmp) {
HXLINE( 227)							cancelFocus = false;
            						}
            					}
HXLINE( 230)					event->relX = oldX;
HXLINE( 231)					event->relY = oldY;
HXLINE( 233)					if (!(event->propagate)) {
HXLINE( 234)						handled = true;
HXLINE( 235)						goto _hx_goto_10;
            					}
HXLINE( 238)					last = i;
HXLINE( 239)					event->propagate = false;
            				}
            				_hx_goto_10:;
HXLINE( 241)				if (handled) {
HXLINE( 242)					goto _hx_goto_9;
            				}
            			}
            			_hx_goto_9:;
            		}
HXLINE( 245)		bool _hx_tmp;
HXDLIN( 245)		if (cancelFocus) {
HXLINE( 245)			_hx_tmp = ::hx::IsNotNull( this->currentFocus );
            		}
            		else {
HXLINE( 245)			_hx_tmp = false;
            		}
HXDLIN( 245)		if (_hx_tmp) {
HXLINE( 246)			this->blur();
            		}
HXLINE( 248)		if (checkOver) {
HXLINE( 249)			if ((this->overIndex < this->overList->length)) {
HXLINE( 250)				while((this->overIndex < this->overList->length)){
HXLINE( 251)					::Dynamic e = this->overList->pop();
HXLINE( 252)					::hxd::Interactive_obj::handleEvent(e,this->onOut);
            				}
HXLINE( 254)				updateCursor = true;
            			}
HXLINE( 256)			if ((overCandidateCount != 0)) {
HXLINE( 257)				int i = 0;
HXDLIN( 257)				 ::hxd::Event ev = this->onOver;
HXLINE( 258)				while(true){
HXLINE( 259)					i = (i + 1);
HXDLIN( 259)					 ::Dynamic info = this->overCandidates->__get((i - 1));
HXLINE( 260)					ev->relX = ( (Float)(info->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXLINE( 261)					ev->relY = ( (Float)(info->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXLINE( 262)					ev->relZ = ( (Float)(info->__Field(HX_("z",7a,00,00,00),::hx::paccDynamic)) );
HXLINE( 263)					if (::hxd::InteractiveScene_obj::isInteractiveVisible( ::Dynamic(info->__Field(HX_("s",73,00,00,00),::hx::paccDynamic)), ::Dynamic(info->__Field(HX_("i",69,00,00,00),::hx::paccDynamic)))) {
HXLINE( 264)						::hxd::Interactive_obj::handleEvent( ::Dynamic(info->__Field(HX_("i",69,00,00,00),::hx::paccDynamic)),ev);
            					}
            					else {
HXLINE( 266)						this->overList->remove( ::Dynamic(info->__Field(HX_("i",69,00,00,00),::hx::paccDynamic)));
            					}
HXLINE( 267)					info->__SetField(HX_("i",69,00,00,00),null(),::hx::paccDynamic);
HXLINE( 268)					info->__SetField(HX_("s",73,00,00,00),null(),::hx::paccDynamic);
HXLINE( 258)					if (!((i < overCandidateCount))) {
HXLINE( 258)						goto _hx_goto_14;
            					}
            				}
            				_hx_goto_14:;
            			}
            		}
HXLINE( 272)		this->overIndex = -1;
HXLINE( 274)		if (updateCursor) {
HXLINE( 275)			this->selectCursor();
            		}
HXLINE( 277)		bool _hx_tmp1;
HXDLIN( 277)		if (!(handled)) {
HXLINE( 277)			_hx_tmp1 = ::hx::IsInstanceNotEq( event,this->checkPos );
            		}
            		else {
HXLINE( 277)			_hx_tmp1 = false;
            		}
HXDLIN( 277)		if (_hx_tmp1) {
HXLINE( 278)			if (::hx::IsPointerEq( event->kind,::hxd::EventKind_obj::EPush_dyn() )) {
HXLINE( 279)				this->pushList->push(null());
            			}
            			else {
HXLINE( 280)				if (::hx::IsPointerEq( event->kind,::hxd::EventKind_obj::ERelease_dyn() )) {
HXLINE( 281)					this->pushList->remove(null());
            				}
            			}
HXLINE( 282)			this->dispatchListeners(event);
            		}
HXLINE( 289)		bool _hx_tmp2;
HXDLIN( 289)		if (::hx::IsPointerEq( event->kind,::hxd::EventKind_obj::ERelease_dyn() )) {
HXLINE( 289)			_hx_tmp2 = (this->pushList->length > 0);
            		}
            		else {
HXLINE( 289)			_hx_tmp2 = false;
            		}
HXDLIN( 289)		if (_hx_tmp2) {
HXLINE( 290)			{
HXLINE( 290)				int _g = 0;
HXDLIN( 290)				::Array< ::Dynamic> _g1 = this->pushList;
HXDLIN( 290)				while((_g < _g1->length)){
HXLINE( 290)					::Dynamic i = _g1->__get(_g);
HXDLIN( 290)					_g = (_g + 1);
HXLINE( 291)					if (::hx::IsNull( i )) {
HXLINE( 292)						event->kind = ::hxd::EventKind_obj::EReleaseOutside_dyn();
HXLINE( 293)						this->dispatchListeners(event);
HXLINE( 294)						event->kind = ::hxd::EventKind_obj::ERelease_dyn();
            					}
            					else {
HXLINE( 296)						::Dynamic s = ::hxd::Interactive_obj::getInteractiveScene(i);
HXLINE( 297)						if (::hx::IsNull( s )) {
HXLINE( 297)							continue;
            						}
HXLINE( 298)						event->kind = ::hxd::EventKind_obj::EReleaseOutside_dyn();
HXLINE( 299)						::hxd::InteractiveScene_obj::dispatchEvent(s,event,i);
HXLINE( 300)						event->kind = ::hxd::EventKind_obj::ERelease_dyn();
HXLINE( 301)						event->relX = oldX;
HXLINE( 302)						event->relY = oldY;
            					}
            				}
            			}
HXLINE( 305)			this->pushList = ::Array_obj< ::Dynamic>::__new();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SceneEvents_obj,emitEvent,(void))

void SceneEvents_obj::checkEvents(){
            	HX_STACKFRAME(&_hx_pos_b761c3e4ba772fc3_309_checkEvents)
HXLINE( 310)		::Array< ::Dynamic> old = this->pendingEvents;
HXLINE( 311)		bool checkMoved = !(this->mouseCheckMove);
HXLINE( 312)		bool checkFocused = ::hx::IsNull( this->currentFocus );
HXLINE( 313)		if ((old->length > 0)) {
HXLINE( 314)			this->pendingEvents = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 315)			{
HXLINE( 315)				int _g = 0;
HXDLIN( 315)				while((_g < old->length)){
HXLINE( 315)					 ::hxd::Event e = old->__get(_g).StaticCast<  ::hxd::Event >();
HXDLIN( 315)					_g = (_g + 1);
HXLINE( 316)					Float ox = e->relX;
HXDLIN( 316)					Float oy = e->relY;
HXLINE( 318)					switch((int)(e->kind->_hx_getIndex())){
            						case (int)0: case (int)1: {
HXLINE( 326)							this->mouseX = e->relX;
HXLINE( 327)							this->mouseY = e->relY;
HXLINE( 328)							this->lastTouch = e->touchId;
            						}
            						break;
            						case (int)2: {
HXLINE( 320)							checkMoved = true;
HXLINE( 321)							this->mouseX = e->relX;
HXLINE( 322)							this->mouseY = e->relY;
HXLINE( 323)							this->lastTouch = e->touchId;
            						}
            						break;
            						case (int)3: {
HXLINE( 335)							this->isOut = false;
HXLINE( 336)							this->selectCursor();
HXLINE( 337)							continue;
            						}
            						break;
            						case (int)4: {
HXLINE( 340)							this->isOut = true;
HXLINE( 341)							if ((this->overList->length > 0)) {
HXLINE( 342)								int i = (this->overList->length - 1);
HXLINE( 343)								while((i >= 0)){
HXLINE( 344)									this->onOut->cancel = false;
HXLINE( 345)									::hxd::Interactive_obj::handleEvent(this->overList->__get(i),this->onOut);
HXLINE( 346)									this->overList->remove(this->overList->__get(i));
HXLINE( 347)									i = (i - 1);
            								}
HXLINE( 349)								this->selectCursor();
            							}
HXLINE( 351)							continue;
            						}
            						break;
            						case (int)5: case (int)8: case (int)9: case (int)11: {
HXLINE( 330)							if (!(checkFocused)) {
HXLINE( 331)								checkFocused = true;
HXLINE( 332)								this->checkFocus();
            							}
            						}
            						break;
            						default:{
            						}
            					}
HXLINE( 355)					bool _hx_tmp;
HXDLIN( 355)					if (::hx::IsNotNull( this->currentDrag )) {
HXLINE( 355)						if (::hx::IsNotNull( this->currentDrag->__Field(HX_("ref",53,d9,56,00),::hx::paccDynamic) )) {
HXLINE( 355)							_hx_tmp = ::hx::IsEq( this->currentDrag->__Field(HX_("ref",53,d9,56,00),::hx::paccDynamic),e->touchId );
            						}
            						else {
HXLINE( 355)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 355)						_hx_tmp = false;
            					}
HXDLIN( 355)					if (_hx_tmp) {
HXLINE( 356)						e->propagate = true;
HXLINE( 357)						e->cancel = false;
HXLINE( 358)						this->currentDrag->__Field(HX_("f",66,00,00,00),::hx::paccDynamic)(e);
HXLINE( 359)						e->relX = ox;
HXLINE( 360)						e->relY = oy;
HXLINE( 361)						if (!(e->propagate)) {
HXLINE( 362)							continue;
            						}
            					}
HXLINE( 365)					this->emitEvent(e);
            				}
            			}
            		}
HXLINE( 369)		if (!(checkFocused)) {
HXLINE( 370)			this->checkFocus();
            		}
HXLINE( 372)		bool _hx_tmp;
HXDLIN( 372)		bool _hx_tmp1;
HXDLIN( 372)		if (!(checkMoved)) {
HXLINE( 372)			_hx_tmp1 = !(this->isOut);
            		}
            		else {
HXLINE( 372)			_hx_tmp1 = false;
            		}
HXDLIN( 372)		if (_hx_tmp1) {
HXLINE( 372)			_hx_tmp = ::hx::IsNull( this->currentDrag );
            		}
            		else {
HXLINE( 372)			_hx_tmp = false;
            		}
HXDLIN( 372)		if (_hx_tmp) {
HXLINE( 373)			this->checkPos->relX = this->mouseX;
HXLINE( 374)			this->checkPos->relY = this->mouseY;
HXLINE( 375)			this->checkPos->touchId = this->lastTouch;
HXLINE( 376)			this->checkPos->cancel = false;
HXLINE( 377)			this->checkPos->propagate = false;
HXLINE( 378)			this->emitEvent(this->checkPos);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SceneEvents_obj,checkEvents,(void))

void SceneEvents_obj::startCapture( ::Dynamic f, ::Dynamic onCancel, ::Dynamic touchId){
            	HX_STACKFRAME(&_hx_pos_b761c3e4ba772fc3_382_startCapture)
HXLINE( 383)		bool _hx_tmp;
HXDLIN( 383)		if (::hx::IsNotNull( this->currentDrag )) {
HXLINE( 383)			_hx_tmp = ::hx::IsNotNull( this->currentDrag->__Field(HX_("onCancel",f9,e3,e0,97),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 383)			_hx_tmp = false;
            		}
HXDLIN( 383)		if (_hx_tmp) {
HXLINE( 384)			this->currentDrag->__Field(HX_("onCancel",f9,e3,e0,97),::hx::paccDynamic)();
            		}
HXLINE( 385)		this->currentDrag =  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("onCancel",f9,e3,e0,97),onCancel)
            			->setFixed(1,HX_("f",66,00,00,00),f)
            			->setFixed(2,HX_("ref",53,d9,56,00),touchId));
            	}


HX_DEFINE_DYNAMIC_FUNC3(SceneEvents_obj,startCapture,(void))

void SceneEvents_obj::stopCapture(){
            	HX_STACKFRAME(&_hx_pos_b761c3e4ba772fc3_388_stopCapture)
HXLINE( 389)		bool _hx_tmp;
HXDLIN( 389)		if (::hx::IsNotNull( this->currentDrag )) {
HXLINE( 389)			_hx_tmp = ::hx::IsNotNull( this->currentDrag->__Field(HX_("onCancel",f9,e3,e0,97),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 389)			_hx_tmp = false;
            		}
HXDLIN( 389)		if (_hx_tmp) {
HXLINE( 390)			this->currentDrag->__Field(HX_("onCancel",f9,e3,e0,97),::hx::paccDynamic)();
            		}
HXLINE( 391)		this->currentDrag = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SceneEvents_obj,stopCapture,(void))

void SceneEvents_obj::startDrag( ::Dynamic f, ::Dynamic onCancel, ::hxd::Event refEvent){
            	HX_STACKFRAME(&_hx_pos_b761c3e4ba772fc3_396_startDrag)
HXDLIN( 396)		 ::Dynamic _hx_tmp;
HXDLIN( 396)		if (::hx::IsNotNull( refEvent )) {
HXDLIN( 396)			_hx_tmp = refEvent->touchId;
            		}
            		else {
HXDLIN( 396)			_hx_tmp = null();
            		}
HXDLIN( 396)		this->startCapture(f,onCancel,_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC3(SceneEvents_obj,startDrag,(void))

void SceneEvents_obj::stopDrag(){
            	HX_STACKFRAME(&_hx_pos_b761c3e4ba772fc3_401_stopDrag)
HXDLIN( 401)		this->stopCapture();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SceneEvents_obj,stopDrag,(void))

::Dynamic SceneEvents_obj::getFocus(){
            	HX_STACKFRAME(&_hx_pos_b761c3e4ba772fc3_405_getFocus)
HXDLIN( 405)		return this->currentFocus;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SceneEvents_obj,getFocus,return )

void SceneEvents_obj::updateCursor(::Dynamic i){
            	HX_STACKFRAME(&_hx_pos_b761c3e4ba772fc3_409_updateCursor)
HXDLIN( 409)		if ((this->overList->indexOf(i,null()) != -1)) {
HXDLIN( 409)			this->selectCursor();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SceneEvents_obj,updateCursor,(void))

 ::hxd::Cursor SceneEvents_obj::set_defaultCursor( ::hxd::Cursor c){
            	HX_STACKFRAME(&_hx_pos_b761c3e4ba772fc3_412_set_defaultCursor)
HXLINE( 413)		if (__hxcpp_enum_eq(c,this->defaultCursor)) {
HXLINE( 414)			return c;
            		}
HXLINE( 415)		this->defaultCursor = c;
HXLINE( 416)		this->selectCursor();
HXLINE( 417)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SceneEvents_obj,set_defaultCursor,return )

void SceneEvents_obj::selectCursor(){
            	HX_STACKFRAME(&_hx_pos_b761c3e4ba772fc3_420_selectCursor)
HXLINE( 421)		 ::hxd::Cursor cur = this->defaultCursor;
HXLINE( 422)		{
HXLINE( 422)			int _g = 0;
HXDLIN( 422)			::Array< ::Dynamic> _g1 = this->overList;
HXDLIN( 422)			while((_g < _g1->length)){
HXLINE( 422)				::Dynamic o = _g1->__get(_g);
HXDLIN( 422)				_g = (_g + 1);
HXLINE( 423)				if (::hx::IsNotNull( o->__Field(HX_("cursor",d6,8e,e8,3e),::hx::paccDynamic) )) {
HXLINE( 424)					cur = o->__Field(HX_("cursor",d6,8e,e8,3e),::hx::paccDynamic);
HXLINE( 425)					goto _hx_goto_27;
            				}
            			}
            			_hx_goto_27:;
            		}
HXLINE( 428)		if ((cur->_hx_getIndex() == 6)) {
HXLINE( 429)			 ::Dynamic f = cur->_hx_getObject(0);
HXDLIN( 429)			f();
            		}
            		else {
HXLINE( 430)			::hxd::System_obj::setCursor(cur);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SceneEvents_obj,selectCursor,(void))

void SceneEvents_obj::onEvent( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_b761c3e4ba772fc3_434_onEvent)
HXLINE( 435)		bool _hx_tmp;
HXDLIN( 435)		if (!(this->enablePhysicalMouse)) {
HXLINE( 435)			_hx_tmp = ::hx::IsPointerEq( e->kind,::hxd::EventKind_obj::EMove_dyn() );
            		}
            		else {
HXLINE( 435)			_hx_tmp = false;
            		}
HXDLIN( 435)		if (_hx_tmp) {
HXLINE( 435)			return;
            		}
HXLINE( 436)		this->pendingEvents->push(e);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SceneEvents_obj,onEvent,(void))

void SceneEvents_obj::dispatchListeners( ::hxd::Event event){
            	HX_STACKFRAME(&_hx_pos_b761c3e4ba772fc3_439_dispatchListeners)
HXLINE( 440)		Float ox = event->relX;
HXDLIN( 440)		Float oy = event->relY;
HXLINE( 441)		event->propagate = true;
HXLINE( 442)		{
HXLINE( 442)			int _g = 0;
HXDLIN( 442)			::Array< ::Dynamic> _g1 = this->scenes;
HXDLIN( 442)			while((_g < _g1->length)){
HXLINE( 442)				::Dynamic s = _g1->__get(_g);
HXDLIN( 442)				_g = (_g + 1);
HXLINE( 443)				event->cancel = false;
HXLINE( 444)				::hxd::InteractiveScene_obj::dispatchListeners(s,event);
HXLINE( 445)				event->relX = ox;
HXLINE( 446)				event->relY = oy;
HXLINE( 447)				if (!(event->propagate)) {
HXLINE( 447)					goto _hx_goto_30;
            				}
            			}
            			_hx_goto_30:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SceneEvents_obj,dispatchListeners,(void))


::hx::ObjectPtr< SceneEvents_obj > SceneEvents_obj::__new( ::hxd::Window window) {
	::hx::ObjectPtr< SceneEvents_obj > __this = new SceneEvents_obj();
	__this->__construct(window);
	return __this;
}

::hx::ObjectPtr< SceneEvents_obj > SceneEvents_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxd::Window window) {
	SceneEvents_obj *__this = (SceneEvents_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SceneEvents_obj), true, "hxd.SceneEvents"));
	*(void **)__this = SceneEvents_obj::_hx_vtable;
	__this->__construct(window);
	return __this;
}

SceneEvents_obj::SceneEvents_obj()
{
}

void SceneEvents_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SceneEvents);
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(scenes,"scenes");
	HX_MARK_MEMBER_NAME(overList,"overList");
	HX_MARK_MEMBER_NAME(overCandidates,"overCandidates");
	HX_MARK_MEMBER_NAME(overIndex,"overIndex");
	HX_MARK_MEMBER_NAME(currentFocus,"currentFocus");
	HX_MARK_MEMBER_NAME(pendingEvents,"pendingEvents");
	HX_MARK_MEMBER_NAME(pushList,"pushList");
	HX_MARK_MEMBER_NAME(currentDrag,"currentDrag");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(lastTouch,"lastTouch");
	HX_MARK_MEMBER_NAME(focusLost,"focusLost");
	HX_MARK_MEMBER_NAME(checkPos,"checkPos");
	HX_MARK_MEMBER_NAME(onOut,"onOut");
	HX_MARK_MEMBER_NAME(onOver,"onOver");
	HX_MARK_MEMBER_NAME(isOut,"isOut");
	HX_MARK_MEMBER_NAME(enablePhysicalMouse,"enablePhysicalMouse");
	HX_MARK_MEMBER_NAME(mouseCheckMove,"mouseCheckMove");
	HX_MARK_MEMBER_NAME(defaultCursor,"defaultCursor");
	HX_MARK_END_CLASS();
}

void SceneEvents_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(scenes,"scenes");
	HX_VISIT_MEMBER_NAME(overList,"overList");
	HX_VISIT_MEMBER_NAME(overCandidates,"overCandidates");
	HX_VISIT_MEMBER_NAME(overIndex,"overIndex");
	HX_VISIT_MEMBER_NAME(currentFocus,"currentFocus");
	HX_VISIT_MEMBER_NAME(pendingEvents,"pendingEvents");
	HX_VISIT_MEMBER_NAME(pushList,"pushList");
	HX_VISIT_MEMBER_NAME(currentDrag,"currentDrag");
	HX_VISIT_MEMBER_NAME(mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(lastTouch,"lastTouch");
	HX_VISIT_MEMBER_NAME(focusLost,"focusLost");
	HX_VISIT_MEMBER_NAME(checkPos,"checkPos");
	HX_VISIT_MEMBER_NAME(onOut,"onOut");
	HX_VISIT_MEMBER_NAME(onOver,"onOver");
	HX_VISIT_MEMBER_NAME(isOut,"isOut");
	HX_VISIT_MEMBER_NAME(enablePhysicalMouse,"enablePhysicalMouse");
	HX_VISIT_MEMBER_NAME(mouseCheckMove,"mouseCheckMove");
	HX_VISIT_MEMBER_NAME(defaultCursor,"defaultCursor");
}

::hx::Val SceneEvents_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"blur") ) { return ::hx::Val( blur_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"onOut") ) { return ::hx::Val( onOut ); }
		if (HX_FIELD_EQ(inName,"isOut") ) { return ::hx::Val( isOut ); }
		if (HX_FIELD_EQ(inName,"focus") ) { return ::hx::Val( focus_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { return ::hx::Val( window ); }
		if (HX_FIELD_EQ(inName,"scenes") ) { return ::hx::Val( scenes ); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return ::hx::Val( mouseX ); }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return ::hx::Val( mouseY ); }
		if (HX_FIELD_EQ(inName,"onOver") ) { return ::hx::Val( onOver ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"onEvent") ) { return ::hx::Val( onEvent_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"overList") ) { return ::hx::Val( overList ); }
		if (HX_FIELD_EQ(inName,"pushList") ) { return ::hx::Val( pushList ); }
		if (HX_FIELD_EQ(inName,"checkPos") ) { return ::hx::Val( checkPos ); }
		if (HX_FIELD_EQ(inName,"onRemove") ) { return ::hx::Val( onRemove_dyn() ); }
		if (HX_FIELD_EQ(inName,"addScene") ) { return ::hx::Val( addScene_dyn() ); }
		if (HX_FIELD_EQ(inName,"stopDrag") ) { return ::hx::Val( stopDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFocus") ) { return ::hx::Val( getFocus_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"overIndex") ) { return ::hx::Val( overIndex ); }
		if (HX_FIELD_EQ(inName,"lastTouch") ) { return ::hx::Val( lastTouch ); }
		if (HX_FIELD_EQ(inName,"focusLost") ) { return ::hx::Val( focusLost ); }
		if (HX_FIELD_EQ(inName,"emitEvent") ) { return ::hx::Val( emitEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"startDrag") ) { return ::hx::Val( startDrag_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"checkFocus") ) { return ::hx::Val( checkFocus_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentDrag") ) { return ::hx::Val( currentDrag ); }
		if (HX_FIELD_EQ(inName,"setMousePos") ) { return ::hx::Val( setMousePos_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeScene") ) { return ::hx::Val( removeScene_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkEvents") ) { return ::hx::Val( checkEvents_dyn() ); }
		if (HX_FIELD_EQ(inName,"stopCapture") ) { return ::hx::Val( stopCapture_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFocus") ) { return ::hx::Val( currentFocus ); }
		if (HX_FIELD_EQ(inName,"startCapture") ) { return ::hx::Val( startCapture_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateCursor") ) { return ::hx::Val( updateCursor_dyn() ); }
		if (HX_FIELD_EQ(inName,"selectCursor") ) { return ::hx::Val( selectCursor_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingEvents") ) { return ::hx::Val( pendingEvents ); }
		if (HX_FIELD_EQ(inName,"defaultCursor") ) { return ::hx::Val( defaultCursor ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"overCandidates") ) { return ::hx::Val( overCandidates ); }
		if (HX_FIELD_EQ(inName,"mouseCheckMove") ) { return ::hx::Val( mouseCheckMove ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_defaultCursor") ) { return ::hx::Val( set_defaultCursor_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispatchListeners") ) { return ::hx::Val( dispatchListeners_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"enablePhysicalMouse") ) { return ::hx::Val( enablePhysicalMouse ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SceneEvents_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"onOut") ) { onOut=inValue.Cast<  ::hxd::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isOut") ) { isOut=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast<  ::hxd::Window >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scenes") ) { scenes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onOver") ) { onOver=inValue.Cast<  ::hxd::Event >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"overList") ) { overList=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pushList") ) { pushList=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"checkPos") ) { checkPos=inValue.Cast<  ::hxd::Event >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"overIndex") ) { overIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastTouch") ) { lastTouch=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"focusLost") ) { focusLost=inValue.Cast<  ::hxd::Event >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentDrag") ) { currentDrag=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFocus") ) { currentFocus=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingEvents") ) { pendingEvents=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultCursor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_defaultCursor(inValue.Cast<  ::hxd::Cursor >()) );defaultCursor=inValue.Cast<  ::hxd::Cursor >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"overCandidates") ) { overCandidates=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseCheckMove") ) { mouseCheckMove=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"enablePhysicalMouse") ) { enablePhysicalMouse=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SceneEvents_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("window",f0,93,8c,52));
	outFields->push(HX_("scenes",a7,49,cc,3e));
	outFields->push(HX_("overList",d2,13,0a,30));
	outFields->push(HX_("overCandidates",44,8d,79,c6));
	outFields->push(HX_("overIndex",1e,29,d6,21));
	outFields->push(HX_("currentFocus",df,44,95,4b));
	outFields->push(HX_("pendingEvents",d0,b6,38,90));
	outFields->push(HX_("pushList",58,4f,a4,16));
	outFields->push(HX_("currentDrag",cd,04,02,7b));
	outFields->push(HX_("mouseX",93,4a,0e,cc));
	outFields->push(HX_("mouseY",94,4a,0e,cc));
	outFields->push(HX_("lastTouch",89,45,e0,60));
	outFields->push(HX_("focusLost",dc,01,43,1f));
	outFields->push(HX_("checkPos",ac,29,e8,ac));
	outFields->push(HX_("onOut",af,34,6c,32));
	outFields->push(HX_("onOver",13,9a,42,ec));
	outFields->push(HX_("isOut",c4,ca,52,c1));
	outFields->push(HX_("enablePhysicalMouse",0b,38,3b,6c));
	outFields->push(HX_("mouseCheckMove",14,09,1f,2e));
	outFields->push(HX_("defaultCursor",77,62,61,39));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SceneEvents_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::Window */ ,(int)offsetof(SceneEvents_obj,window),HX_("window",f0,93,8c,52)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(SceneEvents_obj,scenes),HX_("scenes",a7,49,cc,3e)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(SceneEvents_obj,overList),HX_("overList",d2,13,0a,30)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(SceneEvents_obj,overCandidates),HX_("overCandidates",44,8d,79,c6)},
	{::hx::fsInt,(int)offsetof(SceneEvents_obj,overIndex),HX_("overIndex",1e,29,d6,21)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(SceneEvents_obj,currentFocus),HX_("currentFocus",df,44,95,4b)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(SceneEvents_obj,pendingEvents),HX_("pendingEvents",d0,b6,38,90)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(SceneEvents_obj,pushList),HX_("pushList",58,4f,a4,16)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SceneEvents_obj,currentDrag),HX_("currentDrag",cd,04,02,7b)},
	{::hx::fsFloat,(int)offsetof(SceneEvents_obj,mouseX),HX_("mouseX",93,4a,0e,cc)},
	{::hx::fsFloat,(int)offsetof(SceneEvents_obj,mouseY),HX_("mouseY",94,4a,0e,cc)},
	{::hx::fsInt,(int)offsetof(SceneEvents_obj,lastTouch),HX_("lastTouch",89,45,e0,60)},
	{::hx::fsObject /*  ::hxd::Event */ ,(int)offsetof(SceneEvents_obj,focusLost),HX_("focusLost",dc,01,43,1f)},
	{::hx::fsObject /*  ::hxd::Event */ ,(int)offsetof(SceneEvents_obj,checkPos),HX_("checkPos",ac,29,e8,ac)},
	{::hx::fsObject /*  ::hxd::Event */ ,(int)offsetof(SceneEvents_obj,onOut),HX_("onOut",af,34,6c,32)},
	{::hx::fsObject /*  ::hxd::Event */ ,(int)offsetof(SceneEvents_obj,onOver),HX_("onOver",13,9a,42,ec)},
	{::hx::fsBool,(int)offsetof(SceneEvents_obj,isOut),HX_("isOut",c4,ca,52,c1)},
	{::hx::fsBool,(int)offsetof(SceneEvents_obj,enablePhysicalMouse),HX_("enablePhysicalMouse",0b,38,3b,6c)},
	{::hx::fsBool,(int)offsetof(SceneEvents_obj,mouseCheckMove),HX_("mouseCheckMove",14,09,1f,2e)},
	{::hx::fsObject /*  ::hxd::Cursor */ ,(int)offsetof(SceneEvents_obj,defaultCursor),HX_("defaultCursor",77,62,61,39)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SceneEvents_obj_sStaticStorageInfo = 0;
#endif

static ::String SceneEvents_obj_sMemberFields[] = {
	HX_("window",f0,93,8c,52),
	HX_("scenes",a7,49,cc,3e),
	HX_("overList",d2,13,0a,30),
	HX_("overCandidates",44,8d,79,c6),
	HX_("overIndex",1e,29,d6,21),
	HX_("currentFocus",df,44,95,4b),
	HX_("pendingEvents",d0,b6,38,90),
	HX_("pushList",58,4f,a4,16),
	HX_("currentDrag",cd,04,02,7b),
	HX_("mouseX",93,4a,0e,cc),
	HX_("mouseY",94,4a,0e,cc),
	HX_("lastTouch",89,45,e0,60),
	HX_("focusLost",dc,01,43,1f),
	HX_("checkPos",ac,29,e8,ac),
	HX_("onOut",af,34,6c,32),
	HX_("onOver",13,9a,42,ec),
	HX_("isOut",c4,ca,52,c1),
	HX_("enablePhysicalMouse",0b,38,3b,6c),
	HX_("mouseCheckMove",14,09,1f,2e),
	HX_("defaultCursor",77,62,61,39),
	HX_("setMousePos",31,6e,7f,d4),
	HX_("onRemove",c3,92,35,e4),
	HX_("addScene",6b,ff,2e,f2),
	HX_("removeScene",68,b6,05,77),
	HX_("dispose",9f,80,4c,bb),
	HX_("focus",d8,5f,89,04),
	HX_("blur",a7,42,19,41),
	HX_("checkFocus",f0,61,79,14),
	HX_("emitEvent",c7,cc,5e,0c),
	HX_("checkEvents",01,22,7c,78),
	HX_("startCapture",44,b4,fd,18),
	HX_("stopCapture",a4,ec,09,f7),
	HX_("startDrag",76,a5,63,fb),
	HX_("stopDrag",16,71,2a,95),
	HX_("getFocus",62,6f,60,64),
	HX_("updateCursor",bf,35,ac,3e),
	HX_("set_defaultCursor",da,45,3f,63),
	HX_("selectCursor",f2,82,20,23),
	HX_("onEvent",7b,66,02,0c),
	HX_("dispatchListeners",65,cf,2e,b5),
	::String(null()) };

::hx::Class SceneEvents_obj::__mClass;

void SceneEvents_obj::__register()
{
	SceneEvents_obj _hx_dummy;
	SceneEvents_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.SceneEvents",4b,e9,d9,fb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SceneEvents_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SceneEvents_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SceneEvents_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SceneEvents_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
