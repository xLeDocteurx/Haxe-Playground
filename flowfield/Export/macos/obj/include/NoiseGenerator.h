#ifndef INCLUDED_NoiseGenerator
#define INCLUDED_NoiseGenerator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(NoiseGenerator)
HX_DECLARE_CLASS0(Vect3)



class HXCPP_CLASS_ATTRIBUTES NoiseGenerator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NoiseGenerator_obj OBJ_;
		NoiseGenerator_obj();

	public:
		enum { _hx_ClassId = 0x60449c39 };

		void __construct( ::Dynamic __o_noiseSize, ::Dynamic __o_octaves, ::Dynamic __o_falloff);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="NoiseGenerator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"NoiseGenerator"); }
		static ::hx::ObjectPtr< NoiseGenerator_obj > __new( ::Dynamic __o_noiseSize, ::Dynamic __o_octaves, ::Dynamic __o_falloff);
		static ::hx::ObjectPtr< NoiseGenerator_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_noiseSize, ::Dynamic __o_octaves, ::Dynamic __o_falloff);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NoiseGenerator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NoiseGenerator",79,19,59,7e); }

		Float sineAmplitude;
		 ::Vect3 referenceVector;
		int computedSeed;
		::Array< Float > noise;
		int NOISE_YWRAPB;
		int NOISE_YWRAP;
		int NOISE_ZWRAPB;
		int NOISE_ZWRAP;
		int NOISE_SIZE;
		int perlin_octaves;
		Float perlin_amp_falloff;
		Float getWhiteNoise(Float x,Float y,::hx::Null< Float >  z);
		::Dynamic getWhiteNoise_dyn();

		Float getPerlinNoise(Float x,::hx::Null< Float >  y, ::Dynamic z);
		::Dynamic getPerlinNoise_dyn();

		void set_PerlinNoiseDetail(int lod,int falloff);
		::Dynamic set_PerlinNoiseDetail_dyn();

};


#endif /* INCLUDED_NoiseGenerator */ 
