#ifndef INCLUDED_format_mp3_Tools
#define INCLUDED_format_mp3_Tools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,mp3,Bitrate)
HX_DECLARE_CLASS2(format,mp3,SamplingRate)
HX_DECLARE_CLASS2(format,mp3,Tools)

namespace format{
namespace mp3{


class HXCPP_CLASS_ATTRIBUTES Tools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Tools_obj OBJ_;
		Tools_obj();

	public:
		enum { _hx_ClassId = 0x45caa366 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="format.mp3.Tools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"format.mp3.Tools"); }

		inline static ::hx::ObjectPtr< Tools_obj > __new() {
			::hx::ObjectPtr< Tools_obj > __this = new Tools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Tools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Tools_obj *__this = (Tools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tools_obj), false, "format.mp3.Tools"));
			*(void **)__this = Tools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tools",fb,01,5c,a7); }

		static  ::format::mp3::Bitrate getBitrate(int mpegVersion,int layerIdx,int bitrateIdx);
		static ::Dynamic getBitrate_dyn();

		static  ::format::mp3::SamplingRate getSamplingRate(int mpegVersion,int samplingRateIdx);
		static ::Dynamic getSamplingRate_dyn();

		static bool isInvalidFrameHeader( ::Dynamic hdr);
		static ::Dynamic isInvalidFrameHeader_dyn();

		static int getSampleDataSize(int mpegVersion,int bitrate,int samplingRate,bool isPadded,bool hasCrc);
		static ::Dynamic getSampleDataSize_dyn();

		static int getSampleDataSizeHdr( ::Dynamic hdr);
		static ::Dynamic getSampleDataSizeHdr_dyn();

		static int getSampleCount(int mpegVersion);
		static ::Dynamic getSampleCount_dyn();

		static int getSampleCountHdr( ::Dynamic hdr);
		static ::Dynamic getSampleCountHdr_dyn();

		static ::String getFrameInfo( ::Dynamic fr);
		static ::Dynamic getFrameInfo_dyn();

};

} // end namespace format
} // end namespace mp3

#endif /* INCLUDED_format_mp3_Tools */ 
