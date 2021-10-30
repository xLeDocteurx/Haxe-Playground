#ifndef INCLUDED_hxd_snd_Mp3Data
#define INCLUDED_hxd_snd_Mp3Data

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_snd_Data
#include <hxd/snd/Data.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(hxd,snd,Data)
HX_DECLARE_CLASS2(hxd,snd,Mp3Data)

namespace hxd{
namespace snd{


class HXCPP_CLASS_ATTRIBUTES Mp3Data_obj : public  ::hxd::snd::Data_obj
{
	public:
		typedef  ::hxd::snd::Data_obj super;
		typedef Mp3Data_obj OBJ_;
		Mp3Data_obj();

	public:
		enum { _hx_ClassId = 0x7f716c5d };

		void __construct( ::haxe::io::Bytes bytes);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.snd.Mp3Data")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.snd.Mp3Data"); }
		static ::hx::ObjectPtr< Mp3Data_obj > __new( ::haxe::io::Bytes bytes);
		static ::hx::ObjectPtr< Mp3Data_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Bytes bytes);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Mp3Data_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Mp3Data",9a,39,99,d4); }

		void decodeBuffer( ::haxe::io::Bytes out,int outPos,int sampleStart,int sampleCount);

};

} // end namespace hxd
} // end namespace snd

#endif /* INCLUDED_hxd_snd_Mp3Data */ 
