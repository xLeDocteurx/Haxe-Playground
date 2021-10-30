#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_ds__List_ListNode
#include <haxe/ds/_List/ListNode.h>
#endif
#ifndef INCLUDED_hxd_DisplayMode
#include <hxd/DisplayMode.h>
#endif
#ifndef INCLUDED_hxd_Event
#include <hxd/Event.h>
#endif
#ifndef INCLUDED_hxd_Window
#include <hxd/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bfde60a635410e75_26_new,"hxd.Window","new",0x54ccbbdc,"hxd.Window.new","hxd/Window.hx",26,0x0466eaf3)
HX_LOCAL_STACK_FRAME(_hx_pos_bfde60a635410e75_32___default_onClose,"hxd.Window","__default_onClose",0x470eceb7,"hxd.Window.__default_onClose","hxd/Window.hx",32,0x0466eaf3)
HX_LOCAL_STACK_FRAME(_hx_pos_bfde60a635410e75_36_event,"hxd.Window","event",0x8aec8a96,"hxd.Window.event","hxd/Window.hx",36,0x0466eaf3)
HX_LOCAL_STACK_FRAME(_hx_pos_bfde60a635410e75_41_addEventTarget,"hxd.Window","addEventTarget",0x90f3546e,"hxd.Window.addEventTarget","hxd/Window.hx",41,0x0466eaf3)
HX_LOCAL_STACK_FRAME(_hx_pos_bfde60a635410e75_45_removeEventTarget,"hxd.Window","removeEventTarget",0xf08a65a3,"hxd.Window.removeEventTarget","hxd/Window.hx",45,0x0466eaf3)
HX_LOCAL_STACK_FRAME(_hx_pos_bfde60a635410e75_53_addResizeEvent,"hxd.Window","addResizeEvent",0x6b815ee9,"hxd.Window.addResizeEvent","hxd/Window.hx",53,0x0466eaf3)
HX_LOCAL_STACK_FRAME(_hx_pos_bfde60a635410e75_57_removeResizeEvent,"hxd.Window","removeResizeEvent",0xcb18701e,"hxd.Window.removeResizeEvent","hxd/Window.hx",57,0x0466eaf3)
HX_LOCAL_STACK_FRAME(_hx_pos_bfde60a635410e75_65_onResize,"hxd.Window","onResize",0xd2bc4377,"hxd.Window.onResize","hxd/Window.hx",65,0x0466eaf3)
HX_LOCAL_STACK_FRAME(_hx_pos_bfde60a635410e75_69_resize,"hxd.Window","resize",0x761dc3f8,"hxd.Window.resize","hxd/Window.hx",69,0x0466eaf3)
HX_LOCAL_STACK_FRAME(_hx_pos_bfde60a635410e75_73_setFullScreen,"hxd.Window","setFullScreen",0x02698b19,"hxd.Window.setFullScreen","hxd/Window.hx",73,0x0466eaf3)
HX_LOCAL_STACK_FRAME(_hx_pos_bfde60a635410e75_83_get_mouseX,"hxd.Window","get_mouseX",0x6a4f7660,"hxd.Window.get_mouseX","hxd/Window.hx",83,0x0466eaf3)
HX_LOCAL_STACK_FRAME(_hx_pos_bfde60a635410e75_87_get_mouseY,"hxd.Window","get_mouseY",0x6a4f7661,"hxd.Window.get_mouseY","hxd/Window.hx",87,0x0466eaf3)
HX_LOCAL_STACK_FRAME(_hx_pos_bfde60a635410e75_91_get_width,"hxd.Window","get_width",0x64ecc2d9,"hxd.Window.get_width","hxd/Window.hx",91,0x0466eaf3)
HX_LOCAL_STACK_FRAME(_hx_pos_bfde60a635410e75_95_get_height,"hxd.Window","get_height",0xa08d33b4,"hxd.Window.get_height","hxd/Window.hx",95,0x0466eaf3)
HX_LOCAL_STACK_FRAME(_hx_pos_bfde60a635410e75_99_get_mouseLock,"hxd.Window","get_mouseLock",0xe818c703,"hxd.Window.get_mouseLock","hxd/Window.hx",99,0x0466eaf3)
HX_LOCAL_STACK_FRAME(_hx_pos_bfde60a635410e75_102_set_mouseLock,"hxd.Window","set_mouseLock",0x2d1ea90f,"hxd.Window.set_mouseLock","hxd/Window.hx",102,0x0466eaf3)
HX_LOCAL_STACK_FRAME(_hx_pos_bfde60a635410e75_107_get_vsync,"hxd.Window","get_vsync",0xd8323aa4,"hxd.Window.get_vsync","hxd/Window.hx",107,0x0466eaf3)
HX_LOCAL_STACK_FRAME(_hx_pos_bfde60a635410e75_109_set_vsync,"hxd.Window","set_vsync",0xbb8326b0,"hxd.Window.set_vsync","hxd/Window.hx",109,0x0466eaf3)
HX_LOCAL_STACK_FRAME(_hx_pos_bfde60a635410e75_114_get_isFocused,"hxd.Window","get_isFocused",0x398e4dc0,"hxd.Window.get_isFocused","hxd/Window.hx",114,0x0466eaf3)
HX_LOCAL_STACK_FRAME(_hx_pos_bfde60a635410e75_117_get_displayMode,"hxd.Window","get_displayMode",0x961f5fd8,"hxd.Window.get_displayMode","hxd/Window.hx",117,0x0466eaf3)
HX_LOCAL_STACK_FRAME(_hx_pos_bfde60a635410e75_120_set_displayMode,"hxd.Window","set_displayMode",0x91eadce4,"hxd.Window.set_displayMode","hxd/Window.hx",120,0x0466eaf3)
HX_LOCAL_STACK_FRAME(_hx_pos_bfde60a635410e75_124_get_title,"hxd.Window","get_title",0xaac5226b,"hxd.Window.get_title","hxd/Window.hx",124,0x0466eaf3)
HX_LOCAL_STACK_FRAME(_hx_pos_bfde60a635410e75_127_set_title,"hxd.Window","set_title",0x8e160e77,"hxd.Window.set_title","hxd/Window.hx",127,0x0466eaf3)
HX_LOCAL_STACK_FRAME(_hx_pos_bfde60a635410e75_77_getInstance,"hxd.Window","getInstance",0xd49fa9c7,"hxd.Window.getInstance","hxd/Window.hx",77,0x0466eaf3)
HX_LOCAL_STACK_FRAME(_hx_pos_bfde60a635410e75_76_boot,"hxd.Window","boot",0xd670a536,"hxd.Window.boot","hxd/Window.hx",76,0x0466eaf3)
namespace hxd{

void Window_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_bfde60a635410e75_26_new)
HXLINE(  27)		this->eventTargets =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE(  28)		this->resizeEvents =  ::haxe::ds::List_obj::__alloc( HX_CTX );
            	}

Dynamic Window_obj::__CreateEmpty() { return new Window_obj; }

void *Window_obj::_hx_vtable = 0;

Dynamic Window_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Window_obj > _hx_result = new Window_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Window_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ef7d764;
}

HX_BEGIN_DEFAULT_FUNC(__default_onClose,Window_obj)
bool _hx_run(){
            	HX_STACKFRAME(&_hx_pos_bfde60a635410e75_32___default_onClose)
HXDLIN(  32)		return true;
            	}
HX_END_LOCAL_FUNC0(return )
HX_END_DEFAULT_FUNC

void Window_obj::event( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_bfde60a635410e75_36_event)
HXDLIN(  36)		 ::haxe::ds::_List::ListNode _g_head = this->eventTargets->h;
HXDLIN(  36)		while(::hx::IsNotNull( _g_head )){
HXDLIN(  36)			 ::Dynamic val = _g_head->item;
HXDLIN(  36)			_g_head = _g_head->next;
HXDLIN(  36)			 ::Dynamic et = val;
HXLINE(  37)			et(e);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,event,(void))

void Window_obj::addEventTarget( ::Dynamic et){
            	HX_STACKFRAME(&_hx_pos_bfde60a635410e75_41_addEventTarget)
HXDLIN(  41)		this->eventTargets->add(et);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,addEventTarget,(void))

void Window_obj::removeEventTarget( ::Dynamic et){
            	HX_STACKFRAME(&_hx_pos_bfde60a635410e75_45_removeEventTarget)
HXDLIN(  45)		 ::haxe::ds::_List::ListNode _g_head = this->eventTargets->h;
HXDLIN(  45)		while(::hx::IsNotNull( _g_head )){
HXDLIN(  45)			 ::Dynamic val = _g_head->item;
HXDLIN(  45)			_g_head = _g_head->next;
HXDLIN(  45)			 ::Dynamic e = val;
HXLINE(  46)			if (::Reflect_obj::compareMethods(e,et)) {
HXLINE(  47)				this->eventTargets->remove(e);
HXLINE(  48)				goto _hx_goto_5;
            			}
            		}
            		_hx_goto_5:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,removeEventTarget,(void))

void Window_obj::addResizeEvent( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_bfde60a635410e75_53_addResizeEvent)
HXDLIN(  53)		this->resizeEvents->push(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,addResizeEvent,(void))

void Window_obj::removeResizeEvent( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_bfde60a635410e75_57_removeResizeEvent)
HXDLIN(  57)		 ::haxe::ds::_List::ListNode _g_head = this->resizeEvents->h;
HXDLIN(  57)		while(::hx::IsNotNull( _g_head )){
HXDLIN(  57)			 ::Dynamic val = _g_head->item;
HXDLIN(  57)			_g_head = _g_head->next;
HXDLIN(  57)			 ::Dynamic e = val;
HXLINE(  58)			if (::Reflect_obj::compareMethods(e,f)) {
HXLINE(  59)				this->resizeEvents->remove(f);
HXLINE(  60)				goto _hx_goto_8;
            			}
            		}
            		_hx_goto_8:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,removeResizeEvent,(void))

void Window_obj::onResize( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_bfde60a635410e75_65_onResize)
HXDLIN(  65)		 ::haxe::ds::_List::ListNode _g_head = this->resizeEvents->h;
HXDLIN(  65)		while(::hx::IsNotNull( _g_head )){
HXDLIN(  65)			 ::Dynamic val = _g_head->item;
HXDLIN(  65)			_g_head = _g_head->next;
HXDLIN(  65)			 ::Dynamic r = val;
HXLINE(  66)			r();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,onResize,(void))

void Window_obj::resize(int width,int height){
            	HX_STACKFRAME(&_hx_pos_bfde60a635410e75_69_resize)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,resize,(void))

void Window_obj::setFullScreen(bool v){
            	HX_STACKFRAME(&_hx_pos_bfde60a635410e75_73_setFullScreen)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,setFullScreen,(void))

int Window_obj::get_mouseX(){
            	HX_STACKFRAME(&_hx_pos_bfde60a635410e75_83_get_mouseX)
HXDLIN(  83)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_mouseX,return )

int Window_obj::get_mouseY(){
            	HX_STACKFRAME(&_hx_pos_bfde60a635410e75_87_get_mouseY)
HXDLIN(  87)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_mouseY,return )

int Window_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_bfde60a635410e75_91_get_width)
HXDLIN(  91)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_width,return )

int Window_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_bfde60a635410e75_95_get_height)
HXDLIN(  95)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_height,return )

bool Window_obj::get_mouseLock(){
            	HX_STACKFRAME(&_hx_pos_bfde60a635410e75_99_get_mouseLock)
HXDLIN(  99)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_mouseLock,return )

bool Window_obj::set_mouseLock(bool v){
            	HX_STACKFRAME(&_hx_pos_bfde60a635410e75_102_set_mouseLock)
HXLINE( 103)		if (v) {
HXLINE( 103)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
            		}
HXLINE( 104)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_mouseLock,return )

bool Window_obj::get_vsync(){
            	HX_STACKFRAME(&_hx_pos_bfde60a635410e75_107_get_vsync)
HXDLIN( 107)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_vsync,return )

bool Window_obj::set_vsync(bool b){
            	HX_STACKFRAME(&_hx_pos_bfde60a635410e75_109_set_vsync)
HXLINE( 110)		if (!(b)) {
HXLINE( 110)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Can't disable vsync on this platform",be,8c,49,71)));
            		}
HXLINE( 111)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_vsync,return )

bool Window_obj::get_isFocused(){
            	HX_STACKFRAME(&_hx_pos_bfde60a635410e75_114_get_isFocused)
HXDLIN( 114)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_isFocused,return )

 ::hxd::DisplayMode Window_obj::get_displayMode(){
            	HX_STACKFRAME(&_hx_pos_bfde60a635410e75_117_get_displayMode)
HXDLIN( 117)		return ::hxd::DisplayMode_obj::Windowed_dyn();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_displayMode,return )

 ::hxd::DisplayMode Window_obj::set_displayMode( ::hxd::DisplayMode m){
            	HX_STACKFRAME(&_hx_pos_bfde60a635410e75_120_set_displayMode)
HXDLIN( 120)		return m;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_displayMode,return )

::String Window_obj::get_title(){
            	HX_STACKFRAME(&_hx_pos_bfde60a635410e75_124_get_title)
HXDLIN( 124)		return HX_("",00,00,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_title,return )

::String Window_obj::set_title(::String t){
            	HX_STACKFRAME(&_hx_pos_bfde60a635410e75_127_set_title)
HXDLIN( 127)		return t;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_title,return )

 ::hxd::Window Window_obj::inst;

 ::hxd::Window Window_obj::getInstance(){
            	HX_GC_STACKFRAME(&_hx_pos_bfde60a635410e75_77_getInstance)
HXLINE(  78)		if (::hx::IsNull( ::hxd::Window_obj::inst )) {
HXLINE(  78)			::hxd::Window_obj::inst =  ::hxd::Window_obj::__alloc( HX_CTX );
            		}
HXLINE(  79)		return ::hxd::Window_obj::inst;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Window_obj,getInstance,return )


void Window_obj::__alloc_dynamic_functions(::hx::Ctx *_hx_ctx,Window_obj *_hx_obj) {
	if (!_hx_obj->onClose.mPtr) _hx_obj->onClose = new __default_onClose(_hx_obj);
}
::hx::ObjectPtr< Window_obj > Window_obj::__new() {
	::hx::ObjectPtr< Window_obj > __this = new Window_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Window_obj > Window_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Window_obj *__this = (Window_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Window_obj), true, "hxd.Window"));
	*(void **)__this = Window_obj::_hx_vtable;
	hxd::Window_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct();
	return __this;
}

Window_obj::Window_obj()
{
	onClose = new __default_onClose(this);
}

void Window_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Window);
	HX_MARK_MEMBER_NAME(resizeEvents,"resizeEvents");
	HX_MARK_MEMBER_NAME(eventTargets,"eventTargets");
	HX_MARK_MEMBER_NAME(onClose,"onClose");
	HX_MARK_END_CLASS();
}

void Window_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(resizeEvents,"resizeEvents");
	HX_VISIT_MEMBER_NAME(eventTargets,"eventTargets");
	HX_VISIT_MEMBER_NAME(onClose,"onClose");
}

::hx::Val Window_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_width() ); }
		if (HX_FIELD_EQ(inName,"vsync") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vsync() ); }
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_title() ); }
		if (HX_FIELD_EQ(inName,"event") ) { return ::hx::Val( event_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_height() ); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mouseX() ); }
		if (HX_FIELD_EQ(inName,"mouseY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mouseY() ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onClose") ) { return ::hx::Val( onClose ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResize") ) { return ::hx::Val( onResize_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mouseLock") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mouseLock() ); }
		if (HX_FIELD_EQ(inName,"isFocused") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isFocused() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vsync") ) { return ::hx::Val( get_vsync_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_vsync") ) { return ::hx::Val( set_vsync_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_title") ) { return ::hx::Val( get_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_title") ) { return ::hx::Val( set_title_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return ::hx::Val( get_mouseX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return ::hx::Val( get_mouseY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displayMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_displayMode() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resizeEvents") ) { return ::hx::Val( resizeEvents ); }
		if (HX_FIELD_EQ(inName,"eventTargets") ) { return ::hx::Val( eventTargets ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setFullScreen") ) { return ::hx::Val( setFullScreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mouseLock") ) { return ::hx::Val( get_mouseLock_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_mouseLock") ) { return ::hx::Val( set_mouseLock_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_isFocused") ) { return ::hx::Val( get_isFocused_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addEventTarget") ) { return ::hx::Val( addEventTarget_dyn() ); }
		if (HX_FIELD_EQ(inName,"addResizeEvent") ) { return ::hx::Val( addResizeEvent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_displayMode") ) { return ::hx::Val( get_displayMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_displayMode") ) { return ::hx::Val( set_displayMode_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"removeEventTarget") ) { return ::hx::Val( removeEventTarget_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeResizeEvent") ) { return ::hx::Val( removeResizeEvent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Window_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"inst") ) { outValue = ( inst ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { outValue = getInstance_dyn(); return true; }
	}
	return false;
}

::hx::Val Window_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"vsync") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_vsync(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_title(inValue.Cast< ::String >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onClose") ) { onClose=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mouseLock") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_mouseLock(inValue.Cast< bool >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displayMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_displayMode(inValue.Cast<  ::hxd::DisplayMode >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resizeEvents") ) { resizeEvents=inValue.Cast<  ::haxe::ds::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eventTargets") ) { eventTargets=inValue.Cast<  ::haxe::ds::List >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Window_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"inst") ) { inst=ioValue.Cast<  ::hxd::Window >(); return true; }
	}
	return false;
}

void Window_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("resizeEvents",2d,0c,78,7a));
	outFields->push(HX_("eventTargets",08,eb,bc,18));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("mouseX",93,4a,0e,cc));
	outFields->push(HX_("mouseY",94,4a,0e,cc));
	outFields->push(HX_("mouseLock",b0,54,0c,f4));
	outFields->push(HX_("vsync",d1,2d,a8,3d));
	outFields->push(HX_("isFocused",6d,db,81,45));
	outFields->push(HX_("title",98,15,3b,10));
	outFields->push(HX_("displayMode",c5,72,53,30));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Window_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::List */ ,(int)offsetof(Window_obj,resizeEvents),HX_("resizeEvents",2d,0c,78,7a)},
	{::hx::fsObject /*  ::haxe::ds::List */ ,(int)offsetof(Window_obj,eventTargets),HX_("eventTargets",08,eb,bc,18)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Window_obj,onClose),HX_("onClose",19,b6,a0,de)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Window_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::Window */ ,(void *) &Window_obj::inst,HX_("inst",c6,43,bb,45)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Window_obj_sMemberFields[] = {
	HX_("resizeEvents",2d,0c,78,7a),
	HX_("eventTargets",08,eb,bc,18),
	HX_("onClose",19,b6,a0,de),
	HX_("event",1a,c8,c4,75),
	HX_("addEventTarget",6a,46,11,70),
	HX_("removeEventTarget",27,d9,8a,94),
	HX_("addResizeEvent",e5,50,9f,4a),
	HX_("removeResizeEvent",a2,e3,18,6f),
	HX_("onResize",73,50,28,e8),
	HX_("resize",f4,59,7b,08),
	HX_("setFullScreen",9d,ec,c0,cf),
	HX_("get_mouseX",5c,ba,95,bc),
	HX_("get_mouseY",5d,ba,95,bc),
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	HX_("get_mouseLock",87,28,70,b5),
	HX_("set_mouseLock",93,0a,76,fa),
	HX_("get_vsync",28,8a,51,81),
	HX_("set_vsync",34,76,a2,64),
	HX_("get_isFocused",44,af,e5,06),
	HX_("get_displayMode",5c,2a,35,f1),
	HX_("set_displayMode",68,a7,00,ed),
	HX_("get_title",ef,71,e4,53),
	HX_("set_title",fb,5d,35,37),
	::String(null()) };

static void Window_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Window_obj::inst,"inst");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Window_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Window_obj::inst,"inst");
};

#endif

::hx::Class Window_obj::__mClass;

static ::String Window_obj_sStaticFields[] = {
	HX_("inst",c6,43,bb,45),
	HX_("getInstance",4b,e2,d4,7f),
	::String(null())
};

void Window_obj::__register()
{
	Window_obj _hx_dummy;
	Window_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.Window",ea,dd,1a,57);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Window_obj::__GetStatic;
	__mClass->mSetStaticField = &Window_obj::__SetStatic;
	__mClass->mMarkFunc = Window_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Window_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Window_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Window_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Window_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Window_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Window_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Window_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_bfde60a635410e75_76_boot)
HXDLIN(  76)		inst = null();
            	}
}

} // end namespace hxd
