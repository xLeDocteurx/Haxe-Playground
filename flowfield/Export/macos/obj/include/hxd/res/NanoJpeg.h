#ifndef INCLUDED_hxd_res_NanoJpeg
#define INCLUDED_hxd_res_NanoJpeg

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(hxd,res,Filter)
HX_DECLARE_CLASS2(hxd,res,NanoJpeg)
HX_DECLARE_CLASS3(hxd,res,_NanoJpeg,Component)

namespace hxd{
namespace res{


class HXCPP_CLASS_ATTRIBUTES NanoJpeg_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NanoJpeg_obj OBJ_;
		NanoJpeg_obj();

	public:
		enum { _hx_ClassId = 0x6273bf68 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.res.NanoJpeg")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.res.NanoJpeg"); }
		static ::hx::ObjectPtr< NanoJpeg_obj > __new();
		static ::hx::ObjectPtr< NanoJpeg_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NanoJpeg_obj();

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
		::String __ToString() const { return HX_("NanoJpeg",1c,f8,fb,44); }

		static void __boot();
		static int BLOCKSIZE;
		static int W1;
		static int W2;
		static int W3;
		static int W5;
		static int W6;
		static int W7;
		static int CF4A;
		static int CF4B;
		static int CF4C;
		static int CF4D;
		static int CF3A;
		static int CF3B;
		static int CF3C;
		static int CF3X;
		static int CF3Y;
		static int CF3Z;
		static int CF2A;
		static int CF2B;
		static int CF(int x);
		static ::Dynamic CF_dyn();

		static int njClip(int x);
		static ::Dynamic njClip_dyn();

		static  ::hxd::res::NanoJpeg inst;
		static  ::Dynamic decode( ::haxe::io::Bytes bytes, ::hxd::res::Filter filter,::hx::Null< int >  position,::hx::Null< int >  size);
		static ::Dynamic decode_dyn();

		 ::haxe::io::Bytes bytes;
		int pos;
		int size;
		int length;
		int width;
		int height;
		int ncomp;
		::Array< ::Dynamic> comps;
		::Array< int > counts;
		::Array< ::Dynamic> qtab;
		int qtused;
		int qtavail;
		::Array< ::Dynamic> vlctab;
		::Array< int > block;
		::Array< int > njZZ;
		bool progressive;
		int mbsizex;
		int mbsizey;
		int mbwidth;
		int mbheight;
		int rstinterval;
		int buf;
		int bufbits;
		 ::haxe::io::Bytes pixels;
		 ::hxd::res::Filter filter;
		 ::haxe::io::Bytes alloc(int nbytes);
		::Dynamic alloc_dyn();

		void free( ::haxe::io::Bytes bytes);
		::Dynamic free_dyn();

		void njInit( ::haxe::io::Bytes bytes,int pos,int size, ::hxd::res::Filter filter);
		::Dynamic njInit_dyn();

		void cleanup();
		::Dynamic cleanup_dyn();

		void njSkip(int count);
		::Dynamic njSkip_dyn();

		void syntax(bool flag);
		::Dynamic syntax_dyn();

		int get(int p);
		::Dynamic get_dyn();

		int njDecode16(int p);
		::Dynamic njDecode16_dyn();

		void njByteAlign();
		::Dynamic njByteAlign_dyn();

		int njShowBits(int bits);
		::Dynamic njShowBits_dyn();

		void njSkipBits(int bits);
		::Dynamic njSkipBits_dyn();

		int njGetBits(int bits);
		::Dynamic njGetBits_dyn();

		void njDecodeLength();
		::Dynamic njDecodeLength_dyn();

		void njSkipMarker();
		::Dynamic njSkipMarker_dyn();

		void njDecodeSOF();
		::Dynamic njDecodeSOF_dyn();

		void njDecodeDQT();
		::Dynamic njDecodeDQT_dyn();

		void njDecodeDHT();
		::Dynamic njDecodeDHT_dyn();

		void njDecodeDRI();
		::Dynamic njDecodeDRI_dyn();

		int vlcCode;
		int njGetVLC( ::haxe::io::Bytes vlc);
		::Dynamic njGetVLC_dyn();

		void njRowIDCT(int bp);
		::Dynamic njRowIDCT_dyn();

		void njColIDCT(int bp, ::haxe::io::Bytes out,int po,int stride);
		::Dynamic njColIDCT_dyn();

		void njDecodeBlock( ::hxd::res::_NanoJpeg::Component c,int po);
		::Dynamic njDecodeBlock_dyn();

		void notSupported();
		::Dynamic notSupported_dyn();

		void njDecodeScan();
		::Dynamic njDecodeScan_dyn();

		void njUpsampleH( ::hxd::res::_NanoJpeg::Component c);
		::Dynamic njUpsampleH_dyn();

		void njUpsampleV( ::hxd::res::_NanoJpeg::Component c);
		::Dynamic njUpsampleV_dyn();

		void njUpsample( ::hxd::res::_NanoJpeg::Component c);
		::Dynamic njUpsample_dyn();

		 ::haxe::io::Bytes njConvert();
		::Dynamic njConvert_dyn();

		 ::Dynamic njDecode();
		::Dynamic njDecode_dyn();

};

} // end namespace hxd
} // end namespace res

#endif /* INCLUDED_hxd_res_NanoJpeg */ 
