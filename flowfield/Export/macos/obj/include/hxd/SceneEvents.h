#ifndef INCLUDED_hxd_SceneEvents
#define INCLUDED_hxd_SceneEvents

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxd,Cursor)
HX_DECLARE_CLASS1(hxd,Event)
HX_DECLARE_CLASS1(hxd,Interactive)
HX_DECLARE_CLASS1(hxd,InteractiveScene)
HX_DECLARE_CLASS1(hxd,SceneEvents)
HX_DECLARE_CLASS1(hxd,Window)

namespace hxd{


class HXCPP_CLASS_ATTRIBUTES SceneEvents_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SceneEvents_obj OBJ_;
		SceneEvents_obj();

	public:
		enum { _hx_ClassId = 0x7ae05591 };

		void __construct( ::hxd::Window window);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.SceneEvents")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.SceneEvents"); }
		static ::hx::ObjectPtr< SceneEvents_obj > __new( ::hxd::Window window);
		static ::hx::ObjectPtr< SceneEvents_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxd::Window window);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SceneEvents_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SceneEvents",65,35,cb,24); }

		 ::hxd::Window window;
		::Array< ::Dynamic> scenes;
		::Array< ::Dynamic> overList;
		::Array< ::Dynamic> overCandidates;
		int overIndex;
		::Dynamic currentFocus;
		::Array< ::Dynamic> pendingEvents;
		::Array< ::Dynamic> pushList;
		 ::Dynamic currentDrag;
		Float mouseX;
		Float mouseY;
		int lastTouch;
		 ::hxd::Event focusLost;
		 ::hxd::Event checkPos;
		 ::hxd::Event onOut;
		 ::hxd::Event onOver;
		bool isOut;
		bool enablePhysicalMouse;
		bool mouseCheckMove;
		 ::hxd::Cursor defaultCursor;
		void setMousePos(Float xPos,Float yPos);
		::Dynamic setMousePos_dyn();

		void onRemove(::Dynamic i);
		::Dynamic onRemove_dyn();

		void addScene(::Dynamic s, ::Dynamic index);
		::Dynamic addScene_dyn();

		void removeScene(::Dynamic s);
		::Dynamic removeScene_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void focus(::Dynamic i);
		::Dynamic focus_dyn();

		void blur();
		::Dynamic blur_dyn();

		void checkFocus();
		::Dynamic checkFocus_dyn();

		void emitEvent( ::hxd::Event event);
		::Dynamic emitEvent_dyn();

		void checkEvents();
		::Dynamic checkEvents_dyn();

		void startCapture( ::Dynamic f, ::Dynamic onCancel, ::Dynamic touchId);
		::Dynamic startCapture_dyn();

		void stopCapture();
		::Dynamic stopCapture_dyn();

		void startDrag( ::Dynamic f, ::Dynamic onCancel, ::hxd::Event refEvent);
		::Dynamic startDrag_dyn();

		void stopDrag();
		::Dynamic stopDrag_dyn();

		::Dynamic getFocus();
		::Dynamic getFocus_dyn();

		void updateCursor(::Dynamic i);
		::Dynamic updateCursor_dyn();

		 ::hxd::Cursor set_defaultCursor( ::hxd::Cursor c);
		::Dynamic set_defaultCursor_dyn();

		void selectCursor();
		::Dynamic selectCursor_dyn();

		void onEvent( ::hxd::Event e);
		::Dynamic onEvent_dyn();

		void dispatchListeners( ::hxd::Event event);
		::Dynamic dispatchListeners_dyn();

};

} // end namespace hxd

#endif /* INCLUDED_hxd_SceneEvents */ 
