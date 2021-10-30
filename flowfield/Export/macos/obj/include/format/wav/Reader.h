#ifndef INCLUDED_format_wav_Reader
#define INCLUDED_format_wav_Reader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,wav,Reader)
HX_DECLARE_CLASS2(haxe,io,Input)

namespace format{
namespace wav{


class HXCPP_CLASS_ATTRIBUTES Reader_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Reader_obj OBJ_;
		Reader_obj();

	public:
		enum { _hx_ClassId = 0x7e714e38 };

		void __construct( ::haxe::io::Input i);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="format.wav.Reader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"format.wav.Reader"); }
		static ::hx::ObjectPtr< Reader_obj > __new( ::haxe::io::Input i);
		static ::hx::ObjectPtr< Reader_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input i);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Reader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Reader",63,19,26,31); }

		 ::haxe::io::Input i;
		int version;
		int readInt();
		::Dynamic readInt_dyn();

		 ::Dynamic read();
		::Dynamic read_dyn();

};

} // end namespace format
} // end namespace wav

#endif /* INCLUDED_format_wav_Reader */ 
