#ifndef INCLUDED_hxd_snd_openal_SourceHandle
#define INCLUDED_hxd_snd_openal_SourceHandle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(hxd,snd,Effect)
HX_DECLARE_CLASS3(hxd,snd,openal,Source)
HX_DECLARE_CLASS3(hxd,snd,openal,SourceHandle)

namespace hxd{
namespace snd{
namespace openal{


class HXCPP_CLASS_ATTRIBUTES SourceHandle_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SourceHandle_obj OBJ_;
		SourceHandle_obj();

	public:
		enum { _hx_ClassId = 0x7bd58231 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.snd.openal.SourceHandle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.snd.openal.SourceHandle"); }
		static ::hx::ObjectPtr< SourceHandle_obj > __new();
		static ::hx::ObjectPtr< SourceHandle_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SourceHandle_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SourceHandle",03,8b,16,76); }

		 ::hxd::snd::openal::Source inst;
		int sampleOffset;
		bool playing;
		int nextAuxiliarySend;
		::Array< int > freeAuxiliarySends;
		 ::haxe::ds::ObjectMap effectToAuxiliarySend;
		int acquireAuxiliarySend( ::hxd::snd::Effect effect);
		::Dynamic acquireAuxiliarySend_dyn();

		int getAuxiliarySend( ::hxd::snd::Effect effect);
		::Dynamic getAuxiliarySend_dyn();

		int releaseAuxiliarySend( ::hxd::snd::Effect effect);
		::Dynamic releaseAuxiliarySend_dyn();

};

} // end namespace hxd
} // end namespace snd
} // end namespace openal

#endif /* INCLUDED_hxd_snd_openal_SourceHandle */ 
