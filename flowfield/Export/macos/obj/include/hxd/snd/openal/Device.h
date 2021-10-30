#ifndef INCLUDED_hxd_snd_openal_Device
#define INCLUDED_hxd_snd_openal_Device

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_b7f343ca600beefe_725_new)
HX_DECLARE_CLASS3(hxd,snd,openal,Device)

namespace hxd{
namespace snd{
namespace openal{


class HXCPP_CLASS_ATTRIBUTES Device_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Device_obj OBJ_;
		Device_obj();

	public:
		enum { _hx_ClassId = 0x0b7e7ec8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.snd.openal.Device")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.snd.openal.Device"); }

		inline static ::hx::ObjectPtr< Device_obj > __new() {
			::hx::ObjectPtr< Device_obj > __this = new Device_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Device_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Device_obj *__this = (Device_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Device_obj), false, "hxd.snd.openal.Device"));
			*(void **)__this = Device_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_b7f343ca600beefe_725_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Device_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Device",b6,50,0c,a6); }

};

} // end namespace hxd
} // end namespace snd
} // end namespace openal

#endif /* INCLUDED_hxd_snd_openal_Device */ 
