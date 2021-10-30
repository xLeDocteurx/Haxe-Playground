#ifndef INCLUDED_hxd_snd_openal_BufferHandle
#define INCLUDED_hxd_snd_openal_BufferHandle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_d01190deaa64f6f9_16_new)
HX_DECLARE_CLASS3(hxd,snd,openal,Buffer)
HX_DECLARE_CLASS3(hxd,snd,openal,BufferHandle)

namespace hxd{
namespace snd{
namespace openal{


class HXCPP_CLASS_ATTRIBUTES BufferHandle_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BufferHandle_obj OBJ_;
		BufferHandle_obj();

	public:
		enum { _hx_ClassId = 0x53afc87a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.snd.openal.BufferHandle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.snd.openal.BufferHandle"); }

		inline static ::hx::ObjectPtr< BufferHandle_obj > __new() {
			::hx::ObjectPtr< BufferHandle_obj > __this = new BufferHandle_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< BufferHandle_obj > __alloc(::hx::Ctx *_hx_ctx) {
			BufferHandle_obj *__this = (BufferHandle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BufferHandle_obj), true, "hxd.snd.openal.BufferHandle"));
			*(void **)__this = BufferHandle_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_d01190deaa64f6f9_16_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BufferHandle_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BufferHandle",e8,c0,e4,84); }

		 ::hxd::snd::openal::Buffer inst;
		bool isEnd;
};

} // end namespace hxd
} // end namespace snd
} // end namespace openal

#endif /* INCLUDED_hxd_snd_openal_BufferHandle */ 
