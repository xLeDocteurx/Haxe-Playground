#ifndef INCLUDED_hxd_snd_openal_Context
#define INCLUDED_hxd_snd_openal_Context

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(hxd,snd,openal,Context)
HX_DECLARE_CLASS3(hxd,snd,openal,Device)

namespace hxd{
namespace snd{
namespace openal{


class HXCPP_CLASS_ATTRIBUTES Context_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Context_obj OBJ_;
		Context_obj();

	public:
		enum { _hx_ClassId = 0x65d34b45 };

		void __construct( ::hxd::snd::openal::Device d);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.snd.openal.Context")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.snd.openal.Context"); }
		static ::hx::ObjectPtr< Context_obj > __new( ::hxd::snd::openal::Device d);
		static ::hx::ObjectPtr< Context_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxd::snd::openal::Device d);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Context_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Context",cf,bd,c8,e6); }

		 ::hxd::snd::openal::Device device;
};

} // end namespace hxd
} // end namespace snd
} // end namespace openal

#endif /* INCLUDED_hxd_snd_openal_Context */ 
