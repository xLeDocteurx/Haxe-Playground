#ifndef INCLUDED_hxd_Timer
#define INCLUDED_hxd_Timer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxd,Timer)

namespace hxd{


class HXCPP_CLASS_ATTRIBUTES Timer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Timer_obj OBJ_;
		Timer_obj();

	public:
		enum { _hx_ClassId = 0x2d36b399 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.Timer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.Timer"); }

		inline static ::hx::ObjectPtr< Timer_obj > __new() {
			::hx::ObjectPtr< Timer_obj > __this = new Timer_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Timer_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Timer_obj *__this = (Timer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Timer_obj), false, "hxd.Timer"));
			*(void **)__this = Timer_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Timer_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Timer",a5,2f,63,a3); }

		static void __boot();
		static Float wantedFPS;
		static Float maxDeltaTime;
		static Float smoothFactor;
		static Float lastTimeStamp;
		static Float elapsedTime;
		static int frameCount;
		static Float dt;
		static Float currentDT;
		static void update();
		static ::Dynamic update_dyn();

		static Float get_tmod();
		static ::Dynamic get_tmod_dyn();

		static Float set_tmod(Float v);
		static ::Dynamic set_tmod_dyn();

		static Float fps();
		static ::Dynamic fps_dyn();

		static void skip();
		static ::Dynamic skip_dyn();

		static void reset();
		static ::Dynamic reset_dyn();

};

} // end namespace hxd

#endif /* INCLUDED_hxd_Timer */ 
