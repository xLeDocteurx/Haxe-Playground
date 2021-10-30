#ifndef INCLUDED_hxd_snd_Effect
#define INCLUDED_hxd_snd_Effect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,snd,Effect)
HX_DECLARE_CLASS2(hxd,snd,EffectDriver)

namespace hxd{
namespace snd{


class HXCPP_CLASS_ATTRIBUTES Effect_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Effect_obj OBJ_;
		Effect_obj();

	public:
		enum { _hx_ClassId = 0x36ce6606 };

		void __construct(::String type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.snd.Effect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.snd.Effect"); }
		static ::hx::ObjectPtr< Effect_obj > __new(::String type);
		static ::hx::ObjectPtr< Effect_obj > __alloc(::hx::Ctx *_hx_ctx,::String type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Effect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Effect",b1,ce,37,95); }

		 ::hxd::snd::Effect next;
		int refs;
		Float retainTime;
		Float lastStamp;
		 ::hxd::snd::EffectDriver driver;
		int priority;
		Float applyAudibleVolumeModifier(Float v);
		::Dynamic applyAudibleVolumeModifier_dyn();

		Float getVolumeModifier();
		::Dynamic getVolumeModifier_dyn();

};

} // end namespace hxd
} // end namespace snd

#endif /* INCLUDED_hxd_snd_Effect */ 
