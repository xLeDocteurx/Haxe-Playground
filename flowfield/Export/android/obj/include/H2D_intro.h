#ifndef INCLUDED_H2D_intro
#define INCLUDED_H2D_intro

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_App
#include <hxd/App.h>
#endif
HX_DECLARE_CLASS0(H2D_intro)
HX_DECLARE_CLASS0(NoiseGenerator)
HX_DECLARE_CLASS0(Particle)
HX_DECLARE_CLASS1(h2d,Drawable)
HX_DECLARE_CLASS1(h2d,Font)
HX_DECLARE_CLASS1(h2d,Graphics)
HX_DECLARE_CLASS1(h2d,Object)
HX_DECLARE_CLASS1(h2d,Text)
HX_DECLARE_CLASS1(h3d,IDrawable)
HX_DECLARE_CLASS1(hxd,App)



class HXCPP_CLASS_ATTRIBUTES H2D_intro_obj : public  ::hxd::App_obj
{
	public:
		typedef  ::hxd::App_obj super;
		typedef H2D_intro_obj OBJ_;
		H2D_intro_obj();

	public:
		enum { _hx_ClassId = 0x08bee487 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="H2D_intro")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"H2D_intro"); }
		static ::hx::ObjectPtr< H2D_intro_obj > __new();
		static ::hx::ObjectPtr< H2D_intro_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~H2D_intro_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("H2D_intro",47,6f,7b,45); }

		static void main();
		static ::Dynamic main_dyn();

		int windowSizeX;
		int windowSizeY;
		int backgroundColor;
		int vectorsColor;
		int particlesColor;
		Float noiseScale;
		Float timeScale;
		int particlesSize;
		int particlesQuantity;
		Float particlesAlpha;
		Float magnitude;
		 ::NoiseGenerator noiseGenerator;
		::Array< ::Dynamic> particles;
		 ::h2d::Font font;
		 ::h2d::Text debugNumberOfCells;
		 ::h2d::Graphics customGraphics;
		void init();

		void update(Float dt);

		void initBackground();
		::Dynamic initBackground_dyn();

		void initParticles();
		::Dynamic initParticles_dyn();

		void updateParticles();
		::Dynamic updateParticles_dyn();

		void initDebugTexts();
		::Dynamic initDebugTexts_dyn();

		void updateDebugTexts();
		::Dynamic updateDebugTexts_dyn();

};


#endif /* INCLUDED_H2D_intro */ 
