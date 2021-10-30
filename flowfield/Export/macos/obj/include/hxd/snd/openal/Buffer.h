#ifndef INCLUDED_hxd_snd_openal_Buffer
#define INCLUDED_hxd_snd_openal_Buffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(hxd,snd,openal,Buffer)

namespace hxd{
namespace snd{
namespace openal{


class HXCPP_CLASS_ATTRIBUTES Buffer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Buffer_obj OBJ_;
		Buffer_obj();

	public:
		enum { _hx_ClassId = 0x14a7846a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.snd.openal.Buffer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.snd.openal.Buffer"); }
		static ::hx::ObjectPtr< Buffer_obj > __new();
		static ::hx::ObjectPtr< Buffer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Buffer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Buffer",20,31,29,05); }

		static void __boot();
		static int ID;
		static  ::haxe::ds::IntMap all;
		static  ::hxd::snd::openal::Buffer ofInt(int i);
		static ::Dynamic ofInt_dyn();

		int id;
		::Array< Float > data;
		int frequency;
		int samples;
		void dispose();
		::Dynamic dispose_dyn();

		::Array< Float > alloc(int size);
		::Dynamic alloc_dyn();

		int toInt();
		::Dynamic toInt_dyn();

};

} // end namespace hxd
} // end namespace snd
} // end namespace openal

#endif /* INCLUDED_hxd_snd_openal_Buffer */ 
