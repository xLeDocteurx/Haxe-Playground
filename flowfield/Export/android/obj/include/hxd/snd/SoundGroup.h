#ifndef INCLUDED_hxd_snd_SoundGroup
#define INCLUDED_hxd_snd_SoundGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_f87c74ff6fa5cd39_13_new)
HX_DECLARE_CLASS2(hxd,snd,SoundGroup)

namespace hxd{
namespace snd{


class HXCPP_CLASS_ATTRIBUTES SoundGroup_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SoundGroup_obj OBJ_;
		SoundGroup_obj();

	public:
		enum { _hx_ClassId = 0x082eb63d };

		void __construct(::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.snd.SoundGroup")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.snd.SoundGroup"); }

		inline static ::hx::ObjectPtr< SoundGroup_obj > __new(::String name) {
			::hx::ObjectPtr< SoundGroup_obj > __this = new SoundGroup_obj();
			__this->__construct(name);
			return __this;
		}

		inline static ::hx::ObjectPtr< SoundGroup_obj > __alloc(::hx::Ctx *_hx_ctx,::String name) {
			SoundGroup_obj *__this = (SoundGroup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SoundGroup_obj), true, "hxd.snd.SoundGroup"));
			*(void **)__this = SoundGroup_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_f87c74ff6fa5cd39_13_new)
HXLINE(  14)		( ( ::hxd::snd::SoundGroup)(__this) )->name = name;
HXLINE(  15)		( ( ::hxd::snd::SoundGroup)(__this) )->maxAudible = -1;
HXLINE(  16)		( ( ::hxd::snd::SoundGroup)(__this) )->volume = ( (Float)(1) );
HXLINE(  17)		( ( ::hxd::snd::SoundGroup)(__this) )->mono = false;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SoundGroup_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SoundGroup",10,cc,ea,f9); }

		::String name;
		Float volume;
		int maxAudible;
		bool mono;
		int numAudible;
		Float lastUpdate;
};

} // end namespace hxd
} // end namespace snd

#endif /* INCLUDED_hxd_snd_SoundGroup */ 
