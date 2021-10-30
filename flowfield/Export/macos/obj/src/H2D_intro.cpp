#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_H2D_intro
#include <H2D_intro.h>
#endif
#ifndef INCLUDED_NoiseGenerator
#include <NoiseGenerator.h>
#endif
#ifndef INCLUDED_Particle
#include <Particle.h>
#endif
#ifndef INCLUDED__Main_Main_Fields_
#include <_Main/Main_Fields_.h>
#endif
#ifndef INCLUDED_h2d_Drawable
#include <h2d/Drawable.h>
#endif
#ifndef INCLUDED_h2d_Font
#include <h2d/Font.h>
#endif
#ifndef INCLUDED_h2d_Graphics
#include <h2d/Graphics.h>
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
#ifndef INCLUDED_h2d_Text
#include <h2d/Text.h>
#endif
#ifndef INCLUDED_h3d_IDrawable
#include <h3d/IDrawable.h>
#endif
#ifndef INCLUDED_hxd_App
#include <hxd/App.h>
#endif
#ifndef INCLUDED_hxd_InteractiveScene
#include <hxd/InteractiveScene.h>
#endif
#ifndef INCLUDED_hxd_Timer
#include <hxd/Timer.h>
#endif
#ifndef INCLUDED_hxd_res_DefaultFont
#include <hxd/res/DefaultFont.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0e190a72704813a3_18_new,"H2D_intro","new",0x998dbfb9,"H2D_intro.new","Main.hx",18,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_0e190a72704813a3_41_init,"H2D_intro","init",0xbf32b997,"H2D_intro.init","Main.hx",41,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_0e190a72704813a3_54_update,"H2D_intro","update",0xec3ef450,"H2D_intro.update","Main.hx",54,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_0e190a72704813a3_59_initBackground,"H2D_intro","initBackground",0x4d33d465,"H2D_intro.initBackground","Main.hx",59,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_0e190a72704813a3_66_initParticles,"H2D_intro","initParticles",0x3b72fad6,"H2D_intro.initParticles","Main.hx",66,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_0e190a72704813a3_73_updateParticles,"H2D_intro","updateParticles",0xe1e020fd,"H2D_intro.updateParticles","Main.hx",73,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_0e190a72704813a3_81_initDebugTexts,"H2D_intro","initDebugTexts",0x33935c4a,"H2D_intro.initDebugTexts","Main.hx",81,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_0e190a72704813a3_89_updateDebugTexts,"H2D_intro","updateDebugTexts",0x2ca79843,"H2D_intro.updateDebugTexts","Main.hx",89,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_0e190a72704813a3_93_main,"H2D_intro","main",0xc1cdb6c0,"H2D_intro.main","Main.hx",93,0x087e5c05)

void H2D_intro_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_0e190a72704813a3_18_new)
HXLINE(  34)		this->particles = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  33)		this->noiseGenerator =  ::NoiseGenerator_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  32)		this->magnitude = ((Float)1);
HXLINE(  30)		this->particlesAlpha = ((Float)0.005);
HXLINE(  28)		this->particlesQuantity = 800;
HXLINE(  27)		this->particlesSize = 2;
HXLINE(  25)		this->timeScale = ((Float)0.5);
HXLINE(  24)		this->noiseScale = ((Float)0.25);
HXLINE(  23)		this->particlesColor = 3200456;
HXLINE(  22)		this->vectorsColor = 16777215;
HXLINE(  21)		this->backgroundColor = 0;
HXLINE(  20)		this->windowSizeY = 1000;
HXLINE(  19)		this->windowSizeX = 1900;
HXLINE(  18)		super::__construct();
            	}

Dynamic H2D_intro_obj::__CreateEmpty() { return new H2D_intro_obj; }

void *H2D_intro_obj::_hx_vtable = 0;

Dynamic H2D_intro_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< H2D_intro_obj > _hx_result = new H2D_intro_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool H2D_intro_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08bee487) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08bee487;
	} else {
		return inClassId==(int)0x4b589375;
	}
}

void H2D_intro_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_0e190a72704813a3_41_init)
HXLINE(  46)		this->customGraphics =  ::h2d::Graphics_obj::__alloc( HX_CTX ,this->s2d);
HXLINE(  47)		this->s2d->addChild(this->customGraphics);
HXLINE(  48)		this->initBackground();
HXLINE(  49)		this->initParticles();
HXLINE(  50)		this->initDebugTexts();
            	}


void H2D_intro_obj::update(Float dt){
            	HX_STACKFRAME(&_hx_pos_0e190a72704813a3_54_update)
HXLINE(  55)		this->updateParticles();
HXLINE(  56)		this->updateDebugTexts();
            	}


void H2D_intro_obj::initBackground(){
            	HX_STACKFRAME(&_hx_pos_0e190a72704813a3_59_initBackground)
HXLINE(  60)		this->customGraphics->beginFill(this->backgroundColor,null());
HXLINE(  61)		this->customGraphics->drawRect(( (Float)(0) ),( (Float)(0) ),( (Float)(this->windowSizeX) ),( (Float)(this->windowSizeY) ));
HXLINE(  62)		this->customGraphics->endFill();
            	}


HX_DEFINE_DYNAMIC_FUNC0(H2D_intro_obj,initBackground,(void))

void H2D_intro_obj::initParticles(){
            	HX_GC_STACKFRAME(&_hx_pos_0e190a72704813a3_66_initParticles)
HXDLIN(  66)		int _g = 0;
HXDLIN(  66)		int _g1 = this->particlesQuantity;
HXDLIN(  66)		while((_g < _g1)){
HXDLIN(  66)			_g = (_g + 1);
HXDLIN(  66)			int i = (_g - 1);
HXLINE(  67)			::Array< ::Dynamic> _hx_tmp = this->particles;
HXDLIN(  67)			Float _hx_tmp1 = this->noiseGenerator->getWhiteNoise(( (Float)(i) ),( (Float)(i) ),null());
HXDLIN(  67)			Float _hx_tmp2 = (_hx_tmp1 * ( (Float)(this->windowSizeX) ));
HXLINE(  68)			Float _hx_tmp3 = this->noiseGenerator->getWhiteNoise(( (Float)(i) ),( (Float)((i + 1)) ),null());
HXLINE(  67)			_hx_tmp->push( ::Particle_obj::__alloc( HX_CTX ,_hx_tmp2,(_hx_tmp3 * ( (Float)(this->windowSizeY) )),( (Float)(this->particlesSize) ),this->particlesAlpha));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(H2D_intro_obj,initParticles,(void))

void H2D_intro_obj::updateParticles(){
            	HX_STACKFRAME(&_hx_pos_0e190a72704813a3_73_updateParticles)
HXDLIN(  73)		int _g = 0;
HXDLIN(  73)		int _g1 = this->particles->length;
HXDLIN(  73)		while((_g < _g1)){
HXDLIN(  73)			_g = (_g + 1);
HXDLIN(  73)			int i = (_g - 1);
HXLINE(  74)			Float noiseValue = this->noiseGenerator->getPerlinNoise(((this->particles->__get(i).StaticCast<  ::Particle >()->positionX * this->noiseScale) / ( (Float)(100) )),((this->particles->__get(i).StaticCast<  ::Particle >()->positionY * this->noiseScale) / ( (Float)(100) )),((( (Float)(::hxd::Timer_obj::frameCount) ) * this->timeScale) / ( (Float)(100) )));
HXLINE(  76)			this->particles->__get(i).StaticCast<  ::Particle >()->applyForce(noiseValue,this->magnitude,this->windowSizeX,this->windowSizeY);
HXLINE(  77)			 ::Particle _hx_tmp = this->particles->__get(i).StaticCast<  ::Particle >();
HXDLIN(  77)			 ::h2d::Graphics _hx_tmp1 = this->customGraphics;
HXDLIN(  77)			_hx_tmp->draw(_hx_tmp1,::_Main::Main_Fields__obj::float2color(((Float)0.188235294),((Float)0.835294118),((Float)0.7843)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(H2D_intro_obj,updateParticles,(void))

void H2D_intro_obj::initDebugTexts(){
            	HX_GC_STACKFRAME(&_hx_pos_0e190a72704813a3_81_initDebugTexts)
HXLINE(  82)		this->font = ::hxd::res::DefaultFont_obj::get();
HXLINE(  83)		this->debugNumberOfCells =  ::h2d::Text_obj::__alloc( HX_CTX ,this->font,null());
HXLINE(  84)		 ::h2d::Text _hx_tmp = this->debugNumberOfCells;
HXDLIN(  84)		_hx_tmp->set_text((HX_("FrameCounter : ",b7,af,f0,52) + ::Math_obj::round(::hxd::Timer_obj::fps())));
HXLINE(  85)		this->s2d->addChild(this->debugNumberOfCells);
            	}


HX_DEFINE_DYNAMIC_FUNC0(H2D_intro_obj,initDebugTexts,(void))

void H2D_intro_obj::updateDebugTexts(){
            	HX_STACKFRAME(&_hx_pos_0e190a72704813a3_89_updateDebugTexts)
HXDLIN(  89)		 ::h2d::Text _hx_tmp = this->debugNumberOfCells;
HXDLIN(  89)		_hx_tmp->set_text((HX_("FrameCounter : ",b7,af,f0,52) + ::Math_obj::round(::hxd::Timer_obj::fps())));
            	}


HX_DEFINE_DYNAMIC_FUNC0(H2D_intro_obj,updateDebugTexts,(void))

void H2D_intro_obj::main(){
            	HX_GC_STACKFRAME(&_hx_pos_0e190a72704813a3_93_main)
HXDLIN(  93)		 ::H2D_intro_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(H2D_intro_obj,main,(void))


::hx::ObjectPtr< H2D_intro_obj > H2D_intro_obj::__new() {
	::hx::ObjectPtr< H2D_intro_obj > __this = new H2D_intro_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< H2D_intro_obj > H2D_intro_obj::__alloc(::hx::Ctx *_hx_ctx) {
	H2D_intro_obj *__this = (H2D_intro_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(H2D_intro_obj), true, "H2D_intro"));
	*(void **)__this = H2D_intro_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

H2D_intro_obj::H2D_intro_obj()
{
}

void H2D_intro_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(H2D_intro);
	HX_MARK_MEMBER_NAME(windowSizeX,"windowSizeX");
	HX_MARK_MEMBER_NAME(windowSizeY,"windowSizeY");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(vectorsColor,"vectorsColor");
	HX_MARK_MEMBER_NAME(particlesColor,"particlesColor");
	HX_MARK_MEMBER_NAME(noiseScale,"noiseScale");
	HX_MARK_MEMBER_NAME(timeScale,"timeScale");
	HX_MARK_MEMBER_NAME(particlesSize,"particlesSize");
	HX_MARK_MEMBER_NAME(particlesQuantity,"particlesQuantity");
	HX_MARK_MEMBER_NAME(particlesAlpha,"particlesAlpha");
	HX_MARK_MEMBER_NAME(magnitude,"magnitude");
	HX_MARK_MEMBER_NAME(noiseGenerator,"noiseGenerator");
	HX_MARK_MEMBER_NAME(particles,"particles");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(debugNumberOfCells,"debugNumberOfCells");
	HX_MARK_MEMBER_NAME(customGraphics,"customGraphics");
	 ::hxd::App_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void H2D_intro_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(windowSizeX,"windowSizeX");
	HX_VISIT_MEMBER_NAME(windowSizeY,"windowSizeY");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(vectorsColor,"vectorsColor");
	HX_VISIT_MEMBER_NAME(particlesColor,"particlesColor");
	HX_VISIT_MEMBER_NAME(noiseScale,"noiseScale");
	HX_VISIT_MEMBER_NAME(timeScale,"timeScale");
	HX_VISIT_MEMBER_NAME(particlesSize,"particlesSize");
	HX_VISIT_MEMBER_NAME(particlesQuantity,"particlesQuantity");
	HX_VISIT_MEMBER_NAME(particlesAlpha,"particlesAlpha");
	HX_VISIT_MEMBER_NAME(magnitude,"magnitude");
	HX_VISIT_MEMBER_NAME(noiseGenerator,"noiseGenerator");
	HX_VISIT_MEMBER_NAME(particles,"particles");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(debugNumberOfCells,"debugNumberOfCells");
	HX_VISIT_MEMBER_NAME(customGraphics,"customGraphics");
	 ::hxd::App_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val H2D_intro_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return ::hx::Val( font ); }
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timeScale") ) { return ::hx::Val( timeScale ); }
		if (HX_FIELD_EQ(inName,"magnitude") ) { return ::hx::Val( magnitude ); }
		if (HX_FIELD_EQ(inName,"particles") ) { return ::hx::Val( particles ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"noiseScale") ) { return ::hx::Val( noiseScale ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"windowSizeX") ) { return ::hx::Val( windowSizeX ); }
		if (HX_FIELD_EQ(inName,"windowSizeY") ) { return ::hx::Val( windowSizeY ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vectorsColor") ) { return ::hx::Val( vectorsColor ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"particlesSize") ) { return ::hx::Val( particlesSize ); }
		if (HX_FIELD_EQ(inName,"initParticles") ) { return ::hx::Val( initParticles_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"particlesColor") ) { return ::hx::Val( particlesColor ); }
		if (HX_FIELD_EQ(inName,"particlesAlpha") ) { return ::hx::Val( particlesAlpha ); }
		if (HX_FIELD_EQ(inName,"noiseGenerator") ) { return ::hx::Val( noiseGenerator ); }
		if (HX_FIELD_EQ(inName,"customGraphics") ) { return ::hx::Val( customGraphics ); }
		if (HX_FIELD_EQ(inName,"initBackground") ) { return ::hx::Val( initBackground_dyn() ); }
		if (HX_FIELD_EQ(inName,"initDebugTexts") ) { return ::hx::Val( initDebugTexts_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return ::hx::Val( backgroundColor ); }
		if (HX_FIELD_EQ(inName,"updateParticles") ) { return ::hx::Val( updateParticles_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateDebugTexts") ) { return ::hx::Val( updateDebugTexts_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"particlesQuantity") ) { return ::hx::Val( particlesQuantity ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"debugNumberOfCells") ) { return ::hx::Val( debugNumberOfCells ); }
	}
	return super::__Field(inName,inCallProp);
}

bool H2D_intro_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
	}
	return false;
}

::hx::Val H2D_intro_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast<  ::h2d::Font >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timeScale") ) { timeScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"magnitude") ) { magnitude=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"particles") ) { particles=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"noiseScale") ) { noiseScale=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"windowSizeX") ) { windowSizeX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windowSizeY") ) { windowSizeY=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vectorsColor") ) { vectorsColor=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"particlesSize") ) { particlesSize=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"particlesColor") ) { particlesColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"particlesAlpha") ) { particlesAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noiseGenerator") ) { noiseGenerator=inValue.Cast<  ::NoiseGenerator >(); return inValue; }
		if (HX_FIELD_EQ(inName,"customGraphics") ) { customGraphics=inValue.Cast<  ::h2d::Graphics >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { backgroundColor=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"particlesQuantity") ) { particlesQuantity=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"debugNumberOfCells") ) { debugNumberOfCells=inValue.Cast<  ::h2d::Text >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void H2D_intro_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("windowSizeX",67,9e,ab,6d));
	outFields->push(HX_("windowSizeY",68,9e,ab,6d));
	outFields->push(HX_("backgroundColor",95,4e,47,0d));
	outFields->push(HX_("vectorsColor",f3,84,2f,42));
	outFields->push(HX_("particlesColor",b6,96,86,19));
	outFields->push(HX_("noiseScale",90,e0,88,a8));
	outFields->push(HX_("timeScale",3d,a3,bf,2d));
	outFields->push(HX_("particlesSize",ce,c6,6a,f1));
	outFields->push(HX_("particlesQuantity",18,f8,19,df));
	outFields->push(HX_("particlesAlpha",b1,cc,c0,f0));
	outFields->push(HX_("magnitude",d0,33,64,f5));
	outFields->push(HX_("noiseGenerator",59,85,03,d4));
	outFields->push(HX_("particles",6d,3f,85,92));
	outFields->push(HX_("font",cf,5d,c0,43));
	outFields->push(HX_("debugNumberOfCells",de,c9,e9,72));
	outFields->push(HX_("customGraphics",9c,d5,f4,34));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo H2D_intro_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(H2D_intro_obj,windowSizeX),HX_("windowSizeX",67,9e,ab,6d)},
	{::hx::fsInt,(int)offsetof(H2D_intro_obj,windowSizeY),HX_("windowSizeY",68,9e,ab,6d)},
	{::hx::fsInt,(int)offsetof(H2D_intro_obj,backgroundColor),HX_("backgroundColor",95,4e,47,0d)},
	{::hx::fsInt,(int)offsetof(H2D_intro_obj,vectorsColor),HX_("vectorsColor",f3,84,2f,42)},
	{::hx::fsInt,(int)offsetof(H2D_intro_obj,particlesColor),HX_("particlesColor",b6,96,86,19)},
	{::hx::fsFloat,(int)offsetof(H2D_intro_obj,noiseScale),HX_("noiseScale",90,e0,88,a8)},
	{::hx::fsFloat,(int)offsetof(H2D_intro_obj,timeScale),HX_("timeScale",3d,a3,bf,2d)},
	{::hx::fsInt,(int)offsetof(H2D_intro_obj,particlesSize),HX_("particlesSize",ce,c6,6a,f1)},
	{::hx::fsInt,(int)offsetof(H2D_intro_obj,particlesQuantity),HX_("particlesQuantity",18,f8,19,df)},
	{::hx::fsFloat,(int)offsetof(H2D_intro_obj,particlesAlpha),HX_("particlesAlpha",b1,cc,c0,f0)},
	{::hx::fsFloat,(int)offsetof(H2D_intro_obj,magnitude),HX_("magnitude",d0,33,64,f5)},
	{::hx::fsObject /*  ::NoiseGenerator */ ,(int)offsetof(H2D_intro_obj,noiseGenerator),HX_("noiseGenerator",59,85,03,d4)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(H2D_intro_obj,particles),HX_("particles",6d,3f,85,92)},
	{::hx::fsObject /*  ::h2d::Font */ ,(int)offsetof(H2D_intro_obj,font),HX_("font",cf,5d,c0,43)},
	{::hx::fsObject /*  ::h2d::Text */ ,(int)offsetof(H2D_intro_obj,debugNumberOfCells),HX_("debugNumberOfCells",de,c9,e9,72)},
	{::hx::fsObject /*  ::h2d::Graphics */ ,(int)offsetof(H2D_intro_obj,customGraphics),HX_("customGraphics",9c,d5,f4,34)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *H2D_intro_obj_sStaticStorageInfo = 0;
#endif

static ::String H2D_intro_obj_sMemberFields[] = {
	HX_("windowSizeX",67,9e,ab,6d),
	HX_("windowSizeY",68,9e,ab,6d),
	HX_("backgroundColor",95,4e,47,0d),
	HX_("vectorsColor",f3,84,2f,42),
	HX_("particlesColor",b6,96,86,19),
	HX_("noiseScale",90,e0,88,a8),
	HX_("timeScale",3d,a3,bf,2d),
	HX_("particlesSize",ce,c6,6a,f1),
	HX_("particlesQuantity",18,f8,19,df),
	HX_("particlesAlpha",b1,cc,c0,f0),
	HX_("magnitude",d0,33,64,f5),
	HX_("noiseGenerator",59,85,03,d4),
	HX_("particles",6d,3f,85,92),
	HX_("font",cf,5d,c0,43),
	HX_("debugNumberOfCells",de,c9,e9,72),
	HX_("customGraphics",9c,d5,f4,34),
	HX_("init",10,3b,bb,45),
	HX_("update",09,86,05,87),
	HX_("initBackground",1e,47,e8,4a),
	HX_("initParticles",3d,02,85,0d),
	HX_("updateParticles",24,10,10,e2),
	HX_("initDebugTexts",03,cf,47,31),
	HX_("updateDebugTexts",3c,eb,68,56),
	::String(null()) };

::hx::Class H2D_intro_obj::__mClass;

static ::String H2D_intro_obj_sStaticFields[] = {
	HX_("main",39,38,56,48),
	::String(null())
};

void H2D_intro_obj::__register()
{
	H2D_intro_obj _hx_dummy;
	H2D_intro_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("H2D_intro",47,6f,7b,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &H2D_intro_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(H2D_intro_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(H2D_intro_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< H2D_intro_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = H2D_intro_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = H2D_intro_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

