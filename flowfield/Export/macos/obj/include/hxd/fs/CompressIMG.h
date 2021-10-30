#ifndef INCLUDED_hxd_fs_CompressIMG
#define INCLUDED_hxd_fs_CompressIMG

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_fs_Convert
#include <hxd/fs/Convert.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(hxd,fs,CompressIMG)
HX_DECLARE_CLASS2(hxd,fs,Convert)

namespace hxd{
namespace fs{


class HXCPP_CLASS_ATTRIBUTES CompressIMG_obj : public  ::hxd::fs::Convert_obj
{
	public:
		typedef  ::hxd::fs::Convert_obj super;
		typedef CompressIMG_obj OBJ_;
		CompressIMG_obj();

	public:
		enum { _hx_ClassId = 0x022c73b8 };

		void __construct( ::Dynamic sourceExts,::String destExt);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fs.CompressIMG")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fs.CompressIMG"); }
		static ::hx::ObjectPtr< CompressIMG_obj > __new( ::Dynamic sourceExts,::String destExt);
		static ::hx::ObjectPtr< CompressIMG_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic sourceExts,::String destExt);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CompressIMG_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CompressIMG",61,e9,45,5b); }

		static void __boot();
		static  ::haxe::ds::StringMap TEXCONV_FMT;
		static int _;
		void convert();

};

} // end namespace hxd
} // end namespace fs

#endif /* INCLUDED_hxd_fs_CompressIMG */ 
