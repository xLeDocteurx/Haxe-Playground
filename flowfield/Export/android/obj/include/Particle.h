#ifndef INCLUDED_Particle
#define INCLUDED_Particle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Particle)
HX_DECLARE_CLASS1(h2d,Drawable)
HX_DECLARE_CLASS1(h2d,Graphics)
HX_DECLARE_CLASS1(h2d,Object)



class HXCPP_CLASS_ATTRIBUTES Particle_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Particle_obj OBJ_;
		Particle_obj();

	public:
		enum { _hx_ClassId = 0x4f97b7ee };

		void __construct(Float positionX,Float positionY,Float size,Float alpha);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Particle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Particle"); }
		static ::hx::ObjectPtr< Particle_obj > __new(Float positionX,Float positionY,Float size,Float alpha);
		static ::hx::ObjectPtr< Particle_obj > __alloc(::hx::Ctx *_hx_ctx,Float positionX,Float positionY,Float size,Float alpha);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Particle_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Particle",66,fa,42,46); }

		Float positionX;
		Float positionY;
		Float _size;
		Float _alpha;
		void draw( ::h2d::Graphics customGraphics,int color);
		::Dynamic draw_dyn();

		void applyForce(Float noiseValue,Float magnitude,int windowWidth,int windowHeight);
		::Dynamic applyForce_dyn();

};


#endif /* INCLUDED_Particle */ 
