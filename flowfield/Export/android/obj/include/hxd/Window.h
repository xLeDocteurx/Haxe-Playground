#ifndef INCLUDED_hxd_Window
#define INCLUDED_hxd_Window

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,List)
HX_DECLARE_CLASS1(hxd,DisplayMode)
HX_DECLARE_CLASS1(hxd,Event)
HX_DECLARE_CLASS1(hxd,Window)

namespace hxd{


class HXCPP_CLASS_ATTRIBUTES Window_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Window_obj OBJ_;
		Window_obj();

	public:
		enum { _hx_ClassId = 0x7ef7d764 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.Window")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.Window"); }
		static ::hx::ObjectPtr< Window_obj > __new();
		static ::hx::ObjectPtr< Window_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		static void __alloc_dynamic_functions(::hx::Ctx *_hx_alloc,Window_obj *_hx_obj);
		//~Window_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Window",10,08,21,87); }

		static void __boot();
		static  ::hxd::Window inst;
		static  ::hxd::Window getInstance();
		static ::Dynamic getInstance_dyn();

		 ::haxe::ds::List resizeEvents;
		 ::haxe::ds::List eventTargets;
		::Dynamic onClose;
		inline ::Dynamic &onClose_dyn() {return onClose; }

		void event( ::hxd::Event e);
		::Dynamic event_dyn();

		void addEventTarget( ::Dynamic et);
		::Dynamic addEventTarget_dyn();

		void removeEventTarget( ::Dynamic et);
		::Dynamic removeEventTarget_dyn();

		void addResizeEvent( ::Dynamic f);
		::Dynamic addResizeEvent_dyn();

		void removeResizeEvent( ::Dynamic f);
		::Dynamic removeResizeEvent_dyn();

		void onResize( ::Dynamic e);
		::Dynamic onResize_dyn();

		void resize(int width,int height);
		::Dynamic resize_dyn();

		void setFullScreen(bool v);
		::Dynamic setFullScreen_dyn();

		int get_mouseX();
		::Dynamic get_mouseX_dyn();

		int get_mouseY();
		::Dynamic get_mouseY_dyn();

		int get_width();
		::Dynamic get_width_dyn();

		int get_height();
		::Dynamic get_height_dyn();

		bool get_mouseLock();
		::Dynamic get_mouseLock_dyn();

		bool set_mouseLock(bool v);
		::Dynamic set_mouseLock_dyn();

		bool get_vsync();
		::Dynamic get_vsync_dyn();

		bool set_vsync(bool b);
		::Dynamic set_vsync_dyn();

		bool get_isFocused();
		::Dynamic get_isFocused_dyn();

		 ::hxd::DisplayMode get_displayMode();
		::Dynamic get_displayMode_dyn();

		 ::hxd::DisplayMode set_displayMode( ::hxd::DisplayMode m);
		::Dynamic set_displayMode_dyn();

		::String get_title();
		::Dynamic get_title_dyn();

		::String set_title(::String t);
		::Dynamic set_title_dyn();

};

} // end namespace hxd

#endif /* INCLUDED_hxd_Window */ 
