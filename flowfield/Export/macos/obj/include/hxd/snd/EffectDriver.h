#ifndef INCLUDED_hxd_snd_EffectDriver
#define INCLUDED_hxd_snd_EffectDriver

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,snd,EffectDriver)
HX_DECLARE_CLASS3(hxd,snd,openal,SourceHandle)

namespace hxd{
namespace snd{


class HXCPP_CLASS_ATTRIBUTES EffectDriver_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EffectDriver_obj OBJ_;
		EffectDriver_obj();

	public:
		enum { _hx_ClassId = 0x6ca6af32 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.snd.EffectDriver")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.snd.EffectDriver"); }
		static ::hx::ObjectPtr< EffectDriver_obj > __new();
		static ::hx::ObjectPtr< EffectDriver_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EffectDriver_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EffectDriver",b9,5d,11,f8); }

		void acquire();
		::Dynamic acquire_dyn();

		void release();
		::Dynamic release_dyn();

		void update( ::Dynamic e);
		::Dynamic update_dyn();

		void bind( ::Dynamic e, ::hxd::snd::openal::SourceHandle source);
		::Dynamic bind_dyn();

		void apply( ::Dynamic e, ::hxd::snd::openal::SourceHandle source);
		::Dynamic apply_dyn();

		void unbind( ::Dynamic e, ::hxd::snd::openal::SourceHandle source);
		::Dynamic unbind_dyn();

};

} // end namespace hxd
} // end namespace snd

#endif /* INCLUDED_hxd_snd_EffectDriver */ 
