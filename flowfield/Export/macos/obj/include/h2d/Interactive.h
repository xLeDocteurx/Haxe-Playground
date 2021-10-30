#ifndef INCLUDED_h2d_Interactive
#define INCLUDED_h2d_Interactive

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h2d_Drawable
#include <h2d/Drawable.h>
#endif
#ifndef INCLUDED_hxd_Interactive
#include <hxd/Interactive.h>
#endif
HX_DECLARE_CLASS1(h2d,Drawable)
HX_DECLARE_CLASS1(h2d,Interactive)
HX_DECLARE_CLASS1(h2d,Layers)
HX_DECLARE_CLASS1(h2d,Mask)
HX_DECLARE_CLASS1(h2d,Object)
HX_DECLARE_CLASS1(h2d,RenderContext)
HX_DECLARE_CLASS1(h2d,Scene)
HX_DECLARE_CLASS2(h2d,col,Bounds)
HX_DECLARE_CLASS2(h2d,col,Collider)
HX_DECLARE_CLASS1(h3d,IDrawable)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS1(hxd,Cursor)
HX_DECLARE_CLASS1(hxd,Event)
HX_DECLARE_CLASS1(hxd,Interactive)
HX_DECLARE_CLASS1(hxd,InteractiveScene)

namespace h2d{


class HXCPP_CLASS_ATTRIBUTES Interactive_obj : public  ::h2d::Drawable_obj
{
	public:
		typedef  ::h2d::Drawable_obj super;
		typedef Interactive_obj OBJ_;
		Interactive_obj();

	public:
		enum { _hx_ClassId = 0x7bce7bac };

		void __construct(Float width,Float height, ::h2d::Object parent,::Dynamic shape);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h2d.Interactive")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h2d.Interactive"); }
		static ::hx::ObjectPtr< Interactive_obj > __new(Float width,Float height, ::h2d::Object parent,::Dynamic shape);
		static ::hx::ObjectPtr< Interactive_obj > __alloc(::hx::Ctx *_hx_ctx,Float width,Float height, ::h2d::Object parent,::Dynamic shape);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		static void __alloc_dynamic_functions(::hx::Ctx *_hx_alloc,Interactive_obj *_hx_obj);
		//~Interactive_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Interactive",c2,d5,8b,20); }

		Float width;
		Float height;
		 ::hxd::Cursor cursor;
		bool isEllipse;
		bool cancelEvents;
		bool propagateEvents;
		 ::Dynamic backgroundColor;
		bool enableRightButton;
		 ::h2d::Scene scene;
		int mouseDownButton;
		 ::h2d::Mask parentMask;
		Float invDet;
		::Dynamic shape;
		Float shapeX;
		Float shapeY;
		void onAdd();

		void draw( ::h2d::RenderContext ctx);

		void getBoundsRec( ::h2d::Object relativeTo, ::h2d::col::Bounds out,bool forSize);

		void onHierarchyMoved(bool parentChanged);

		void updateMask();
		::Dynamic updateMask_dyn();

		void onRemove();

		bool checkBounds( ::hxd::Event e);
		::Dynamic checkBounds_dyn();

		void preventClick();
		::Dynamic preventClick_dyn();

		::Dynamic getInteractiveScene();
		::Dynamic getInteractiveScene_dyn();

		void handleEvent( ::hxd::Event e);
		::Dynamic handleEvent_dyn();

		void calcAbsPos();

		 ::hxd::Cursor set_cursor( ::hxd::Cursor c);
		::Dynamic set_cursor_dyn();

		void eventToLocal( ::hxd::Event e);
		::Dynamic eventToLocal_dyn();

		void startCapture( ::Dynamic callb, ::Dynamic onCancel, ::Dynamic touchId);
		::Dynamic startCapture_dyn();

		void stopCapture();
		::Dynamic stopCapture_dyn();

		void startDrag( ::Dynamic callb, ::Dynamic onCancel);
		::Dynamic startDrag_dyn();

		void stopDrag();
		::Dynamic stopDrag_dyn();

		void focus();
		::Dynamic focus_dyn();

		void blur();
		::Dynamic blur_dyn();

		bool isOver();
		::Dynamic isOver_dyn();

		bool hasFocus();
		::Dynamic hasFocus_dyn();

		::Dynamic onOver;
		inline ::Dynamic &onOver_dyn() {return onOver; }

		::Dynamic onOut;
		inline ::Dynamic &onOut_dyn() {return onOut; }

		::Dynamic onPush;
		inline ::Dynamic &onPush_dyn() {return onPush; }

		::Dynamic onRelease;
		inline ::Dynamic &onRelease_dyn() {return onRelease; }

		::Dynamic onReleaseOutside;
		inline ::Dynamic &onReleaseOutside_dyn() {return onReleaseOutside; }

		::Dynamic onClick;
		inline ::Dynamic &onClick_dyn() {return onClick; }

		::Dynamic onMove;
		inline ::Dynamic &onMove_dyn() {return onMove; }

		::Dynamic onWheel;
		inline ::Dynamic &onWheel_dyn() {return onWheel; }

		::Dynamic onFocus;
		inline ::Dynamic &onFocus_dyn() {return onFocus; }

		::Dynamic onFocusLost;
		inline ::Dynamic &onFocusLost_dyn() {return onFocusLost; }

		::Dynamic onKeyUp;
		inline ::Dynamic &onKeyUp_dyn() {return onKeyUp; }

		::Dynamic onKeyDown;
		inline ::Dynamic &onKeyDown_dyn() {return onKeyDown; }

		::Dynamic onCheck;
		inline ::Dynamic &onCheck_dyn() {return onCheck; }

		::Dynamic onTextInput;
		inline ::Dynamic &onTextInput_dyn() {return onTextInput; }

};

} // end namespace h2d

#endif /* INCLUDED_h2d_Interactive */ 
