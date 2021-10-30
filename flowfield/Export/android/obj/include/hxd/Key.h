#ifndef INCLUDED_hxd_Key
#define INCLUDED_hxd_Key

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxd,Event)
HX_DECLARE_CLASS1(hxd,Key)

namespace hxd{


class HXCPP_CLASS_ATTRIBUTES Key_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Key_obj OBJ_;
		Key_obj();

	public:
		enum { _hx_ClassId = 0x4b602073 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.Key")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.Key"); }

		inline static ::hx::ObjectPtr< Key_obj > __new() {
			::hx::ObjectPtr< Key_obj > __this = new Key_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Key_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Key_obj *__this = (Key_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Key_obj), false, "hxd.Key"));
			*(void **)__this = Key_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Key_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Key",7f,41,39,00); }

		static void __boot();
		static int BACKSPACE;
		static int TAB;
		static int ENTER;
		static int SHIFT;
		static int CTRL;
		static int ALT;
		static int ESCAPE;
		static int SPACE;
		static int PGUP;
		static int PGDOWN;
		static int END;
		static int HOME;
		static int LEFT;
		static int UP;
		static int RIGHT;
		static int DOWN;
		static int INSERT;
		static int DELETE;
		static int QWERTY_EQUALS;
		static int QWERTY_MINUS;
		static int QWERTY_TILDE;
		static int QWERTY_BRACKET_LEFT;
		static int QWERTY_BRACKET_RIGHT;
		static int QWERTY_SEMICOLON;
		static int QWERTY_QUOTE;
		static int QWERTY_BACKSLASH;
		static int QWERTY_COMMA;
		static int QWERTY_PERIOD;
		static int QWERTY_SLASH;
		static int INTL_BACKSLASH;
		static int LEFT_WINDOW_KEY;
		static int RIGHT_WINDOW_KEY;
		static int CONTEXT_MENU;
		static int PAUSE_BREAK;
		static int CAPS_LOCK;
		static int NUM_LOCK;
		static int SCROLL_LOCK;
		static int NUMBER_0;
		static int NUMBER_1;
		static int NUMBER_2;
		static int NUMBER_3;
		static int NUMBER_4;
		static int NUMBER_5;
		static int NUMBER_6;
		static int NUMBER_7;
		static int NUMBER_8;
		static int NUMBER_9;
		static int NUMPAD_0;
		static int NUMPAD_1;
		static int NUMPAD_2;
		static int NUMPAD_3;
		static int NUMPAD_4;
		static int NUMPAD_5;
		static int NUMPAD_6;
		static int NUMPAD_7;
		static int NUMPAD_8;
		static int NUMPAD_9;
		static int A;
		static int B;
		static int C;
		static int D;
		static int E;
		static int F;
		static int G;
		static int H;
		static int I;
		static int J;
		static int K;
		static int L;
		static int M;
		static int N;
		static int O;
		static int P;
		static int Q;
		static int R;
		static int S;
		static int T;
		static int U;
		static int V;
		static int W;
		static int X;
		static int Y;
		static int Z;
		static int F1;
		static int F2;
		static int F3;
		static int F4;
		static int F5;
		static int F6;
		static int F7;
		static int F8;
		static int F9;
		static int F10;
		static int F11;
		static int F12;
		static int F13;
		static int F14;
		static int F15;
		static int F16;
		static int F17;
		static int F18;
		static int F19;
		static int F20;
		static int F21;
		static int F22;
		static int F23;
		static int F24;
		static int NUMPAD_MULT;
		static int NUMPAD_ADD;
		static int NUMPAD_ENTER;
		static int NUMPAD_SUB;
		static int NUMPAD_DOT;
		static int NUMPAD_DIV;
		static int MOUSE_LEFT;
		static int MOUSE_RIGHT;
		static int MOUSE_MIDDLE;
		static int MOUSE_BACK;
		static int MOUSE_FORWARD;
		static int MOUSE_WHEEL_UP;
		static int MOUSE_WHEEL_DOWN;
		static int LOC_LEFT;
		static int LOC_RIGHT;
		static int LSHIFT;
		static int RSHIFT;
		static int LCTRL;
		static int RCTRL;
		static int LALT;
		static int RALT;
		static bool initDone;
		static ::Array< int > keyPressed;
		static bool ALLOW_KEY_REPEAT;
		static bool isDown(int code);
		static ::Dynamic isDown_dyn();

		static int getFrame();
		static ::Dynamic getFrame_dyn();

		static bool isPressed(int code);
		static ::Dynamic isPressed_dyn();

		static bool isReleased(int code);
		static ::Dynamic isReleased_dyn();

		static void initialize();
		static ::Dynamic initialize_dyn();

		static void dispose();
		static ::Dynamic dispose_dyn();

		static void onEvent( ::hxd::Event e);
		static ::Dynamic onEvent_dyn();

		static ::String getKeyName(int keyCode);
		static ::Dynamic getKeyName_dyn();

};

} // end namespace hxd

#endif /* INCLUDED_hxd_Key */ 
