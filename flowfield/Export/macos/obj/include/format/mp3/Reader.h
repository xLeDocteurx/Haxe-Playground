#ifndef INCLUDED_format_mp3_Reader
#define INCLUDED_format_mp3_Reader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,mp3,FrameType)
HX_DECLARE_CLASS2(format,mp3,Reader)
HX_DECLARE_CLASS2(format,tools,BitsInput)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Input)

namespace format{
namespace mp3{


class HXCPP_CLASS_ATTRIBUTES Reader_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Reader_obj OBJ_;
		Reader_obj();

	public:
		enum { _hx_ClassId = 0x3384b598 };

		void __construct( ::haxe::io::Input i);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="format.mp3.Reader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"format.mp3.Reader"); }
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
		 ::format::tools::BitsInput bits;
		int version;
		int samples;
		int sampleSize;
		bool any_read;
		 ::haxe::io::Bytes id3v2_data;
		int id3v2_version;
		int id3v2_flags;
		void skipID3v2();
		::Dynamic skipID3v2_dyn();

		 ::format::mp3::FrameType seekFrame();
		::Dynamic seekFrame_dyn();

		::Array< ::Dynamic> readFrames();
		::Dynamic readFrames_dyn();

		 ::Dynamic readFrameHeader();
		::Dynamic readFrameHeader_dyn();

		 ::Dynamic readFrame();
		::Dynamic readFrame_dyn();

		 ::Dynamic read();
		::Dynamic read_dyn();

};

} // end namespace format
} // end namespace mp3

#endif /* INCLUDED_format_mp3_Reader */ 
