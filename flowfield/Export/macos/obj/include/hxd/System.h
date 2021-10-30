#ifndef INCLUDED_hxd_System
#define INCLUDED_hxd_System

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxd,Cursor)
HX_DECLARE_CLASS1(hxd,Platform)
HX_DECLARE_CLASS1(hxd,System)
HX_DECLARE_CLASS1(hxd,SystemValue)

namespace hxd{


class HXCPP_CLASS_ATTRIBUTES System_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef System_obj OBJ_;
		System_obj();

	public:
		enum { _hx_ClassId = 0x1f4dda63 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.System")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.System"); }

		inline static ::hx::ObjectPtr< System_obj > __new() {
			::hx::ObjectPtr< System_obj > __this = new System_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< System_obj > __alloc(::hx::Ctx *_hx_ctx) {
			System_obj *__this = (System_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(System_obj), false, "hxd.System"));
			*(void **)__this = System_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~System_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("System",0f,0b,77,27); }

		static void __boot();
		static  ::Dynamic setCursor;
		static Dynamic setCursor_dyn() { return setCursor;}
		static void timeoutTick();
		static ::Dynamic timeoutTick_dyn();

		static  ::Dynamic loopFunc;
		static Dynamic loopFunc_dyn() { return loopFunc;}
		static  ::Dynamic getCurrentLoop();
		static ::Dynamic getCurrentLoop_dyn();

		static void setLoop( ::Dynamic f);
		static ::Dynamic setLoop_dyn();

		static void start( ::Dynamic callb);
		static ::Dynamic start_dyn();

		static void setNativeCursor( ::hxd::Cursor c);
		static ::Dynamic setNativeCursor_dyn();

		static ::String getDeviceName();
		static ::Dynamic getDeviceName_dyn();

		static Float getDefaultFrameRate();
		static ::Dynamic getDefaultFrameRate_dyn();

		static bool getValue( ::hxd::SystemValue s);
		static ::Dynamic getValue_dyn();

		static void exit();
		static ::Dynamic exit_dyn();

		static void openURL(::String url);
		static ::Dynamic openURL_dyn();

		static int get_width();
		static ::Dynamic get_width_dyn();

		static int get_height();
		static ::Dynamic get_height_dyn();

		static ::String get_lang();
		static ::Dynamic get_lang_dyn();

		static  ::hxd::Platform get_platform();
		static ::Dynamic get_platform_dyn();

		static int get_screenDPI();
		static ::Dynamic get_screenDPI_dyn();

		static bool get_allowTimeout();
		static ::Dynamic get_allowTimeout_dyn();

		static bool set_allowTimeout(bool b);
		static ::Dynamic set_allowTimeout_dyn();

};

} // end namespace hxd

#endif /* INCLUDED_hxd_System */ 
