#ifndef INCLUDED_lime_system_JNIMemberField
#define INCLUDED_lime_system_JNIMemberField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,_hx_system,JNIMemberField)

namespace lime{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES JNIMemberField_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef JNIMemberField_obj OBJ_;
		JNIMemberField_obj();

	public:
		enum { _hx_ClassId = 0x4d81b83f };

		void __construct( ::Dynamic field);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.system.JNIMemberField")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.system.JNIMemberField"); }
		static ::hx::ObjectPtr< JNIMemberField_obj > __new( ::Dynamic field);
		static ::hx::ObjectPtr< JNIMemberField_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic field);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~JNIMemberField_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("JNIMemberField",fb,8c,1f,2d); }

		 ::Dynamic field;
		 ::Dynamic get( ::Dynamic jobject);
		::Dynamic get_dyn();

		 ::Dynamic set( ::Dynamic jobject, ::Dynamic value);
		::Dynamic set_dyn();

};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_JNIMemberField */ 