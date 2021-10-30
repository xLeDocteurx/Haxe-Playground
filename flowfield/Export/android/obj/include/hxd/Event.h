#ifndef INCLUDED_hxd_Event
#define INCLUDED_hxd_Event

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxd,Event)
HX_DECLARE_CLASS1(hxd,EventKind)

namespace hxd{


class HXCPP_CLASS_ATTRIBUTES Event_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Event_obj OBJ_;
		Event_obj();

	public:
		enum { _hx_ClassId = 0x1463af26 };

		void __construct( ::hxd::EventKind k,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.Event")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.Event"); }
		static ::hx::ObjectPtr< Event_obj > __new( ::hxd::EventKind k,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		static ::hx::ObjectPtr< Event_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxd::EventKind k,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Event_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Event",fa,37,f2,08); }

		 ::hxd::EventKind kind;
		Float relX;
		Float relY;
		Float relZ;
		bool propagate;
		bool cancel;
		int button;
		int touchId;
		int keyCode;
		int charCode;
		Float wheelDelta;
		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace hxd

#endif /* INCLUDED_hxd_Event */ 
