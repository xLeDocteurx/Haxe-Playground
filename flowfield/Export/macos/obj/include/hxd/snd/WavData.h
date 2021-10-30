#ifndef INCLUDED_hxd_snd_WavData
#define INCLUDED_hxd_snd_WavData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_snd_Data
#include <hxd/snd/Data.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(hxd,snd,Data)
HX_DECLARE_CLASS2(hxd,snd,WavData)

namespace hxd{
namespace snd{


class HXCPP_CLASS_ATTRIBUTES WavData_obj : public  ::hxd::snd::Data_obj
{
	public:
		typedef  ::hxd::snd::Data_obj super;
		typedef WavData_obj OBJ_;
		WavData_obj();

	public:
		enum { _hx_ClassId = 0x7f9db469 };

		void __construct( ::haxe::io::Bytes bytes);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.snd.WavData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.snd.WavData"); }
		static ::hx::ObjectPtr< WavData_obj > __new( ::haxe::io::Bytes bytes);
		static ::hx::ObjectPtr< WavData_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Bytes bytes);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WavData_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WavData",56,51,ee,08); }

		 ::haxe::io::Bytes rawData;
		void init( ::Dynamic d);
		::Dynamic init_dyn();

		void decodeBuffer( ::haxe::io::Bytes out,int outPos,int sampleStart,int sampleCount);

};

} // end namespace hxd
} // end namespace snd

#endif /* INCLUDED_hxd_snd_WavData */ 
