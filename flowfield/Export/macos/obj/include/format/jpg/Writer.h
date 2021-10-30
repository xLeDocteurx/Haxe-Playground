#ifndef INCLUDED_format_jpg_Writer
#define INCLUDED_format_jpg_Writer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,jpg,Writer)
HX_DECLARE_CLASS3(format,jpg,_Writer,BitString)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Output)

namespace format{
namespace jpg{


class HXCPP_CLASS_ATTRIBUTES Writer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Writer_obj OBJ_;
		Writer_obj();

	public:
		enum { _hx_ClassId = 0x5cb1ec5d };

		void __construct( ::haxe::io::Output out);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="format.jpg.Writer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"format.jpg.Writer"); }
		static ::hx::ObjectPtr< Writer_obj > __new( ::haxe::io::Output out);
		static ::hx::ObjectPtr< Writer_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Output out);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Writer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Writer",d3,4a,7a,b2); }

		::Array< int > ZigZag;
		void initZigZag();
		::Dynamic initZigZag_dyn();

		::Array< int > YTable;
		::Array< int > UVTable;
		::Array< Float > fdtbl_Y;
		::Array< Float > fdtbl_UV;
		void initQuantTables(int sf);
		::Dynamic initQuantTables_dyn();

		::Array< int > std_dc_luminance_nrcodes;
		 ::haxe::io::Bytes std_dc_luminance_values;
		::Array< int > std_ac_luminance_nrcodes;
		 ::haxe::io::Bytes std_ac_luminance_values;
		void initLuminance();
		::Dynamic initLuminance_dyn();

		 ::haxe::io::Bytes strIntsToBytes(::String s);
		::Dynamic strIntsToBytes_dyn();

		::Array< int > std_dc_chrominance_nrcodes;
		 ::haxe::io::Bytes std_dc_chrominance_values;
		::Array< int > std_ac_chrominance_nrcodes;
		 ::haxe::io::Bytes std_ac_chrominance_values;
		void initChrominance();
		::Dynamic initChrominance_dyn();

		 ::haxe::ds::IntMap YDC_HT;
		 ::haxe::ds::IntMap UVDC_HT;
		 ::haxe::ds::IntMap YAC_HT;
		 ::haxe::ds::IntMap UVAC_HT;
		void initHuffmanTbl();
		::Dynamic initHuffmanTbl_dyn();

		 ::haxe::ds::IntMap computeHuffmanTbl(::Array< int > nrcodes, ::haxe::io::Bytes std_table);
		::Dynamic computeHuffmanTbl_dyn();

		 ::haxe::ds::IntMap bitcode;
		 ::haxe::ds::IntMap category;
		void initCategoryNumber();
		::Dynamic initCategoryNumber_dyn();

		 ::haxe::io::Output byteout;
		int bytenew;
		int bytepos;
		void writeBits( ::format::jpg::_Writer::BitString bs);
		::Dynamic writeBits_dyn();

		void writeWord(int val);
		::Dynamic writeWord_dyn();

		::Array< Float > fDCTQuant(::Array< Float > data,::Array< Float > fdtbl);
		::Dynamic fDCTQuant_dyn();

		void b(int v);
		::Dynamic b_dyn();

		void writeAPP0();
		::Dynamic writeAPP0_dyn();

		void writeDQT();
		::Dynamic writeDQT_dyn();

		void writeSOF0(int width,int height);
		::Dynamic writeSOF0_dyn();

		void writeDHT();
		::Dynamic writeDHT_dyn();

		void writeSOS();
		::Dynamic writeSOS_dyn();

		::Array< Float > DU;
		Float processDU(::Array< Float > CDU,::Array< Float > fdtbl,Float DC, ::haxe::ds::IntMap HTDC, ::haxe::ds::IntMap HTAC);
		::Dynamic processDU_dyn();

		::Array< Float > YDU;
		::Array< Float > UDU;
		::Array< Float > VDU;
		void RGB2YUV( ::haxe::io::Bytes img,int width,int xpos,int ypos);
		::Dynamic RGB2YUV_dyn();

		void write( ::Dynamic image);
		::Dynamic write_dyn();

};

} // end namespace format
} // end namespace jpg

#endif /* INCLUDED_format_jpg_Writer */ 
