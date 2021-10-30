#ifndef INCLUDED_hxd_snd_Buffer
#define INCLUDED_hxd_snd_Buffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,res,Resource)
HX_DECLARE_CLASS2(hxd,res,Sound)
HX_DECLARE_CLASS2(hxd,snd,Buffer)
HX_DECLARE_CLASS2(hxd,snd,Driver)
HX_DECLARE_CLASS3(hxd,snd,openal,BufferHandle)

namespace hxd{
namespace snd{


class HXCPP_CLASS_ATTRIBUTES Buffer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Buffer_obj OBJ_;
		Buffer_obj();

	public:
		enum { _hx_ClassId = 0x7d6740cd };

		void __construct(::Dynamic driver);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.snd.Buffer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.snd.Buffer"); }
		static ::hx::ObjectPtr< Buffer_obj > __new(::Dynamic driver);
		static ::hx::ObjectPtr< Buffer_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic driver);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Buffer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Buffer",20,31,29,05); }

		 ::hxd::snd::openal::BufferHandle handle;
		 ::hxd::res::Sound sound;
		bool isEnd;
		bool isStream;
		int refs;
		Float lastStop;
		int start;
		int end;
		int samples;
		int sampleRate;
		void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace hxd
} // end namespace snd

#endif /* INCLUDED_hxd_snd_Buffer */ 
