#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_NoiseGenerator
#include <NoiseGenerator.h>
#endif
#ifndef INCLUDED_Vect3
#include <Vect3.h>
#endif
#ifndef INCLUDED__Main_Main_Fields_
#include <_Main/Main_Fields_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eb5b8d2dce1feab0_140_new,"NoiseGenerator","new",0xed916aeb,"NoiseGenerator.new","Main.hx",140,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_eb5b8d2dce1feab0_162_getWhiteNoise,"NoiseGenerator","getWhiteNoise",0xd44f22b2,"NoiseGenerator.getWhiteNoise","Main.hx",162,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_eb5b8d2dce1feab0_167_getPerlinNoise,"NoiseGenerator","getPerlinNoise",0x405c02c5,"NoiseGenerator.getPerlinNoise","Main.hx",167,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_eb5b8d2dce1feab0_196_set_PerlinNoiseDetail,"NoiseGenerator","set_PerlinNoiseDetail",0x2e7755a5,"NoiseGenerator.set_PerlinNoiseDetail","Main.hx",196,0x087e5c05)

void NoiseGenerator_obj::__construct( ::Dynamic __o_noiseSize, ::Dynamic __o_octaves, ::Dynamic __o_falloff){
            		 ::Dynamic noiseSize = __o_noiseSize;
            		if (::hx::IsNull(__o_noiseSize)) noiseSize = 4095;
            		 ::Dynamic octaves = __o_octaves;
            		if (::hx::IsNull(__o_octaves)) octaves = 4;
            		 ::Dynamic falloff = __o_falloff;
            		if (::hx::IsNull(__o_falloff)) falloff = ((Float)0.5);
            	HX_GC_STACKFRAME(&_hx_pos_eb5b8d2dce1feab0_140_new)
HXLINE( 142)		this->sineAmplitude = ((Float)100000.0);
HXLINE( 143)		this->referenceVector =  ::Vect3_obj::__alloc( HX_CTX ,((Float)12.9898),((Float)78.233),((Float)91.93432));
HXLINE( 145)		this->computedSeed = ::hx::UShr(::Math_obj::round((::Math_obj::random() * ( (Float)(9999) ))),0);
HXLINE( 147)		this->noise = null();
HXLINE( 149)		this->NOISE_YWRAPB = 4;
HXLINE( 150)		this->NOISE_YWRAP = (1 << this->NOISE_YWRAPB);
HXLINE( 151)		this->NOISE_ZWRAPB = 8;
HXLINE( 152)		this->NOISE_ZWRAP = (1 << this->NOISE_ZWRAPB);
HXLINE( 153)		this->NOISE_SIZE = ( (int)(noiseSize) );
HXLINE( 156)		this->perlin_octaves = ( (int)(octaves) );
HXLINE( 157)		this->perlin_amp_falloff = ( (Float)(falloff) );
            	}

Dynamic NoiseGenerator_obj::__CreateEmpty() { return new NoiseGenerator_obj; }

void *NoiseGenerator_obj::_hx_vtable = 0;

Dynamic NoiseGenerator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NoiseGenerator_obj > _hx_result = new NoiseGenerator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool NoiseGenerator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x60449c39;
}

Float NoiseGenerator_obj::getWhiteNoise(Float x,Float y,::hx::Null< Float >  __o_z){
            		Float z = __o_z.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_eb5b8d2dce1feab0_162_getWhiteNoise)
HXDLIN( 162)		Float _hx_tmp = ::Math_obj::sin(::Vect3_obj::static_dot( ::Vect3_obj::__alloc( HX_CTX ,x,y,z),this->referenceVector));
HXDLIN( 162)		return ::_Main::Main_Fields__obj::fract(((_hx_tmp * this->sineAmplitude) * ( (Float)(this->computedSeed) )));
            	}


HX_DEFINE_DYNAMIC_FUNC3(NoiseGenerator_obj,getWhiteNoise,return )

Float NoiseGenerator_obj::getPerlinNoise(Float x,::hx::Null< Float >  __o_y, ::Dynamic __o_z){
            		Float y = __o_y.Default(0);
            		 ::Dynamic z = __o_z;
            		if (::hx::IsNull(__o_z)) z = 0;
            	HX_GC_STACKFRAME(&_hx_pos_eb5b8d2dce1feab0_167_getPerlinNoise)
HXLINE( 168)		Float r = ( (Float)(0) );
HXLINE( 169)		Float ampl = ((Float)0.5);
HXLINE( 170)		{
HXLINE( 170)			int _g = 0;
HXDLIN( 170)			int _g1 = this->perlin_octaves;
HXDLIN( 170)			while((_g < _g1)){
HXLINE( 170)				_g = (_g + 1);
HXDLIN( 170)				int o = (_g - 1);
HXLINE( 171)				Float octaveAmplitude;
HXDLIN( 171)				if ((o > 0)) {
HXLINE( 171)					octaveAmplitude = ::Math_obj::pow(this->perlin_amp_falloff,( (Float)(o) ));
            				}
            				else {
HXLINE( 171)					octaveAmplitude = ( (Float)(1) );
            				}
HXLINE( 172)				Float octaveScale;
HXDLIN( 172)				if ((o > 0)) {
HXLINE( 172)					octaveScale = ::Math_obj::pow(( (Float)(2) ),( (Float)(o) ));
            				}
            				else {
HXLINE( 172)					octaveScale = ( (Float)(1) );
            				}
HXLINE( 174)				 ::Vect3 vector =  ::Vect3_obj::__alloc( HX_CTX ,(x * octaveScale),(y * octaveScale),(( (Float)(z) ) * octaveScale));
HXLINE( 175)				 ::Vect3 vectorInteger = vector->get_integer();
HXLINE( 176)				 ::Vect3 vectorFract = vector->get_fract();
HXLINE( 178)				Float randA = this->getWhiteNoise(vectorInteger->x,vectorInteger->y,vectorInteger->z);
HXLINE( 179)				Float randB = this->getWhiteNoise((vectorInteger->x + 1),vectorInteger->y,vectorInteger->z);
HXLINE( 180)				Float randC = this->getWhiteNoise(vectorInteger->x,(vectorInteger->y + 1),vectorInteger->z);
HXLINE( 181)				Float randD = this->getWhiteNoise((vectorInteger->x + 1),(vectorInteger->y + 1),vectorInteger->z);
HXLINE( 182)				Float randE = this->getWhiteNoise(vectorInteger->x,vectorInteger->y,(vectorInteger->z + 1));
HXLINE( 183)				Float randF = this->getWhiteNoise((vectorInteger->x + 1),vectorInteger->y,(vectorInteger->z + 1));
HXLINE( 184)				Float randG = this->getWhiteNoise(vectorInteger->x,(vectorInteger->y + 1),(vectorInteger->z + 1));
HXLINE( 185)				Float randH = this->getWhiteNoise((vectorInteger->x + 1),(vectorInteger->y + 1),(vectorInteger->z + 1));
HXLINE( 187)				Float lerpABCDEFGH = ::_Main::Main_Fields__obj::interpolateCubic(randA,randB,vectorFract->x);
HXLINE( 188)				Float lerpABCDEFGH1 = ::_Main::Main_Fields__obj::interpolateCubic(randC,randD,vectorFract->x);
HXLINE( 187)				Float lerpABCDEFGH2 = ::_Main::Main_Fields__obj::interpolateCubic(lerpABCDEFGH,lerpABCDEFGH1,vectorFract->y);
HXLINE( 189)				Float lerpABCDEFGH3 = ::_Main::Main_Fields__obj::interpolateCubic(randE,randF,vectorFract->x);
HXDLIN( 189)				Float lerpABCDEFGH4 = ::_Main::Main_Fields__obj::interpolateCubic(randG,randH,vectorFract->x);
HXDLIN( 189)				Float lerpABCDEFGH5 = ::_Main::Main_Fields__obj::interpolateCubic(lerpABCDEFGH3,lerpABCDEFGH4,vectorFract->y);
HXLINE( 187)				Float lerpABCDEFGH6 = ::_Main::Main_Fields__obj::interpolateLinear(lerpABCDEFGH2,lerpABCDEFGH5,vectorFract->z);
HXLINE( 191)				if ((o > 0)) {
HXLINE( 191)					r = (r * (( (Float)(1) ) - ((lerpABCDEFGH6 * octaveAmplitude) / octaveScale)));
            				}
            				else {
HXLINE( 191)					r = lerpABCDEFGH6;
            				}
            			}
            		}
HXLINE( 193)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC3(NoiseGenerator_obj,getPerlinNoise,return )

void NoiseGenerator_obj::set_PerlinNoiseDetail(int lod,int falloff){
            	HX_STACKFRAME(&_hx_pos_eb5b8d2dce1feab0_196_set_PerlinNoiseDetail)
HXLINE( 197)		if ((lod > 0)) {
HXLINE( 198)			this->perlin_octaves = lod;
            		}
HXLINE( 200)		if ((falloff > 0)) {
HXLINE( 201)			this->perlin_amp_falloff = ( (Float)(falloff) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(NoiseGenerator_obj,set_PerlinNoiseDetail,(void))


::hx::ObjectPtr< NoiseGenerator_obj > NoiseGenerator_obj::__new( ::Dynamic __o_noiseSize, ::Dynamic __o_octaves, ::Dynamic __o_falloff) {
	::hx::ObjectPtr< NoiseGenerator_obj > __this = new NoiseGenerator_obj();
	__this->__construct(__o_noiseSize,__o_octaves,__o_falloff);
	return __this;
}

::hx::ObjectPtr< NoiseGenerator_obj > NoiseGenerator_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_noiseSize, ::Dynamic __o_octaves, ::Dynamic __o_falloff) {
	NoiseGenerator_obj *__this = (NoiseGenerator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NoiseGenerator_obj), true, "NoiseGenerator"));
	*(void **)__this = NoiseGenerator_obj::_hx_vtable;
	__this->__construct(__o_noiseSize,__o_octaves,__o_falloff);
	return __this;
}

NoiseGenerator_obj::NoiseGenerator_obj()
{
}

void NoiseGenerator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NoiseGenerator);
	HX_MARK_MEMBER_NAME(sineAmplitude,"sineAmplitude");
	HX_MARK_MEMBER_NAME(referenceVector,"referenceVector");
	HX_MARK_MEMBER_NAME(computedSeed,"computedSeed");
	HX_MARK_MEMBER_NAME(noise,"noise");
	HX_MARK_MEMBER_NAME(NOISE_YWRAPB,"NOISE_YWRAPB");
	HX_MARK_MEMBER_NAME(NOISE_YWRAP,"NOISE_YWRAP");
	HX_MARK_MEMBER_NAME(NOISE_ZWRAPB,"NOISE_ZWRAPB");
	HX_MARK_MEMBER_NAME(NOISE_ZWRAP,"NOISE_ZWRAP");
	HX_MARK_MEMBER_NAME(NOISE_SIZE,"NOISE_SIZE");
	HX_MARK_MEMBER_NAME(perlin_octaves,"perlin_octaves");
	HX_MARK_MEMBER_NAME(perlin_amp_falloff,"perlin_amp_falloff");
	HX_MARK_END_CLASS();
}

void NoiseGenerator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sineAmplitude,"sineAmplitude");
	HX_VISIT_MEMBER_NAME(referenceVector,"referenceVector");
	HX_VISIT_MEMBER_NAME(computedSeed,"computedSeed");
	HX_VISIT_MEMBER_NAME(noise,"noise");
	HX_VISIT_MEMBER_NAME(NOISE_YWRAPB,"NOISE_YWRAPB");
	HX_VISIT_MEMBER_NAME(NOISE_YWRAP,"NOISE_YWRAP");
	HX_VISIT_MEMBER_NAME(NOISE_ZWRAPB,"NOISE_ZWRAPB");
	HX_VISIT_MEMBER_NAME(NOISE_ZWRAP,"NOISE_ZWRAP");
	HX_VISIT_MEMBER_NAME(NOISE_SIZE,"NOISE_SIZE");
	HX_VISIT_MEMBER_NAME(perlin_octaves,"perlin_octaves");
	HX_VISIT_MEMBER_NAME(perlin_amp_falloff,"perlin_amp_falloff");
}

::hx::Val NoiseGenerator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"noise") ) { return ::hx::Val( noise ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"NOISE_SIZE") ) { return ::hx::Val( NOISE_SIZE ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"NOISE_YWRAP") ) { return ::hx::Val( NOISE_YWRAP ); }
		if (HX_FIELD_EQ(inName,"NOISE_ZWRAP") ) { return ::hx::Val( NOISE_ZWRAP ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"computedSeed") ) { return ::hx::Val( computedSeed ); }
		if (HX_FIELD_EQ(inName,"NOISE_YWRAPB") ) { return ::hx::Val( NOISE_YWRAPB ); }
		if (HX_FIELD_EQ(inName,"NOISE_ZWRAPB") ) { return ::hx::Val( NOISE_ZWRAPB ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sineAmplitude") ) { return ::hx::Val( sineAmplitude ); }
		if (HX_FIELD_EQ(inName,"getWhiteNoise") ) { return ::hx::Val( getWhiteNoise_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"perlin_octaves") ) { return ::hx::Val( perlin_octaves ); }
		if (HX_FIELD_EQ(inName,"getPerlinNoise") ) { return ::hx::Val( getPerlinNoise_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"referenceVector") ) { return ::hx::Val( referenceVector ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"perlin_amp_falloff") ) { return ::hx::Val( perlin_amp_falloff ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"set_PerlinNoiseDetail") ) { return ::hx::Val( set_PerlinNoiseDetail_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NoiseGenerator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"noise") ) { noise=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"NOISE_SIZE") ) { NOISE_SIZE=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"NOISE_YWRAP") ) { NOISE_YWRAP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NOISE_ZWRAP") ) { NOISE_ZWRAP=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"computedSeed") ) { computedSeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NOISE_YWRAPB") ) { NOISE_YWRAPB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NOISE_ZWRAPB") ) { NOISE_ZWRAPB=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sineAmplitude") ) { sineAmplitude=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"perlin_octaves") ) { perlin_octaves=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"referenceVector") ) { referenceVector=inValue.Cast<  ::Vect3 >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"perlin_amp_falloff") ) { perlin_amp_falloff=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NoiseGenerator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sineAmplitude",36,ad,bd,95));
	outFields->push(HX_("referenceVector",ee,96,3b,18));
	outFields->push(HX_("computedSeed",1e,fd,d9,9f));
	outFields->push(HX_("noise",9a,8f,c2,9f));
	outFields->push(HX_("NOISE_YWRAPB",a4,39,8c,c3));
	outFields->push(HX_("NOISE_YWRAP",de,88,8b,f6));
	outFields->push(HX_("NOISE_ZWRAPB",03,96,e7,29));
	outFields->push(HX_("NOISE_ZWRAP",5f,1d,f2,89));
	outFields->push(HX_("NOISE_SIZE",e6,62,cd,fa));
	outFields->push(HX_("perlin_octaves",98,c5,ee,b9));
	outFields->push(HX_("perlin_amp_falloff",ee,6b,d6,83));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NoiseGenerator_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(NoiseGenerator_obj,sineAmplitude),HX_("sineAmplitude",36,ad,bd,95)},
	{::hx::fsObject /*  ::Vect3 */ ,(int)offsetof(NoiseGenerator_obj,referenceVector),HX_("referenceVector",ee,96,3b,18)},
	{::hx::fsInt,(int)offsetof(NoiseGenerator_obj,computedSeed),HX_("computedSeed",1e,fd,d9,9f)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(NoiseGenerator_obj,noise),HX_("noise",9a,8f,c2,9f)},
	{::hx::fsInt,(int)offsetof(NoiseGenerator_obj,NOISE_YWRAPB),HX_("NOISE_YWRAPB",a4,39,8c,c3)},
	{::hx::fsInt,(int)offsetof(NoiseGenerator_obj,NOISE_YWRAP),HX_("NOISE_YWRAP",de,88,8b,f6)},
	{::hx::fsInt,(int)offsetof(NoiseGenerator_obj,NOISE_ZWRAPB),HX_("NOISE_ZWRAPB",03,96,e7,29)},
	{::hx::fsInt,(int)offsetof(NoiseGenerator_obj,NOISE_ZWRAP),HX_("NOISE_ZWRAP",5f,1d,f2,89)},
	{::hx::fsInt,(int)offsetof(NoiseGenerator_obj,NOISE_SIZE),HX_("NOISE_SIZE",e6,62,cd,fa)},
	{::hx::fsInt,(int)offsetof(NoiseGenerator_obj,perlin_octaves),HX_("perlin_octaves",98,c5,ee,b9)},
	{::hx::fsFloat,(int)offsetof(NoiseGenerator_obj,perlin_amp_falloff),HX_("perlin_amp_falloff",ee,6b,d6,83)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NoiseGenerator_obj_sStaticStorageInfo = 0;
#endif

static ::String NoiseGenerator_obj_sMemberFields[] = {
	HX_("sineAmplitude",36,ad,bd,95),
	HX_("referenceVector",ee,96,3b,18),
	HX_("computedSeed",1e,fd,d9,9f),
	HX_("noise",9a,8f,c2,9f),
	HX_("NOISE_YWRAPB",a4,39,8c,c3),
	HX_("NOISE_YWRAP",de,88,8b,f6),
	HX_("NOISE_ZWRAPB",03,96,e7,29),
	HX_("NOISE_ZWRAP",5f,1d,f2,89),
	HX_("NOISE_SIZE",e6,62,cd,fa),
	HX_("perlin_octaves",98,c5,ee,b9),
	HX_("perlin_amp_falloff",ee,6b,d6,83),
	HX_("getWhiteNoise",67,cc,88,53),
	HX_("getPerlinNoise",70,d7,96,13),
	HX_("set_PerlinNoiseDetail",5a,3c,b1,91),
	::String(null()) };

::hx::Class NoiseGenerator_obj::__mClass;

void NoiseGenerator_obj::__register()
{
	NoiseGenerator_obj _hx_dummy;
	NoiseGenerator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("NoiseGenerator",79,19,59,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NoiseGenerator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NoiseGenerator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NoiseGenerator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NoiseGenerator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

