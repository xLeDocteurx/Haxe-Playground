#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h3d_anim_AnimatedObject
#include <h3d/anim/AnimatedObject.h>
#endif
#ifndef INCLUDED_h3d_anim_Animation
#include <h3d/anim/Animation.h>
#endif
#ifndef INCLUDED_h3d_anim_Joint
#include <h3d/anim/Joint.h>
#endif
#ifndef INCLUDED_h3d_anim_Skin
#include <h3d/anim/Skin.h>
#endif
#ifndef INCLUDED_h3d_scene_Joint
#include <h3d/scene/Joint.h>
#endif
#ifndef INCLUDED_h3d_scene_Mesh
#include <h3d/scene/Mesh.h>
#endif
#ifndef INCLUDED_h3d_scene_MultiMaterial
#include <h3d/scene/MultiMaterial.h>
#endif
#ifndef INCLUDED_h3d_scene_Object
#include <h3d/scene/Object.h>
#endif
#ifndef INCLUDED_h3d_scene_Skin
#include <h3d/scene/Skin.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ffcbae1f5f246037_46_new,"h3d.anim.Animation","new",0x5466e2ce,"h3d.anim.Animation.new","h3d/anim/Animation.hx",46,0x61b45cc2)
HX_LOCAL_STACK_FRAME(_hx_pos_ffcbae1f5f246037_59_getDuration,"h3d.anim.Animation","getDuration",0xf6b20278,"h3d.anim.Animation.getDuration","h3d/anim/Animation.hx",59,0x61b45cc2)
HX_LOCAL_STACK_FRAME(_hx_pos_ffcbae1f5f246037_63_frameToTime,"h3d.anim.Animation","frameToTime",0x1d2e33a3,"h3d.anim.Animation.frameToTime","h3d/anim/Animation.hx",63,0x61b45cc2)
HX_LOCAL_STACK_FRAME(_hx_pos_ffcbae1f5f246037_66_getIFrame,"h3d.anim.Animation","getIFrame",0x9665ed28,"h3d.anim.Animation.getIFrame","h3d/anim/Animation.hx",66,0x61b45cc2)
HX_LOCAL_STACK_FRAME(_hx_pos_ffcbae1f5f246037_74_unbind,"h3d.anim.Animation","unbind",0xc745a2e8,"h3d.anim.Animation.unbind","h3d/anim/Animation.hx",74,0x61b45cc2)
HX_LOCAL_STACK_FRAME(_hx_pos_ffcbae1f5f246037_88_setEvents,"h3d.anim.Animation","setEvents",0x7af75d49,"h3d.anim.Animation.setEvents","h3d/anim/Animation.hx",88,0x61b45cc2)
HX_LOCAL_STACK_FRAME(_hx_pos_ffcbae1f5f246037_96_addEvent,"h3d.anim.Animation","addEvent",0x5def4d0b,"h3d.anim.Animation.addEvent","h3d/anim/Animation.hx",96,0x61b45cc2)
HX_LOCAL_STACK_FRAME(_hx_pos_ffcbae1f5f246037_105_getEvents,"h3d.anim.Animation","getEvents",0x97a6713d,"h3d.anim.Animation.getEvents","h3d/anim/Animation.hx",105,0x61b45cc2)
HX_LOCAL_STACK_FRAME(_hx_pos_ffcbae1f5f246037_107_getObjects,"h3d.anim.Animation","getObjects",0x95b12630,"h3d.anim.Animation.getObjects","h3d/anim/Animation.hx",107,0x61b45cc2)
HX_LOCAL_STACK_FRAME(_hx_pos_ffcbae1f5f246037_109_getEventTime,"h3d.anim.Animation","getEventTime",0xf95aa1a3,"h3d.anim.Animation.getEventTime","h3d/anim/Animation.hx",109,0x61b45cc2)
HX_LOCAL_STACK_FRAME(_hx_pos_ffcbae1f5f246037_119_setFrame,"h3d.anim.Animation","setFrame",0x83853ffd,"h3d.anim.Animation.setFrame","h3d/anim/Animation.hx",119,0x61b45cc2)
HX_LOCAL_STACK_FRAME(_hx_pos_ffcbae1f5f246037_126_clone,"h3d.anim.Animation","clone",0x15321d4b,"h3d.anim.Animation.clone","h3d/anim/Animation.hx",126,0x61b45cc2)
HX_LOCAL_STACK_FRAME(_hx_pos_ffcbae1f5f246037_139_initInstance,"h3d.anim.Animation","initInstance",0xec91d697,"h3d.anim.Animation.initInstance","h3d/anim/Animation.hx",139,0x61b45cc2)
HX_LOCAL_STACK_FRAME(_hx_pos_ffcbae1f5f246037_143_createInstance,"h3d.anim.Animation","createInstance",0xb0dee703,"h3d.anim.Animation.createInstance","h3d/anim/Animation.hx",143,0x61b45cc2)
HX_LOCAL_STACK_FRAME(_hx_pos_ffcbae1f5f246037_156_bind,"h3d.anim.Animation","bind",0x7db4038f,"h3d.anim.Animation.bind","h3d/anim/Animation.hx",156,0x61b45cc2)
HX_LOCAL_STACK_FRAME(_hx_pos_ffcbae1f5f246037_190_getPropValue,"h3d.anim.Animation","getPropValue",0x5412652a,"h3d.anim.Animation.getPropValue","h3d/anim/Animation.hx",190,0x61b45cc2)
HX_LOCAL_STACK_FRAME(_hx_pos_ffcbae1f5f246037_199_sync,"h3d.anim.Animation","sync",0x88fcc82d,"h3d.anim.Animation.sync","h3d/anim/Animation.hx",199,0x61b45cc2)
HX_LOCAL_STACK_FRAME(_hx_pos_ffcbae1f5f246037_203_isPlaying,"h3d.anim.Animation","isPlaying",0x12fc2592,"h3d.anim.Animation.isPlaying","h3d/anim/Animation.hx",203,0x61b45cc2)
HX_LOCAL_STACK_FRAME(_hx_pos_ffcbae1f5f246037_207_endFrame,"h3d.anim.Animation","endFrame",0x734e6924,"h3d.anim.Animation.endFrame","h3d/anim/Animation.hx",207,0x61b45cc2)
HX_LOCAL_STACK_FRAME(_hx_pos_ffcbae1f5f246037_210_update,"h3d.anim.Animation","update",0xef5f2c5b,"h3d.anim.Animation.update","h3d/anim/Animation.hx",210,0x61b45cc2)
HX_LOCAL_STACK_FRAME(_hx_pos_ffcbae1f5f246037_274_initAndBind,"h3d.anim.Animation","initAndBind",0xf1807372,"h3d.anim.Animation.initAndBind","h3d/anim/Animation.hx",274,0x61b45cc2)
HX_LOCAL_STACK_FRAME(_hx_pos_ffcbae1f5f246037_282_toString,"h3d.anim.Animation","toString",0xa73c2f7e,"h3d.anim.Animation.toString","h3d/anim/Animation.hx",282,0x61b45cc2)
HX_LOCAL_STACK_FRAME(_hx_pos_ffcbae1f5f246037_24_boot,"h3d.anim.Animation","boot",0x7db89204,"h3d.anim.Animation.boot","h3d/anim/Animation.hx",24,0x61b45cc2)
namespace h3d{
namespace anim{

void Animation_obj::__construct(::String name,int frameCount,Float sampling){
            	HX_STACKFRAME(&_hx_pos_ffcbae1f5f246037_46_new)
HXLINE(  47)		this->name = name;
HXLINE(  48)		this->frameCount = frameCount;
HXLINE(  49)		this->sampling = sampling;
HXLINE(  50)		this->objects = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  51)		this->lastEvent = -1;
HXLINE(  52)		this->frame = ((Float)0.);
HXLINE(  53)		this->speed = ((Float)1.);
HXLINE(  54)		this->loop = true;
HXLINE(  55)		this->pause = false;
            	}

Dynamic Animation_obj::__CreateEmpty() { return new Animation_obj; }

void *Animation_obj::_hx_vtable = 0;

Dynamic Animation_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Animation_obj > _hx_result = new Animation_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Animation_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x042ba3ea;
}

static ::hxd::impl::_Serializable::NoSerializeSupport_obj _hx_h3d_anim_Animation__hx_hxd_impl__Serializable_NoSerializeSupport= {
};

void *Animation_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xa6f1a21a: return &_hx_h3d_anim_Animation__hx_hxd_impl__Serializable_NoSerializeSupport;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float Animation_obj::getDuration(){
            	HX_STACKFRAME(&_hx_pos_ffcbae1f5f246037_59_getDuration)
HXDLIN(  59)		return (( (Float)(this->frameCount) ) / (this->sampling * this->speed));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getDuration,return )

Float Animation_obj::frameToTime(int f){
            	HX_STACKFRAME(&_hx_pos_ffcbae1f5f246037_63_frameToTime)
HXDLIN(  63)		return (( (Float)(f) ) / (this->sampling * this->speed));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,frameToTime,return )

int Animation_obj::getIFrame(){
            	HX_STACKFRAME(&_hx_pos_ffcbae1f5f246037_66_getIFrame)
HXLINE(  67)		int f = ::Std_obj::_hx_int(this->frame);
HXLINE(  68)		int max = this->endFrame();
HXLINE(  69)		if ((f == max)) {
HXLINE(  69)			f = (f - 1);
            		}
HXLINE(  70)		return f;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getIFrame,return )

void Animation_obj::unbind(::String objectName){
            	HX_STACKFRAME(&_hx_pos_ffcbae1f5f246037_74_unbind)
HXDLIN(  74)		int _g = 0;
HXDLIN(  74)		::Array< ::Dynamic> _g1 = this->objects;
HXDLIN(  74)		while((_g < _g1->length)){
HXDLIN(  74)			 ::h3d::anim::AnimatedObject o = _g1->__get(_g).StaticCast<  ::h3d::anim::AnimatedObject >();
HXDLIN(  74)			_g = (_g + 1);
HXLINE(  75)			if ((o->objectName == objectName)) {
HXLINE(  76)				this->isSync = false;
HXLINE(  78)				o->targetObject = null();
HXLINE(  79)				o->targetSkin = null();
HXLINE(  81)				return;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,unbind,(void))

void Animation_obj::setEvents( ::Dynamic el){
            	HX_STACKFRAME(&_hx_pos_ffcbae1f5f246037_88_setEvents)
HXLINE(  89)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  89)		{
HXLINE(  89)			int _g1 = 0;
HXDLIN(  89)			int _g2 = this->frameCount;
HXDLIN(  89)			while((_g1 < _g2)){
HXLINE(  89)				_g1 = (_g1 + 1);
HXDLIN(  89)				int i = (_g1 - 1);
HXDLIN(  89)				_g->push(null());
            			}
            		}
HXDLIN(  89)		this->events = _g;
HXLINE(  90)		{
HXLINE(  90)			 ::Dynamic e = el->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN(  90)			while(( (bool)(e->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  90)				 ::Dynamic e1 = e->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE(  91)				if (::hx::IsNull( this->events->__get(( (int)(e1->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic)) )).StaticCast< ::Array< ::String > >() )) {
HXLINE(  91)					this->events[( (int)(e1->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic)) )] = ::Array_obj< ::String >::__new(0);
            				}
HXLINE(  92)				this->events->__get(( (int)(e1->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic)) )).StaticCast< ::Array< ::String > >()->push( ::Dynamic(e1->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,setEvents,(void))

void Animation_obj::addEvent(int frame,::String data){
            	HX_STACKFRAME(&_hx_pos_ffcbae1f5f246037_96_addEvent)
HXLINE(  97)		if (::hx::IsNull( this->events )) {
HXLINE(  98)			this->events = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE(  99)		if (::hx::IsNull( this->events->__get(frame).StaticCast< ::Array< ::String > >() )) {
HXLINE( 100)			this->events[frame] = ::Array_obj< ::String >::__new(1)->init(0,data);
            		}
            		else {
HXLINE( 102)			this->events->__get(frame).StaticCast< ::Array< ::String > >()->push(data);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Animation_obj,addEvent,(void))

::Array< ::Dynamic> Animation_obj::getEvents(){
            	HX_STACKFRAME(&_hx_pos_ffcbae1f5f246037_105_getEvents)
HXDLIN( 105)		return this->events;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getEvents,return )

::Array< ::Dynamic> Animation_obj::getObjects(){
            	HX_STACKFRAME(&_hx_pos_ffcbae1f5f246037_107_getObjects)
HXDLIN( 107)		return this->objects;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getObjects,return )

 ::Dynamic Animation_obj::getEventTime(::String id){
            	HX_STACKFRAME(&_hx_pos_ffcbae1f5f246037_109_getEventTime)
HXLINE( 110)		if (::hx::IsNull( this->events )) {
HXLINE( 111)			return null();
            		}
HXLINE( 112)		{
HXLINE( 112)			int _g = 0;
HXDLIN( 112)			int _g1 = this->events->length;
HXDLIN( 112)			while((_g < _g1)){
HXLINE( 112)				_g = (_g + 1);
HXDLIN( 112)				int i = (_g - 1);
HXLINE( 113)				::Array< ::String > ev = this->events->__get(i).StaticCast< ::Array< ::String > >();
HXLINE( 114)				bool _hx_tmp;
HXDLIN( 114)				if (::hx::IsNotNull( ev )) {
HXLINE( 114)					_hx_tmp = (ev->indexOf(id,null()) >= 0);
            				}
            				else {
HXLINE( 114)					_hx_tmp = false;
            				}
HXDLIN( 114)				if (_hx_tmp) {
HXLINE( 114)					return (( (Float)(i) ) / (this->sampling * this->speed));
            				}
            			}
            		}
HXLINE( 116)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,getEventTime,return )

void Animation_obj::setFrame(Float f){
            	HX_STACKFRAME(&_hx_pos_ffcbae1f5f246037_119_setFrame)
HXLINE( 120)		this->frame = f;
HXLINE( 121)		this->lastEvent = -1;
HXLINE( 122)		while((this->frame < 0)){
HXLINE( 122)			 ::h3d::anim::Animation _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 122)			_hx_tmp->frame = (_hx_tmp->frame + this->frameCount);
            		}
HXLINE( 123)		while((this->frame > this->frameCount)){
HXLINE( 123)			 ::h3d::anim::Animation _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 123)			_hx_tmp->frame = (_hx_tmp->frame - ( (Float)(this->frameCount) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,setFrame,(void))

 ::h3d::anim::Animation Animation_obj::clone( ::h3d::anim::Animation a){
            	HX_GC_STACKFRAME(&_hx_pos_ffcbae1f5f246037_126_clone)
HXLINE( 127)		if (::hx::IsNull( a )) {
HXLINE( 128)			a =  ::h3d::anim::Animation_obj::__alloc( HX_CTX ,this->name,this->frameCount,this->sampling);
            		}
HXLINE( 129)		a->objects = this->objects;
HXLINE( 130)		a->speed = this->speed;
HXLINE( 131)		a->loop = this->loop;
HXLINE( 132)		a->pause = this->pause;
HXLINE( 133)		a->events = this->events;
HXLINE( 134)		a->resourcePath = this->resourcePath;
HXLINE( 135)		return a;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,clone,return )

void Animation_obj::initInstance(){
            	HX_STACKFRAME(&_hx_pos_ffcbae1f5f246037_139_initInstance)
HXDLIN( 139)		this->isInstance = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,initInstance,(void))

 ::h3d::anim::Animation Animation_obj::createInstance( ::h3d::scene::Object base){
            	HX_STACKFRAME(&_hx_pos_ffcbae1f5f246037_143_createInstance)
HXLINE( 144)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 144)		{
HXLINE( 144)			int _g1 = 0;
HXDLIN( 144)			::Array< ::Dynamic> _g2 = this->objects;
HXDLIN( 144)			while((_g1 < _g2->length)){
HXLINE( 144)				 ::h3d::anim::AnimatedObject a = _g2->__get(_g1).StaticCast<  ::h3d::anim::AnimatedObject >();
HXDLIN( 144)				_g1 = (_g1 + 1);
HXDLIN( 144)				_g->push(a->clone());
            			}
            		}
HXDLIN( 144)		::Array< ::Dynamic> objects = _g;
HXLINE( 145)		 ::h3d::anim::Animation a = this->clone(null());
HXLINE( 146)		a->objects = objects;
HXLINE( 147)		a->bind(base);
HXLINE( 148)		a->initInstance();
HXLINE( 149)		return a;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,createInstance,return )

void Animation_obj::bind( ::h3d::scene::Object base){
            	HX_STACKFRAME(&_hx_pos_ffcbae1f5f246037_156_bind)
HXLINE( 157)		 ::h3d::scene::Skin currentSkin = null();
HXLINE( 158)		{
HXLINE( 158)			int _g = 0;
HXDLIN( 158)			::Array< ::Dynamic> _g1 = this->objects->copy();
HXDLIN( 158)			while((_g < _g1->length)){
HXLINE( 158)				 ::h3d::anim::AnimatedObject a = _g1->__get(_g).StaticCast<  ::h3d::anim::AnimatedObject >();
HXDLIN( 158)				_g = (_g + 1);
HXLINE( 159)				if (::hx::IsNotNull( currentSkin )) {
HXLINE( 161)					 ::h3d::anim::Joint j = ( ( ::h3d::anim::Joint)(currentSkin->skinData->namedJoints->get(a->objectName)) );
HXLINE( 162)					if (::hx::IsNotNull( j )) {
HXLINE( 163)						a->targetSkin = currentSkin;
HXLINE( 164)						a->targetJoint = j->index;
HXLINE( 165)						continue;
            					}
            				}
HXLINE( 168)				 ::h3d::scene::Object obj = base->getObjectByName(a->objectName);
HXLINE( 169)				if (::hx::IsNull( obj )) {
HXLINE( 170)					this->objects->remove(a);
HXLINE( 171)					continue;
            				}
HXLINE( 173)				 ::h3d::scene::Joint joint = ( ( ::h3d::scene::Joint)(::Std_obj::downcast(obj,::hx::ClassOf< ::h3d::scene::Joint >())) );
HXLINE( 174)				if (::hx::IsNotNull( joint )) {
HXLINE( 175)					currentSkin = ( ( ::h3d::scene::Skin)(joint->parent) );
HXLINE( 176)					a->targetSkin = currentSkin;
HXLINE( 177)					a->targetJoint = joint->index;
            				}
            				else {
HXLINE( 179)					a->targetObject = obj;
            				}
            			}
            		}
HXLINE( 182)		this->isSync = false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,bind,(void))

 ::Dynamic Animation_obj::getPropValue(::String objectName,::String propName){
            	HX_STACKFRAME(&_hx_pos_ffcbae1f5f246037_190_getPropValue)
HXDLIN( 190)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Animation_obj,getPropValue,return )

void Animation_obj::sync(::hx::Null< bool >  __o_decompose){
            		bool decompose = __o_decompose.Default(false);
            	HX_STACKFRAME(&_hx_pos_ffcbae1f5f246037_199_sync)
HXDLIN( 199)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,sync,(void))

bool Animation_obj::isPlaying(){
            	HX_STACKFRAME(&_hx_pos_ffcbae1f5f246037_203_isPlaying)
HXDLIN( 203)		if (!(this->pause)) {
HXDLIN( 203)			Float _hx_tmp;
HXDLIN( 203)			if ((this->speed < 0)) {
HXDLIN( 203)				_hx_tmp = -(this->speed);
            			}
            			else {
HXDLIN( 203)				_hx_tmp = this->speed;
            			}
HXDLIN( 203)			return (_hx_tmp > ((Float)0.000001));
            		}
            		else {
HXDLIN( 203)			return false;
            		}
HXDLIN( 203)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,isPlaying,return )

int Animation_obj::endFrame(){
            	HX_STACKFRAME(&_hx_pos_ffcbae1f5f246037_207_endFrame)
HXDLIN( 207)		return this->frameCount;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,endFrame,return )

Float Animation_obj::update(Float dt){
            	HX_STACKFRAME(&_hx_pos_ffcbae1f5f246037_210_update)
HXLINE( 211)		if (!(this->isInstance)) {
HXLINE( 212)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("You must instanciate this animation first",8f,82,9f,7e)));
            		}
HXLINE( 214)		if (!(this->isPlaying())) {
HXLINE( 215)			return ( (Float)(0) );
            		}
HXLINE( 218)		bool _hx_tmp;
HXDLIN( 218)		if (::hx::IsNotNull( this->events )) {
HXLINE( 218)			_hx_tmp = ::hx::IsNotNull( this->onEvent );
            		}
            		else {
HXLINE( 218)			_hx_tmp = false;
            		}
HXDLIN( 218)		if (_hx_tmp) {
HXLINE( 219)			int f0 = ::Std_obj::_hx_int(this->frame);
HXLINE( 220)			int f1 = ::Std_obj::_hx_int((this->frame + ((dt * this->speed) * this->sampling)));
HXLINE( 221)			if ((f1 >= this->frameCount)) {
HXLINE( 221)				f1 = (this->frameCount - 1);
            			}
HXLINE( 222)			{
HXLINE( 222)				int _g = f0;
HXDLIN( 222)				int _g1 = (f1 + 1);
HXDLIN( 222)				while((_g < _g1)){
HXLINE( 222)					_g = (_g + 1);
HXDLIN( 222)					int f = (_g - 1);
HXLINE( 223)					if ((f == this->lastEvent)) {
HXLINE( 223)						continue;
            					}
HXLINE( 224)					this->lastEvent = f;
HXLINE( 225)					if (::hx::IsNotNull( this->events->__get(f).StaticCast< ::Array< ::String > >() )) {
HXLINE( 226)						Float oldF = this->frame;
HXDLIN( 226)						Float oldDT = dt;
HXLINE( 227)						dt = (dt - ((( (Float)(f) ) - this->frame) / (this->speed * this->sampling)));
HXLINE( 228)						this->frame = ( (Float)(f) );
HXLINE( 229)						{
HXLINE( 229)							int _g = 0;
HXDLIN( 229)							::Array< ::String > _g1 = this->events->__get(f).StaticCast< ::Array< ::String > >();
HXDLIN( 229)							while((_g < _g1->length)){
HXLINE( 229)								::String e = _g1->__get(_g);
HXDLIN( 229)								_g = (_g + 1);
HXLINE( 230)								this->onEvent(e);
            							}
            						}
HXLINE( 231)						bool _hx_tmp;
HXDLIN( 231)						if ((this->frame == f)) {
HXLINE( 231)							_hx_tmp = (f == (this->frameCount - 1));
            						}
            						else {
HXLINE( 231)							_hx_tmp = false;
            						}
HXDLIN( 231)						if (_hx_tmp) {
HXLINE( 232)							this->frame = oldF;
HXLINE( 233)							dt = oldDT;
HXLINE( 234)							goto _hx_goto_27;
            						}
            						else {
HXLINE( 236)							return dt;
            						}
            					}
            				}
            				_hx_goto_27:;
            			}
            		}
HXLINE( 242)		if (::hx::IsNotNull( this->onAnimEnd )) {
HXLINE( 243)			int end = this->endFrame();
HXLINE( 244)			Float et;
HXDLIN( 244)			if ((this->speed == 0)) {
HXLINE( 244)				et = ( (Float)(0) );
            			}
            			else {
HXLINE( 244)				et = ((( (Float)(end) ) - this->frame) / (this->speed * this->sampling));
            			}
HXLINE( 245)			bool _hx_tmp;
HXDLIN( 245)			if ((et <= dt)) {
HXLINE( 245)				_hx_tmp = (et > 0);
            			}
            			else {
HXLINE( 245)				_hx_tmp = false;
            			}
HXDLIN( 245)			if (_hx_tmp) {
HXLINE( 246)				this->frame = ( (Float)(end) );
HXLINE( 247)				dt = (dt - et);
HXLINE( 248)				this->onAnimEnd();
HXLINE( 250)				bool _hx_tmp;
HXDLIN( 250)				if ((this->frame == end)) {
HXLINE( 250)					_hx_tmp = this->isPlaying();
            				}
            				else {
HXLINE( 250)					_hx_tmp = false;
            				}
HXDLIN( 250)				if (_hx_tmp) {
HXLINE( 251)					if (this->loop) {
HXLINE( 252)						this->frame = ( (Float)(0) );
            					}
            					else {
HXLINE( 255)						dt = ( (Float)(0) );
            					}
            				}
HXLINE( 258)				return dt;
            			}
            		}
HXLINE( 263)		 ::h3d::anim::Animation _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 263)		_hx_tmp1->frame = (_hx_tmp1->frame + ((dt * this->speed) * this->sampling));
HXLINE( 264)		if ((this->frame >= this->frameCount)) {
HXLINE( 265)			if (this->loop) {
HXLINE( 266)				 ::h3d::anim::Animation _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp->frame = ::hx::Mod(_hx_tmp->frame,this->frameCount);
            			}
            			else {
HXLINE( 268)				this->frame = ( (Float)(this->frameCount) );
            			}
            		}
HXLINE( 270)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,update,return )

void Animation_obj::initAndBind( ::h3d::scene::Object obj){
            	HX_STACKFRAME(&_hx_pos_ffcbae1f5f246037_274_initAndBind)
HXLINE( 275)		this->bind(obj);
HXLINE( 276)		this->initInstance();
HXLINE( 277)		this->pause = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,initAndBind,(void))

::String Animation_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_ffcbae1f5f246037_282_toString)
HXDLIN( 282)		return this->name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,toString,return )

Float Animation_obj::EPSILON;


::hx::ObjectPtr< Animation_obj > Animation_obj::__new(::String name,int frameCount,Float sampling) {
	::hx::ObjectPtr< Animation_obj > __this = new Animation_obj();
	__this->__construct(name,frameCount,sampling);
	return __this;
}

::hx::ObjectPtr< Animation_obj > Animation_obj::__alloc(::hx::Ctx *_hx_ctx,::String name,int frameCount,Float sampling) {
	Animation_obj *__this = (Animation_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Animation_obj), true, "h3d.anim.Animation"));
	*(void **)__this = Animation_obj::_hx_vtable;
	__this->__construct(name,frameCount,sampling);
	return __this;
}

Animation_obj::Animation_obj()
{
}

void Animation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Animation);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(resourcePath,"resourcePath");
	HX_MARK_MEMBER_NAME(frameCount,"frameCount");
	HX_MARK_MEMBER_NAME(sampling,"sampling");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(onAnimEnd,"onAnimEnd");
	HX_MARK_MEMBER_NAME(onEvent,"onEvent");
	HX_MARK_MEMBER_NAME(pause,"pause");
	HX_MARK_MEMBER_NAME(loop,"loop");
	HX_MARK_MEMBER_NAME(events,"events");
	HX_MARK_MEMBER_NAME(isInstance,"isInstance");
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_MEMBER_NAME(isSync,"isSync");
	HX_MARK_MEMBER_NAME(lastEvent,"lastEvent");
	HX_MARK_END_CLASS();
}

void Animation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(resourcePath,"resourcePath");
	HX_VISIT_MEMBER_NAME(frameCount,"frameCount");
	HX_VISIT_MEMBER_NAME(sampling,"sampling");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(onAnimEnd,"onAnimEnd");
	HX_VISIT_MEMBER_NAME(onEvent,"onEvent");
	HX_VISIT_MEMBER_NAME(pause,"pause");
	HX_VISIT_MEMBER_NAME(loop,"loop");
	HX_VISIT_MEMBER_NAME(events,"events");
	HX_VISIT_MEMBER_NAME(isInstance,"isInstance");
	HX_VISIT_MEMBER_NAME(objects,"objects");
	HX_VISIT_MEMBER_NAME(isSync,"isSync");
	HX_VISIT_MEMBER_NAME(lastEvent,"lastEvent");
}

::hx::Val Animation_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"loop") ) { return ::hx::Val( loop ); }
		if (HX_FIELD_EQ(inName,"bind") ) { return ::hx::Val( bind_dyn() ); }
		if (HX_FIELD_EQ(inName,"sync") ) { return ::hx::Val( sync_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return ::hx::Val( frame ); }
		if (HX_FIELD_EQ(inName,"speed") ) { return ::hx::Val( speed ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { return ::hx::Val( events ); }
		if (HX_FIELD_EQ(inName,"isSync") ) { return ::hx::Val( isSync ); }
		if (HX_FIELD_EQ(inName,"unbind") ) { return ::hx::Val( unbind_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onEvent") ) { return ::hx::Val( onEvent ); }
		if (HX_FIELD_EQ(inName,"objects") ) { return ::hx::Val( objects ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sampling") ) { return ::hx::Val( sampling ); }
		if (HX_FIELD_EQ(inName,"addEvent") ) { return ::hx::Val( addEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFrame") ) { return ::hx::Val( setFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"endFrame") ) { return ::hx::Val( endFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onAnimEnd") ) { return ::hx::Val( onAnimEnd ); }
		if (HX_FIELD_EQ(inName,"lastEvent") ) { return ::hx::Val( lastEvent ); }
		if (HX_FIELD_EQ(inName,"getIFrame") ) { return ::hx::Val( getIFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"setEvents") ) { return ::hx::Val( setEvents_dyn() ); }
		if (HX_FIELD_EQ(inName,"getEvents") ) { return ::hx::Val( getEvents_dyn() ); }
		if (HX_FIELD_EQ(inName,"isPlaying") ) { return ::hx::Val( isPlaying_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameCount") ) { return ::hx::Val( frameCount ); }
		if (HX_FIELD_EQ(inName,"isInstance") ) { return ::hx::Val( isInstance ); }
		if (HX_FIELD_EQ(inName,"getObjects") ) { return ::hx::Val( getObjects_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getDuration") ) { return ::hx::Val( getDuration_dyn() ); }
		if (HX_FIELD_EQ(inName,"frameToTime") ) { return ::hx::Val( frameToTime_dyn() ); }
		if (HX_FIELD_EQ(inName,"initAndBind") ) { return ::hx::Val( initAndBind_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resourcePath") ) { return ::hx::Val( resourcePath ); }
		if (HX_FIELD_EQ(inName,"getEventTime") ) { return ::hx::Val( getEventTime_dyn() ); }
		if (HX_FIELD_EQ(inName,"initInstance") ) { return ::hx::Val( initInstance_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPropValue") ) { return ::hx::Val( getPropValue_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createInstance") ) { return ::hx::Val( createInstance_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Animation_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loop") ) { loop=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pause") ) { pause=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { events=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isSync") ) { isSync=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onEvent") ) { onEvent=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sampling") ) { sampling=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onAnimEnd") ) { onAnimEnd=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastEvent") ) { lastEvent=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameCount") ) { frameCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isInstance") ) { isInstance=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resourcePath") ) { resourcePath=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Animation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("resourcePath",93,ed,b4,91));
	outFields->push(HX_("frameCount",62,79,89,2d));
	outFields->push(HX_("sampling",e7,a7,c5,cc));
	outFields->push(HX_("frame",2d,78,83,06));
	outFields->push(HX_("speed",87,97,69,81));
	outFields->push(HX_("pause",f6,d6,57,bd));
	outFields->push(HX_("loop",64,a6,b7,47));
	outFields->push(HX_("events",19,4f,6a,96));
	outFields->push(HX_("isInstance",9f,31,90,d4));
	outFields->push(HX_("objects",d4,68,4f,82));
	outFields->push(HX_("isSync",65,7f,c6,69));
	outFields->push(HX_("lastEvent",e4,f5,71,c2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Animation_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Animation_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsString,(int)offsetof(Animation_obj,resourcePath),HX_("resourcePath",93,ed,b4,91)},
	{::hx::fsInt,(int)offsetof(Animation_obj,frameCount),HX_("frameCount",62,79,89,2d)},
	{::hx::fsFloat,(int)offsetof(Animation_obj,sampling),HX_("sampling",e7,a7,c5,cc)},
	{::hx::fsFloat,(int)offsetof(Animation_obj,frame),HX_("frame",2d,78,83,06)},
	{::hx::fsFloat,(int)offsetof(Animation_obj,speed),HX_("speed",87,97,69,81)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Animation_obj,onAnimEnd),HX_("onAnimEnd",eb,4e,e2,51)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Animation_obj,onEvent),HX_("onEvent",7b,66,02,0c)},
	{::hx::fsBool,(int)offsetof(Animation_obj,pause),HX_("pause",f6,d6,57,bd)},
	{::hx::fsBool,(int)offsetof(Animation_obj,loop),HX_("loop",64,a6,b7,47)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Animation_obj,events),HX_("events",19,4f,6a,96)},
	{::hx::fsBool,(int)offsetof(Animation_obj,isInstance),HX_("isInstance",9f,31,90,d4)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Animation_obj,objects),HX_("objects",d4,68,4f,82)},
	{::hx::fsBool,(int)offsetof(Animation_obj,isSync),HX_("isSync",65,7f,c6,69)},
	{::hx::fsInt,(int)offsetof(Animation_obj,lastEvent),HX_("lastEvent",e4,f5,71,c2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Animation_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Animation_obj::EPSILON,HX_("EPSILON",4a,89,92,2c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Animation_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("resourcePath",93,ed,b4,91),
	HX_("frameCount",62,79,89,2d),
	HX_("sampling",e7,a7,c5,cc),
	HX_("frame",2d,78,83,06),
	HX_("speed",87,97,69,81),
	HX_("onAnimEnd",eb,4e,e2,51),
	HX_("onEvent",7b,66,02,0c),
	HX_("pause",f6,d6,57,bd),
	HX_("loop",64,a6,b7,47),
	HX_("events",19,4f,6a,96),
	HX_("isInstance",9f,31,90,d4),
	HX_("objects",d4,68,4f,82),
	HX_("isSync",65,7f,c6,69),
	HX_("lastEvent",e4,f5,71,c2),
	HX_("getDuration",0a,d2,81,3a),
	HX_("frameToTime",35,03,fe,60),
	HX_("getIFrame",3a,54,80,11),
	HX_("unbind",96,fc,eb,5e),
	HX_("setEvents",5b,c4,11,f6),
	HX_("addEvent",39,ee,21,ef),
	HX_("getEvents",4f,d8,c0,12),
	HX_("getObjects",de,ee,b0,d1),
	HX_("getEventTime",d1,71,60,0b),
	HX_("setFrame",2b,e1,b7,14),
	HX_("clone",5d,13,63,48),
	HX_("initInstance",c5,a6,97,fe),
	HX_("createInstance",b1,9e,1b,ac),
	HX_("bind",bd,f5,16,41),
	HX_("getPropValue",58,35,18,66),
	HX_("sync",5b,ba,5f,4c),
	HX_("isPlaying",a4,8c,16,8e),
	HX_("endFrame",52,0a,81,04),
	HX_("update",09,86,05,87),
	HX_("initAndBind",04,43,50,35),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

static void Animation_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Animation_obj::EPSILON,"EPSILON");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Animation_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Animation_obj::EPSILON,"EPSILON");
};

#endif

::hx::Class Animation_obj::__mClass;

static ::String Animation_obj_sStaticFields[] = {
	HX_("EPSILON",4a,89,92,2c),
	::String(null())
};

void Animation_obj::__register()
{
	Animation_obj _hx_dummy;
	Animation_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.anim.Animation",dc,23,36,30);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Animation_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Animation_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Animation_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Animation_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Animation_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Animation_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Animation_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Animation_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ffcbae1f5f246037_24_boot)
HXDLIN(  24)		EPSILON = ((Float)0.000001);
            	}
}

} // end namespace h3d
} // end namespace anim
