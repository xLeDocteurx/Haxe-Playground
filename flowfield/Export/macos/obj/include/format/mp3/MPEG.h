#ifndef INCLUDED_format_mp3_MPEG
#define INCLUDED_format_mp3_MPEG

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,mp3,Bitrate)
HX_DECLARE_CLASS2(format,mp3,Layer)
HX_DECLARE_CLASS2(format,mp3,MPEG)
HX_DECLARE_CLASS2(format,mp3,MPEGVersion)
HX_DECLARE_CLASS2(format,mp3,SamplingRate)

namespace format{
namespace mp3{


class HXCPP_CLASS_ATTRIBUTES MPEG_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MPEG_obj OBJ_;
		MPEG_obj();

	public:
		enum { _hx_ClassId = 0x7f98b10e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="format.mp3.MPEG")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"format.mp3.MPEG"); }

		inline static ::hx::ObjectPtr< MPEG_obj > __new() {
			::hx::ObjectPtr< MPEG_obj > __this = new MPEG_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< MPEG_obj > __alloc(::hx::Ctx *_hx_ctx) {
			MPEG_obj *__this = (MPEG_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MPEG_obj), false, "format.mp3.MPEG"));
			*(void **)__this = MPEG_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MPEG_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MPEG",85,5e,22,33); }

		static void __boot();
		static int V1;
		static int V2;
		static int V25;
		static int Reserved;
		static int enum2Num( ::format::mp3::MPEGVersion m);
		static ::Dynamic enum2Num_dyn();

		static  ::format::mp3::MPEGVersion num2Enum(int m);
		static ::Dynamic num2Enum_dyn();

		static ::Array< ::Dynamic> V1_Bitrates;
		static ::Array< ::Dynamic> V2_Bitrates;
		static ::Array< ::Dynamic> SamplingRates;
		static  ::format::mp3::SamplingRate srNum2Enum(int sr);
		static ::Dynamic srNum2Enum_dyn();

		static int srEnum2Num( ::format::mp3::SamplingRate sr);
		static ::Dynamic srEnum2Num_dyn();

		static int getBitrateIdx( ::format::mp3::Bitrate br, ::format::mp3::MPEGVersion mpeg, ::format::mp3::Layer layer);
		static ::Dynamic getBitrateIdx_dyn();

		static int getSamplingRateIdx( ::format::mp3::SamplingRate sr, ::format::mp3::MPEGVersion mpeg);
		static ::Dynamic getSamplingRateIdx_dyn();

		static int bitrateEnum2Num( ::format::mp3::Bitrate br);
		static ::Dynamic bitrateEnum2Num_dyn();

		static  ::format::mp3::Bitrate bitrateNum2Enum(int br);
		static ::Dynamic bitrateNum2Enum_dyn();

};

} // end namespace format
} // end namespace mp3

#endif /* INCLUDED_format_mp3_MPEG */ 
