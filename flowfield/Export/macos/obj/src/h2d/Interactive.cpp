#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h2d_Drawable
#include <h2d/Drawable.h>
#endif
#ifndef INCLUDED_h2d_Interactive
#include <h2d/Interactive.h>
#endif
#ifndef INCLUDED_h2d_Layers
#include <h2d/Layers.h>
#endif
#ifndef INCLUDED_h2d_Mask
#include <h2d/Mask.h>
#endif
#ifndef INCLUDED_h2d_Object
#include <h2d/Object.h>
#endif
#ifndef INCLUDED_h2d_RenderContext
#include <h2d/RenderContext.h>
#endif
#ifndef INCLUDED_h2d_Scene
#include <h2d/Scene.h>
#endif
#ifndef INCLUDED_h2d_Tile
#include <h2d/Tile.h>
#endif
#ifndef INCLUDED_h2d_col_Bounds
#include <h2d/col/Bounds.h>
#endif
#ifndef INCLUDED_h2d_col_Collider
#include <h2d/col/Collider.h>
#endif
#ifndef INCLUDED_h2d_col_Point
#include <h2d/col/Point.h>
#endif
#ifndef INCLUDED_h3d_IDrawable
#include <h3d/IDrawable.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_07304c1e7b834c1c_14_new,"h2d.Interactive","new",0x84cccda0,"h2d.Interactive.new","h2d/Interactive.hx",14,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_85_onAdd,"h2d.Interactive","onAdd",0x85045382,"h2d.Interactive.onAdd","h2d/Interactive.hx",85,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_93_draw,"h2d.Interactive","draw",0xa7d4c6c4,"h2d.Interactive.draw","h2d/Interactive.hx",93,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_96_getBoundsRec,"h2d.Interactive","getBoundsRec",0x5122b925,"h2d.Interactive.getBoundsRec","h2d/Interactive.hx",96,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_102_onHierarchyMoved,"h2d.Interactive","onHierarchyMoved",0xe93b96bd,"h2d.Interactive.onHierarchyMoved","h2d/Interactive.hx",102,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_114_updateMask,"h2d.Interactive","updateMask",0xa2f85655,"h2d.Interactive.updateMask","h2d/Interactive.hx",114,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_127_onRemove,"h2d.Interactive","onRemove",0x0dde8d83,"h2d.Interactive.onRemove","h2d/Interactive.hx",127,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_136_checkBounds,"h2d.Interactive","checkBounds",0x55c7969d,"h2d.Interactive.checkBounds","h2d/Interactive.hx",136,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_146_preventClick,"h2d.Interactive","preventClick",0xc3229910,"h2d.Interactive.preventClick","h2d/Interactive.hx",146,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_151_getInteractiveScene,"h2d.Interactive","getInteractiveScene",0xf0ce5e00,"h2d.Interactive.getInteractiveScene","h2d/Interactive.hx",151,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_155_handleEvent,"h2d.Interactive","handleEvent",0x35a6b092,"h2d.Interactive.handleEvent","h2d/Interactive.hx",155,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_228_calcAbsPos,"h2d.Interactive","calcAbsPos",0xd8ff4d77,"h2d.Interactive.calcAbsPos","h2d/Interactive.hx",228,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_233_set_cursor,"h2d.Interactive","set_cursor",0xd4dac7d3,"h2d.Interactive.set_cursor","h2d/Interactive.hx",233,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_240_eventToLocal,"h2d.Interactive","eventToLocal",0xad6767b6,"h2d.Interactive.eventToLocal","h2d/Interactive.hx",240,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_265_startCapture,"h2d.Interactive","startCapture",0xf09b0f04,"h2d.Interactive.startCapture","h2d/Interactive.hx",265,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_264_startCapture,"h2d.Interactive","startCapture",0xf09b0f04,"h2d.Interactive.startCapture","h2d/Interactive.hx",264,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_278_stopCapture,"h2d.Interactive","stopCapture",0x04a229e4,"h2d.Interactive.stopCapture","h2d/Interactive.hx",278,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_283_startDrag,"h2d.Interactive","startDrag",0x459612b6,"h2d.Interactive.startDrag","h2d/Interactive.hx",283,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_288_stopDrag,"h2d.Interactive","stopDrag",0xbed36bd6,"h2d.Interactive.stopDrag","h2d/Interactive.hx",288,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_296_focus,"h2d.Interactive","focus",0x572c2d18,"h2d.Interactive.focus","h2d/Interactive.hx",296,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_308_blur,"h2d.Interactive","blur",0xa67ddd67,"h2d.Interactive.blur","h2d/Interactive.hx",308,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_315_isOver,"h2d.Interactive","isOver",0x62f0211e,"h2d.Interactive.isOver","h2d/Interactive.hx",315,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_322_hasFocus,"h2d.Interactive","hasFocus",0xba8aa4de,"h2d.Interactive.hasFocus","h2d/Interactive.hx",322,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_331___default_onOver,"h2d.Interactive","__default_onOver",0xf82a22f1,"h2d.Interactive.__default_onOver","h2d/Interactive.hx",331,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_338___default_onOut,"h2d.Interactive","__default_onOut",0x8089f191,"h2d.Interactive.__default_onOut","h2d/Interactive.hx",338,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_344___default_onPush,"h2d.Interactive","__default_onPush",0xf8d2a377,"h2d.Interactive.__default_onPush","h2d/Interactive.hx",344,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_358___default_onRelease,"h2d.Interactive","__default_onRelease",0xc6d3144a,"h2d.Interactive.__default_onRelease","h2d/Interactive.hx",358,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_368___default_onReleaseOutside,"h2d.Interactive","__default_onReleaseOutside",0x36bc1dfb,"h2d.Interactive.__default_onReleaseOutside","h2d/Interactive.hx",368,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_378___default_onClick,"h2d.Interactive","__default_onClick",0x3d4c540b,"h2d.Interactive.__default_onClick","h2d/Interactive.hx",378,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_389___default_onMove,"h2d.Interactive","__default_onMove",0xf6d274ae,"h2d.Interactive.__default_onMove","h2d/Interactive.hx",389,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_395___default_onWheel,"h2d.Interactive","__default_onWheel",0xbea80c5e,"h2d.Interactive.__default_onWheel","h2d/Interactive.hx",395,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_403___default_onFocus,"h2d.Interactive","__default_onFocus",0xf977379b,"h2d.Interactive.__default_onFocus","h2d/Interactive.hx",403,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_411___default_onFocusLost,"h2d.Interactive","__default_onFocusLost",0xfc8b771f,"h2d.Interactive.__default_onFocusLost","h2d/Interactive.hx",411,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_418___default_onKeyUp,"h2d.Interactive","__default_onKeyUp",0xd3ec919d,"h2d.Interactive.__default_onKeyUp","h2d/Interactive.hx",418,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_425___default_onKeyDown,"h2d.Interactive","__default_onKeyDown",0x0a2cf824,"h2d.Interactive.__default_onKeyDown","h2d/Interactive.hx",425,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_436___default_onCheck,"h2d.Interactive","__default_onCheck",0x3aa4708b,"h2d.Interactive.__default_onCheck","h2d/Interactive.hx",436,0x08606591)
HX_LOCAL_STACK_FRAME(_hx_pos_07304c1e7b834c1c_442___default_onTextInput,"h2d.Interactive","__default_onTextInput",0x3453c960,"h2d.Interactive.__default_onTextInput","h2d/Interactive.hx",442,0x08606591)
namespace h2d{

void Interactive_obj::__construct(Float width,Float height, ::h2d::Object parent,::Dynamic shape){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_14_new)
HXLINE(  69)		this->shapeY = ((Float)0);
HXLINE(  65)		this->shapeX = ((Float)0);
HXLINE(  53)		this->mouseDownButton = -1;
HXLINE(  51)		this->enableRightButton = false;
HXLINE(  39)		this->propagateEvents = false;
HXLINE(  35)		this->cancelEvents = false;
HXLINE(  27)		this->cursor = ::hxd::Cursor_obj::Button_dyn();
HXLINE(  79)		super::__construct(parent);
HXLINE(  80)		this->width = width;
HXLINE(  81)		this->height = height;
HXLINE(  82)		this->shape = shape;
            	}

Dynamic Interactive_obj::__CreateEmpty() { return new Interactive_obj; }

void *Interactive_obj::_hx_vtable = 0;

Dynamic Interactive_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Interactive_obj > _hx_result = new Interactive_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Interactive_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6c6b2aec) {
		if (inClassId<=(int)0x0af28419) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0af28419;
		} else {
			return inClassId==(int)0x6c6b2aec;
		}
	} else {
		return inClassId==(int)0x7bce7bac;
	}
}

static ::hxd::Interactive_obj _hx_h2d_Interactive__hx_hxd_Interactive= {
	(  ::hxd::Cursor (::hx::Object::*)( ::hxd::Cursor))&::h2d::Interactive_obj::set_cursor,
	( void (::hx::Object::*)( ::hxd::Event))&::h2d::Interactive_obj::handleEvent,
	( ::Dynamic (::hx::Object::*)())&::h2d::Interactive_obj::getInteractiveScene,
};

void *Interactive_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xa0bf432e: return &_hx_h2d_Interactive__hx_hxd_Interactive;
	}
	return super::_hx_getInterface(inHash);
}

void Interactive_obj::onAdd(){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_85_onAdd)
HXLINE(  86)		this->scene = this->getScene();
HXLINE(  87)		if (::hx::IsNotNull( this->scene )) {
HXLINE(  87)			this->scene->addEventTarget(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(  88)		this->updateMask();
HXLINE(  89)		this->super::onAdd();
            	}


void Interactive_obj::draw( ::h2d::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_93_draw)
HXDLIN(  93)		if (::hx::IsNotNull( this->backgroundColor )) {
HXDLIN(  93)			 ::Dynamic _hx_tmp = this->backgroundColor;
HXDLIN(  93)			int _hx_tmp1 = ::Std_obj::_hx_int(this->width);
HXDLIN(  93)			int _hx_tmp2 = ::Std_obj::_hx_int(this->height);
HXDLIN(  93)			this->emitTile(ctx,::h2d::Tile_obj::fromColor(( (int)(_hx_tmp) ),_hx_tmp1,_hx_tmp2,(( (Float)(::hx::UShr(( (int)(this->backgroundColor) ),24)) ) / ( (Float)(255) ))));
            		}
            	}


void Interactive_obj::getBoundsRec( ::h2d::Object relativeTo, ::h2d::col::Bounds out,bool forSize){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_96_getBoundsRec)
HXLINE(  97)		this->super::getBoundsRec(relativeTo,out,forSize);
HXLINE(  98)		bool _hx_tmp;
HXDLIN(  98)		if (::hx::IsNull( this->backgroundColor )) {
HXLINE(  98)			_hx_tmp = forSize;
            		}
            		else {
HXLINE(  98)			_hx_tmp = true;
            		}
HXDLIN(  98)		if (_hx_tmp) {
HXLINE(  98)			int _hx_tmp = ::Std_obj::_hx_int(this->width);
HXDLIN(  98)			this->addBounds(relativeTo,out,( (Float)(0) ),( (Float)(0) ),( (Float)(_hx_tmp) ),( (Float)(::Std_obj::_hx_int(this->height)) ));
            		}
            	}


void Interactive_obj::onHierarchyMoved(bool parentChanged){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_102_onHierarchyMoved)
HXLINE( 103)		this->super::onHierarchyMoved(parentChanged);
HXLINE( 104)		if (::hx::IsNotNull( this->scene )) {
HXLINE( 105)			this->scene->removeEventTarget(::hx::ObjectPtr<OBJ_>(this),null());
HXLINE( 106)			this->scene = this->getScene();
HXLINE( 107)			if (::hx::IsNotNull( this->scene )) {
HXLINE( 108)				this->scene->addEventTarget(::hx::ObjectPtr<OBJ_>(this));
            			}
            		}
HXLINE( 110)		if (parentChanged) {
HXLINE( 111)			this->updateMask();
            		}
            	}


void Interactive_obj::updateMask(){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_114_updateMask)
HXLINE( 115)		this->parentMask = null();
HXLINE( 116)		 ::h2d::Object p = this->parent;
HXLINE( 117)		while(::hx::IsNotNull( p )){
HXLINE( 118)			 ::h2d::Mask m = ( ( ::h2d::Mask)(::Std_obj::downcast(p,::hx::ClassOf< ::h2d::Mask >())) );
HXLINE( 119)			if (::hx::IsNotNull( m )) {
HXLINE( 120)				this->parentMask = m;
HXLINE( 121)				goto _hx_goto_5;
            			}
HXLINE( 123)			p = p->parent;
            		}
            		_hx_goto_5:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interactive_obj,updateMask,(void))

void Interactive_obj::onRemove(){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_127_onRemove)
HXLINE( 128)		if (::hx::IsNotNull( this->scene )) {
HXLINE( 129)			this->scene->removeEventTarget(::hx::ObjectPtr<OBJ_>(this),true);
HXLINE( 130)			this->scene = null();
            		}
HXLINE( 132)		this->super::onRemove();
            	}


bool Interactive_obj::checkBounds( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_136_checkBounds)
HXDLIN( 136)		switch((int)(e->kind->_hx_getIndex())){
            			case (int)4: case (int)6: case (int)7: case (int)10: {
HXLINE( 137)				return false;
            			}
            			break;
            			default:{
HXLINE( 138)				return true;
            			}
            		}
HXLINE( 136)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interactive_obj,checkBounds,return )

void Interactive_obj::preventClick(){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_146_preventClick)
HXDLIN( 146)		this->mouseDownButton = -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interactive_obj,preventClick,(void))

::Dynamic Interactive_obj::getInteractiveScene(){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_151_getInteractiveScene)
HXDLIN( 151)		return this->scene;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interactive_obj,getInteractiveScene,return )

void Interactive_obj::handleEvent( ::hxd::Event e){
            	HX_GC_STACKFRAME(&_hx_pos_07304c1e7b834c1c_155_handleEvent)
HXLINE( 156)		bool _hx_tmp;
HXDLIN( 156)		if (::hx::IsNotNull( this->parentMask )) {
HXLINE( 156)			_hx_tmp = this->checkBounds(e);
            		}
            		else {
HXLINE( 156)			_hx_tmp = false;
            		}
HXDLIN( 156)		if (_hx_tmp) {
HXLINE( 157)			 ::h2d::Mask p = this->parentMask;
HXLINE( 158)			 ::h2d::col::Point pt =  ::h2d::col::Point_obj::__alloc( HX_CTX ,e->relX,e->relY);
HXLINE( 159)			this->localToGlobal(pt);
HXLINE( 160)			Float saveX = pt->x;
HXDLIN( 160)			Float saveY = pt->y;
HXLINE( 161)			while(::hx::IsNotNull( p )){
HXLINE( 162)				pt->x = saveX;
HXLINE( 163)				pt->y = saveY;
HXLINE( 164)				 ::h2d::col::Point pt1 = p->globalToLocal(pt);
HXLINE( 165)				bool _hx_tmp;
HXDLIN( 165)				bool _hx_tmp1;
HXDLIN( 165)				bool _hx_tmp2;
HXDLIN( 165)				if (!((pt1->x < 0))) {
HXLINE( 165)					_hx_tmp2 = (pt1->y < 0);
            				}
            				else {
HXLINE( 165)					_hx_tmp2 = true;
            				}
HXDLIN( 165)				if (!(_hx_tmp2)) {
HXLINE( 165)					_hx_tmp1 = (pt1->x > p->width);
            				}
            				else {
HXLINE( 165)					_hx_tmp1 = true;
            				}
HXDLIN( 165)				if (!(_hx_tmp1)) {
HXLINE( 165)					_hx_tmp = (pt1->y > p->height);
            				}
            				else {
HXLINE( 165)					_hx_tmp = true;
            				}
HXDLIN( 165)				if (_hx_tmp) {
HXLINE( 166)					e->cancel = true;
HXLINE( 167)					return;
            				}
HXLINE( 169)				p = p->parentMask;
            			}
            		}
HXLINE( 172)		bool _hx_tmp1;
HXDLIN( 172)		bool _hx_tmp2;
HXDLIN( 172)		if (::hx::IsNull( this->shape )) {
HXLINE( 172)			_hx_tmp2 = this->isEllipse;
            		}
            		else {
HXLINE( 172)			_hx_tmp2 = false;
            		}
HXDLIN( 172)		if (_hx_tmp2) {
HXLINE( 172)			_hx_tmp1 = this->checkBounds(e);
            		}
            		else {
HXLINE( 172)			_hx_tmp1 = false;
            		}
HXDLIN( 172)		if (_hx_tmp1) {
HXLINE( 173)			Float cx = (this->width * ((Float)0.5));
HXDLIN( 173)			Float cy = (this->height * ((Float)0.5));
HXLINE( 174)			Float dx = ((e->relX - cx) / cx);
HXLINE( 175)			Float dy = ((e->relY - cy) / cy);
HXLINE( 176)			if ((((dx * dx) + (dy * dy)) > 1)) {
HXLINE( 177)				e->cancel = true;
HXLINE( 178)				return;
            			}
            		}
HXLINE( 181)		if (this->propagateEvents) {
HXLINE( 181)			e->propagate = true;
            		}
HXLINE( 182)		if (this->cancelEvents) {
HXLINE( 182)			e->cancel = true;
            		}
HXLINE( 183)		switch((int)(e->kind->_hx_getIndex())){
            			case (int)0: {
HXLINE( 187)				bool _hx_tmp;
HXDLIN( 187)				if (!(this->enableRightButton)) {
HXLINE( 187)					_hx_tmp = (e->button == 0);
            				}
            				else {
HXLINE( 187)					_hx_tmp = true;
            				}
HXDLIN( 187)				if (_hx_tmp) {
HXLINE( 188)					this->mouseDownButton = e->button;
HXLINE( 189)					this->onPush(e);
HXLINE( 190)					if (e->cancel) {
HXLINE( 190)						this->mouseDownButton = -1;
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 193)				bool _hx_tmp;
HXDLIN( 193)				if (!(this->enableRightButton)) {
HXLINE( 193)					_hx_tmp = (e->button == 0);
            				}
            				else {
HXLINE( 193)					_hx_tmp = true;
            				}
HXDLIN( 193)				if (_hx_tmp) {
HXLINE( 194)					this->onRelease(e);
HXLINE( 195)					if ((this->mouseDownButton == e->button)) {
HXLINE( 196)						this->onClick(e);
            					}
            				}
HXLINE( 198)				this->mouseDownButton = -1;
            			}
            			break;
            			case (int)2: {
HXLINE( 185)				this->onMove(e);
            			}
            			break;
            			case (int)3: {
HXLINE( 207)				this->onOver(e);
            			}
            			break;
            			case (int)4: {
HXLINE( 209)				this->onOut(e);
            			}
            			break;
            			case (int)5: {
HXLINE( 211)				this->onWheel(e);
            			}
            			break;
            			case (int)6: {
HXLINE( 215)				this->onFocus(e);
            			}
            			break;
            			case (int)7: {
HXLINE( 213)				this->onFocusLost(e);
            			}
            			break;
            			case (int)8: {
HXLINE( 219)				this->onKeyDown(e);
            			}
            			break;
            			case (int)9: {
HXLINE( 217)				this->onKeyUp(e);
            			}
            			break;
            			case (int)10: {
HXLINE( 200)				bool _hx_tmp;
HXDLIN( 200)				if (!(this->enableRightButton)) {
HXLINE( 200)					_hx_tmp = (e->button == 0);
            				}
            				else {
HXLINE( 200)					_hx_tmp = true;
            				}
HXDLIN( 200)				if (_hx_tmp) {
HXLINE( 201)					this->onRelease(e);
HXLINE( 202)					if ((this->mouseDownButton == e->button)) {
HXLINE( 203)						this->onReleaseOutside(e);
            					}
            				}
HXLINE( 205)				this->mouseDownButton = -1;
            			}
            			break;
            			case (int)11: {
HXLINE( 223)				this->onTextInput(e);
            			}
            			break;
            			case (int)12: {
HXLINE( 221)				this->onCheck(e);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interactive_obj,handleEvent,(void))

void Interactive_obj::calcAbsPos(){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_228_calcAbsPos)
HXLINE( 229)		this->super::calcAbsPos();
HXLINE( 230)		this->invDet = (( (Float)(1) ) / ((this->matA * this->matD) - (this->matB * this->matC)));
            	}


 ::hxd::Cursor Interactive_obj::set_cursor( ::hxd::Cursor c){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_233_set_cursor)
HXLINE( 234)		this->cursor = c;
HXLINE( 235)		bool _hx_tmp;
HXDLIN( 235)		if (::hx::IsNotNull( this->scene )) {
HXLINE( 235)			_hx_tmp = ::hx::IsNotNull( this->scene->events );
            		}
            		else {
HXLINE( 235)			_hx_tmp = false;
            		}
HXDLIN( 235)		if (_hx_tmp) {
HXLINE( 236)			this->scene->events->updateCursor(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 237)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interactive_obj,set_cursor,return )

void Interactive_obj::eventToLocal( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_240_eventToLocal)
HXLINE( 242)		 ::h2d::Interactive i = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 244)		Float dx = (e->relX - i->absX);
HXLINE( 245)		Float dy = (e->relY - i->absY);
HXLINE( 247)		e->relX = (((dx * i->matD) - (dy * i->matC)) * i->invDet);
HXLINE( 248)		e->relY = (((-(dx) * i->matB) + (dy * i->matA)) * i->invDet);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interactive_obj,eventToLocal,(void))

void Interactive_obj::startCapture( ::Dynamic callb, ::Dynamic onCancel, ::Dynamic touchId){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::h2d::Interactive,_gthis, ::Dynamic,callb) HXARGC(1)
            		void _hx_run( ::hxd::Event event){
            			HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_265_startCapture)
HXLINE( 266)			Float x = event->relX;
HXDLIN( 266)			Float y = event->relY;
HXLINE( 267)			_gthis->eventToLocal(event);
HXLINE( 268)			callb(event);
HXLINE( 269)			event->relX = x;
HXLINE( 270)			event->relY = y;
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_264_startCapture)
HXDLIN( 264)		 ::h2d::Interactive _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 265)		this->scene->startCapture( ::Dynamic(new _hx_Closure_0(_gthis,callb)),onCancel,touchId);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interactive_obj,startCapture,(void))

void Interactive_obj::stopCapture(){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_278_stopCapture)
HXDLIN( 278)		this->scene->stopCapture();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interactive_obj,stopCapture,(void))

void Interactive_obj::startDrag( ::Dynamic callb, ::Dynamic onCancel){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_283_startDrag)
HXDLIN( 283)		this->startCapture(callb,onCancel,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interactive_obj,startDrag,(void))

void Interactive_obj::stopDrag(){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_288_stopDrag)
HXDLIN( 288)		this->stopCapture();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interactive_obj,stopDrag,(void))

void Interactive_obj::focus(){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_296_focus)
HXLINE( 297)		bool _hx_tmp;
HXDLIN( 297)		if (::hx::IsNotNull( this->scene )) {
HXLINE( 297)			_hx_tmp = ::hx::IsNull( this->scene->events );
            		}
            		else {
HXLINE( 297)			_hx_tmp = true;
            		}
HXDLIN( 297)		if (_hx_tmp) {
HXLINE( 298)			return;
            		}
HXLINE( 299)		this->scene->events->focus(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interactive_obj,focus,(void))

void Interactive_obj::blur(){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_308_blur)
HXDLIN( 308)		if (this->hasFocus()) {
HXDLIN( 308)			this->scene->events->blur();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interactive_obj,blur,(void))

bool Interactive_obj::isOver(){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_315_isOver)
HXDLIN( 315)		bool _hx_tmp;
HXDLIN( 315)		if (::hx::IsNotNull( this->scene )) {
HXDLIN( 315)			_hx_tmp = ::hx::IsNotNull( this->scene->events );
            		}
            		else {
HXDLIN( 315)			_hx_tmp = false;
            		}
HXDLIN( 315)		if (_hx_tmp) {
HXDLIN( 315)			return (this->scene->events->overList->indexOf(::hx::ObjectPtr<OBJ_>(this),null()) != -1);
            		}
            		else {
HXDLIN( 315)			return false;
            		}
HXDLIN( 315)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interactive_obj,isOver,return )

bool Interactive_obj::hasFocus(){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_322_hasFocus)
HXDLIN( 322)		bool _hx_tmp;
HXDLIN( 322)		if (::hx::IsNotNull( this->scene )) {
HXDLIN( 322)			_hx_tmp = ::hx::IsNotNull( this->scene->events );
            		}
            		else {
HXDLIN( 322)			_hx_tmp = false;
            		}
HXDLIN( 322)		if (_hx_tmp) {
HXDLIN( 322)			return ::hx::IsInstanceEq( this->scene->events->currentFocus,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXDLIN( 322)			return false;
            		}
HXDLIN( 322)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interactive_obj,hasFocus,return )

HX_BEGIN_DEFAULT_FUNC(__default_onOver,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_331___default_onOver)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onOut,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_338___default_onOut)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onPush,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_344___default_onPush)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onRelease,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_358___default_onRelease)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onReleaseOutside,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_368___default_onReleaseOutside)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onClick,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_378___default_onClick)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onMove,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_389___default_onMove)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onWheel,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_395___default_onWheel)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onFocus,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_403___default_onFocus)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onFocusLost,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_411___default_onFocusLost)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onKeyUp,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_418___default_onKeyUp)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onKeyDown,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_425___default_onKeyDown)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onCheck,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_436___default_onCheck)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onTextInput,Interactive_obj)
void _hx_run( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_07304c1e7b834c1c_442___default_onTextInput)
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
::hx::ObjectPtr< Interactive_obj > Interactive_obj::__new(Float width,Float height, ::h2d::Object parent,::Dynamic shape) {
	::hx::ObjectPtr< Interactive_obj > __this = new Interactive_obj();
	__this->__construct(width,height,parent,shape);
	return __this;
}

::hx::ObjectPtr< Interactive_obj > Interactive_obj::__alloc(::hx::Ctx *_hx_ctx,Float width,Float height, ::h2d::Object parent,::Dynamic shape) {
	Interactive_obj *__this = (Interactive_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Interactive_obj), true, "h2d.Interactive"));
	*(void **)__this = Interactive_obj::_hx_vtable;
	h2d::Interactive_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(width,height,parent,shape);
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
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(cursor,"cursor");
	HX_MARK_MEMBER_NAME(isEllipse,"isEllipse");
	HX_MARK_MEMBER_NAME(cancelEvents,"cancelEvents");
	HX_MARK_MEMBER_NAME(propagateEvents,"propagateEvents");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(enableRightButton,"enableRightButton");
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(mouseDownButton,"mouseDownButton");
	HX_MARK_MEMBER_NAME(parentMask,"parentMask");
	HX_MARK_MEMBER_NAME(invDet,"invDet");
	HX_MARK_MEMBER_NAME(shape,"shape");
	HX_MARK_MEMBER_NAME(shapeX,"shapeX");
	HX_MARK_MEMBER_NAME(shapeY,"shapeY");
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
	 ::h2d::Drawable_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Interactive_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(cursor,"cursor");
	HX_VISIT_MEMBER_NAME(isEllipse,"isEllipse");
	HX_VISIT_MEMBER_NAME(cancelEvents,"cancelEvents");
	HX_VISIT_MEMBER_NAME(propagateEvents,"propagateEvents");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(enableRightButton,"enableRightButton");
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(mouseDownButton,"mouseDownButton");
	HX_VISIT_MEMBER_NAME(parentMask,"parentMask");
	HX_VISIT_MEMBER_NAME(invDet,"invDet");
	HX_VISIT_MEMBER_NAME(shape,"shape");
	HX_VISIT_MEMBER_NAME(shapeX,"shapeX");
	HX_VISIT_MEMBER_NAME(shapeY,"shapeY");
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
	 ::h2d::Drawable_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Interactive_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		if (HX_FIELD_EQ(inName,"blur") ) { return ::hx::Val( blur_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"scene") ) { return ::hx::Val( scene ); }
		if (HX_FIELD_EQ(inName,"shape") ) { return ::hx::Val( shape ); }
		if (HX_FIELD_EQ(inName,"onAdd") ) { return ::hx::Val( onAdd_dyn() ); }
		if (HX_FIELD_EQ(inName,"focus") ) { return ::hx::Val( focus_dyn() ); }
		if (HX_FIELD_EQ(inName,"onOut") ) { return ::hx::Val( onOut ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"cursor") ) { return ::hx::Val( cursor ); }
		if (HX_FIELD_EQ(inName,"invDet") ) { return ::hx::Val( invDet ); }
		if (HX_FIELD_EQ(inName,"shapeX") ) { return ::hx::Val( shapeX ); }
		if (HX_FIELD_EQ(inName,"shapeY") ) { return ::hx::Val( shapeY ); }
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
		if (HX_FIELD_EQ(inName,"onRemove") ) { return ::hx::Val( onRemove_dyn() ); }
		if (HX_FIELD_EQ(inName,"stopDrag") ) { return ::hx::Val( stopDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasFocus") ) { return ::hx::Val( hasFocus_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isEllipse") ) { return ::hx::Val( isEllipse ); }
		if (HX_FIELD_EQ(inName,"startDrag") ) { return ::hx::Val( startDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"onRelease") ) { return ::hx::Val( onRelease ); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return ::hx::Val( onKeyDown ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parentMask") ) { return ::hx::Val( parentMask ); }
		if (HX_FIELD_EQ(inName,"updateMask") ) { return ::hx::Val( updateMask_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcAbsPos") ) { return ::hx::Val( calcAbsPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cursor") ) { return ::hx::Val( set_cursor_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"checkBounds") ) { return ::hx::Val( checkBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleEvent") ) { return ::hx::Val( handleEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"stopCapture") ) { return ::hx::Val( stopCapture_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return ::hx::Val( onFocusLost ); }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { return ::hx::Val( onTextInput ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cancelEvents") ) { return ::hx::Val( cancelEvents ); }
		if (HX_FIELD_EQ(inName,"getBoundsRec") ) { return ::hx::Val( getBoundsRec_dyn() ); }
		if (HX_FIELD_EQ(inName,"preventClick") ) { return ::hx::Val( preventClick_dyn() ); }
		if (HX_FIELD_EQ(inName,"eventToLocal") ) { return ::hx::Val( eventToLocal_dyn() ); }
		if (HX_FIELD_EQ(inName,"startCapture") ) { return ::hx::Val( startCapture_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"propagateEvents") ) { return ::hx::Val( propagateEvents ); }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return ::hx::Val( backgroundColor ); }
		if (HX_FIELD_EQ(inName,"mouseDownButton") ) { return ::hx::Val( mouseDownButton ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onHierarchyMoved") ) { return ::hx::Val( onHierarchyMoved_dyn() ); }
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
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast<  ::h2d::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shape") ) { shape=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onOut") ) { onOut=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cursor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cursor(inValue.Cast<  ::hxd::Cursor >()) );cursor=inValue.Cast<  ::hxd::Cursor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"invDet") ) { invDet=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shapeX") ) { shapeX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shapeY") ) { shapeY=inValue.Cast< Float >(); return inValue; }
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
	case 9:
		if (HX_FIELD_EQ(inName,"isEllipse") ) { isEllipse=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onRelease") ) { onRelease=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { onKeyDown=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parentMask") ) { parentMask=inValue.Cast<  ::h2d::Mask >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { onFocusLost=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { onTextInput=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cancelEvents") ) { cancelEvents=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"propagateEvents") ) { propagateEvents=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { backgroundColor=inValue.Cast<  ::Dynamic >(); return inValue; }
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
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("cursor",d6,8e,e8,3e));
	outFields->push(HX_("isEllipse",14,be,84,0f));
	outFields->push(HX_("cancelEvents",33,08,9d,5b));
	outFields->push(HX_("propagateEvents",62,60,03,1f));
	outFields->push(HX_("backgroundColor",95,4e,47,0d));
	outFields->push(HX_("enableRightButton",2b,f1,e7,bf));
	outFields->push(HX_("scene",4c,d9,d1,78));
	outFields->push(HX_("mouseDownButton",79,5e,97,27));
	outFields->push(HX_("parentMask",36,4f,68,e7));
	outFields->push(HX_("invDet",62,d1,bf,9f));
	outFields->push(HX_("shape",21,e3,1c,7c));
	outFields->push(HX_("shapeX",17,da,29,1d));
	outFields->push(HX_("shapeY",18,da,29,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Interactive_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Interactive_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsFloat,(int)offsetof(Interactive_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsObject /*  ::hxd::Cursor */ ,(int)offsetof(Interactive_obj,cursor),HX_("cursor",d6,8e,e8,3e)},
	{::hx::fsBool,(int)offsetof(Interactive_obj,isEllipse),HX_("isEllipse",14,be,84,0f)},
	{::hx::fsBool,(int)offsetof(Interactive_obj,cancelEvents),HX_("cancelEvents",33,08,9d,5b)},
	{::hx::fsBool,(int)offsetof(Interactive_obj,propagateEvents),HX_("propagateEvents",62,60,03,1f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Interactive_obj,backgroundColor),HX_("backgroundColor",95,4e,47,0d)},
	{::hx::fsBool,(int)offsetof(Interactive_obj,enableRightButton),HX_("enableRightButton",2b,f1,e7,bf)},
	{::hx::fsObject /*  ::h2d::Scene */ ,(int)offsetof(Interactive_obj,scene),HX_("scene",4c,d9,d1,78)},
	{::hx::fsInt,(int)offsetof(Interactive_obj,mouseDownButton),HX_("mouseDownButton",79,5e,97,27)},
	{::hx::fsObject /*  ::h2d::Mask */ ,(int)offsetof(Interactive_obj,parentMask),HX_("parentMask",36,4f,68,e7)},
	{::hx::fsFloat,(int)offsetof(Interactive_obj,invDet),HX_("invDet",62,d1,bf,9f)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(Interactive_obj,shape),HX_("shape",21,e3,1c,7c)},
	{::hx::fsFloat,(int)offsetof(Interactive_obj,shapeX),HX_("shapeX",17,da,29,1d)},
	{::hx::fsFloat,(int)offsetof(Interactive_obj,shapeY),HX_("shapeY",18,da,29,1d)},
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
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("cursor",d6,8e,e8,3e),
	HX_("isEllipse",14,be,84,0f),
	HX_("cancelEvents",33,08,9d,5b),
	HX_("propagateEvents",62,60,03,1f),
	HX_("backgroundColor",95,4e,47,0d),
	HX_("enableRightButton",2b,f1,e7,bf),
	HX_("scene",4c,d9,d1,78),
	HX_("mouseDownButton",79,5e,97,27),
	HX_("parentMask",36,4f,68,e7),
	HX_("invDet",62,d1,bf,9f),
	HX_("shape",21,e3,1c,7c),
	HX_("shapeX",17,da,29,1d),
	HX_("shapeY",18,da,29,1d),
	HX_("onAdd",42,86,61,32),
	HX_("draw",04,2c,70,42),
	HX_("getBoundsRec",65,5e,85,79),
	HX_("onHierarchyMoved",fd,db,f9,e1),
	HX_("updateMask",95,2b,0b,01),
	HX_("onRemove",c3,92,35,e4),
	HX_("checkBounds",5d,59,2f,48),
	HX_("preventClick",50,3e,85,eb),
	HX_("getInteractiveScene",c0,e0,d6,48),
	HX_("handleEvent",52,73,0e,28),
	HX_("calcAbsPos",b7,22,12,37),
	HX_("set_cursor",13,9d,ed,32),
	HX_("eventToLocal",f6,0c,ca,d5),
	HX_("startCapture",44,b4,fd,18),
	HX_("stopCapture",a4,ec,09,f7),
	HX_("startDrag",76,a5,63,fb),
	HX_("stopDrag",16,71,2a,95),
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
	__mClass->mName = HX_("h2d.Interactive",ae,bd,35,bc);
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

} // end namespace h2d
