#ifndef INCLUDED_hxd_snd_openal_EFX
#define INCLUDED_hxd_snd_openal_EFX

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(hxd,snd,openal,EFX)

namespace hxd{
namespace snd{
namespace openal{


class HXCPP_CLASS_ATTRIBUTES EFX_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EFX_obj OBJ_;
		EFX_obj();

	public:
		enum { _hx_ClassId = 0x0861b34d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.snd.openal.EFX")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.snd.openal.EFX"); }

		inline static ::hx::ObjectPtr< EFX_obj > __new() {
			::hx::ObjectPtr< EFX_obj > __this = new EFX_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EFX_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EFX_obj *__this = (EFX_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EFX_obj), false, "hxd.snd.openal.EFX"));
			*(void **)__this = EFX_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EFX_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EFX",d7,98,34,00); }

		static void __boot();
		static int EFX_MAJOR_VERSION;
		static int EFX_MINOR_VERSION;
		static int MAX_AUXILIARY_SENDS;
		static int METERS_PER_UNIT;
		static int DIRECT_FILTER;
		static int FILTER_NULL;
};

} // end namespace hxd
} // end namespace snd
} // end namespace openal

#endif /* INCLUDED_hxd_snd_openal_EFX */ 
