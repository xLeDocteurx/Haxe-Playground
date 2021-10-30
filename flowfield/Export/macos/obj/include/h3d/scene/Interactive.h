#ifndef INCLUDED_h3d_scene_Interactive
#define INCLUDED_h3d_scene_Interactive

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_scene_Object
#include <h3d/scene/Object.h>
#endif
#ifndef INCLUDED_hxd_Interactive
#include <hxd/Interactive.h>
#endif
HX_DECLARE_CLASS1(h3d,IDrawable)
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,scene,Interactive)
HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS2(h3d,scene,Scene)
HX_DECLARE_CLASS1(hxd,Cursor)
HX_DECLARE_CLASS1(hxd,Event)
HX_DECLARE_CLASS1(hxd,Interactive)
HX_DECLARE_CLASS1(hxd,InteractiveScene)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES Interactive_obj : public  ::h3d::scene::Object_obj
{
	public:
		typedef  ::h3d::scene::Object_obj super;
		typedef Interactive_obj OBJ_;
		Interactive_obj();

	public:
		enum { _hx_ClassId = 0x156e9f0b };

		void __construct(::Dynamic shape, ::h3d::scene::Object parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.scene.Interactive")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.scene.Interactive"); }
		static ::hx::ObjectPtr< Interactive_obj > __new(::Dynamic shape, ::h3d::scene::Object parent);
		static ::hx::ObjectPtr< Interactive_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic shape, ::h3d::scene::Object parent);
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

		::Dynamic shape;
		::Dynamic preciseShape;
		int priority;
		 ::hxd::Cursor cursor;
		bool cancelEvents;
		bool propagateEvents;
		bool enableRightButton;
		bool bestMatch;
		 ::h3d::scene::Scene scene;
		int mouseDownButton;
		 ::h3d::Vector hitPoint;
		void onAdd();

		void onRemove();

		void preventClick();
		::Dynamic preventClick_dyn();

		::Dynamic getInteractiveScene();
		::Dynamic getInteractiveScene_dyn();

		void handleEvent( ::hxd::Event e);
		::Dynamic handleEvent_dyn();

		 ::hxd::Cursor set_cursor( ::hxd::Cursor c);
		::Dynamic set_cursor_dyn();

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

} // end namespace h3d
} // end namespace scene

#endif /* INCLUDED_h3d_scene_Interactive */ 
