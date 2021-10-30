#ifndef INCLUDED_hxd_Math
#define INCLUDED_hxd_Math

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxd,Math)

namespace hxd{


class HXCPP_CLASS_ATTRIBUTES Math_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Math_obj OBJ_;
		Math_obj();

	public:
		enum { _hx_ClassId = 0x4c7e003c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.Math")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.Math"); }

		inline static ::hx::ObjectPtr< Math_obj > __new() {
			::hx::ObjectPtr< Math_obj > __this = new Math_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Math_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Math_obj *__this = (Math_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Math_obj), false, "hxd.Math"));
			*(void **)__this = Math_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Math_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Math",e8,6d,2f,33); }

		static void __boot();
		static Float PI;
		static Float EPSILON;
		static Float get_POSITIVE_INFINITY();
		static ::Dynamic get_POSITIVE_INFINITY_dyn();

		static Float get_NEGATIVE_INFINITY();
		static ::Dynamic get_NEGATIVE_INFINITY_dyn();

		static Float get_NaN();
		static ::Dynamic get_NaN_dyn();

		static bool isNaN(Float v);
		static ::Dynamic isNaN_dyn();

		static Float fmt(Float v);
		static ::Dynamic fmt_dyn();

		static int floor(Float f);
		static ::Dynamic floor_dyn();

		static int ceil(Float f);
		static ::Dynamic ceil_dyn();

		static int round(Float f);
		static ::Dynamic round_dyn();

		static Float clamp(Float f,::hx::Null< Float >  min,::hx::Null< Float >  max);
		static ::Dynamic clamp_dyn();

		static Float pow(Float v,Float p);
		static ::Dynamic pow_dyn();

		static Float cos(Float f);
		static ::Dynamic cos_dyn();

		static Float sin(Float f);
		static ::Dynamic sin_dyn();

		static Float tan(Float f);
		static ::Dynamic tan_dyn();

		static Float acos(Float f);
		static ::Dynamic acos_dyn();

		static Float asin(Float f);
		static ::Dynamic asin_dyn();

		static Float atan(Float f);
		static ::Dynamic atan_dyn();

		static Float sqrt(Float f);
		static ::Dynamic sqrt_dyn();

		static Float invSqrt(Float f);
		static ::Dynamic invSqrt_dyn();

		static Float atan2(Float dy,Float dx);
		static ::Dynamic atan2_dyn();

		static Float abs(Float f);
		static ::Dynamic abs_dyn();

		static Float max(Float a,Float b);
		static ::Dynamic max_dyn();

		static Float min(Float a,Float b);
		static ::Dynamic min_dyn();

		static int iabs(int i);
		static ::Dynamic iabs_dyn();

		static int imax(int a,int b);
		static ::Dynamic imax_dyn();

		static int imin(int a,int b);
		static ::Dynamic imin_dyn();

		static int iclamp(int v,int min,int max);
		static ::Dynamic iclamp_dyn();

		static Float lerp(Float a,Float b,Float k);
		static ::Dynamic lerp_dyn();

		static Float lerpTime(Float a,Float b,Float k,Float dt);
		static ::Dynamic lerpTime_dyn();

		static int bitCount(int v);
		static ::Dynamic bitCount_dyn();

		static bool isPOT(int v);
		static ::Dynamic isPOT_dyn();

		static int nextPOT(int v);
		static ::Dynamic nextPOT_dyn();

		static Float distanceSq(Float dx,Float dy,::hx::Null< Float >  dz);
		static ::Dynamic distanceSq_dyn();

		static Float distance(Float dx,Float dy,::hx::Null< Float >  dz);
		static ::Dynamic distance_dyn();

		static int colorLerp(int c1,int c2,Float k);
		static ::Dynamic colorLerp_dyn();

		static Float angle(Float da);
		static ::Dynamic angle_dyn();

		static Float angleLerp(Float a,Float b,Float k);
		static ::Dynamic angleLerp_dyn();

		static Float angleMove(Float a,Float b,Float max);
		static ::Dynamic angleMove_dyn();

		static Float valueMove(Float v,Float target,Float max);
		static ::Dynamic valueMove_dyn();

		static void shuffle(::cpp::VirtualArray a);
		static ::Dynamic shuffle_dyn();

		static Float random(::hx::Null< Float >  max);
		static ::Dynamic random_dyn();

		static Float srand(::hx::Null< Float >  max);
		static ::Dynamic srand_dyn();

		static Float b2f(int v);
		static ::Dynamic b2f_dyn();

		static int f2b(Float v);
		static ::Dynamic f2b_dyn();

		static int umod(int value,int modulo);
		static ::Dynamic umod_dyn();

		static Float ufmod(Float value,Float modulo);
		static ::Dynamic ufmod_dyn();

		static Float degToRad(Float deg);
		static ::Dynamic degToRad_dyn();

		static Float radToDeg(Float rad);
		static ::Dynamic radToDeg_dyn();

};

} // end namespace hxd

#endif /* INCLUDED_hxd_Math */ 
