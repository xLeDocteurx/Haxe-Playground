#ifndef INCLUDED_hxd_fs_BytesFileEntry
#define INCLUDED_hxd_fs_BytesFileEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_fs_FileEntry
#include <hxd/fs/FileEntry.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(hxd,BitmapData)
HX_DECLARE_CLASS2(hxd,fs,BytesFileEntry)
HX_DECLARE_CLASS2(hxd,fs,FileEntry)
HX_DECLARE_CLASS2(hxd,impl,ArrayIterator_hxd_fs_FileEntry)

namespace hxd{
namespace fs{


class HXCPP_CLASS_ATTRIBUTES BytesFileEntry_obj : public  ::hxd::fs::FileEntry_obj
{
	public:
		typedef  ::hxd::fs::FileEntry_obj super;
		typedef BytesFileEntry_obj OBJ_;
		BytesFileEntry_obj();

	public:
		enum { _hx_ClassId = 0x33dc21ec };

		void __construct(::String path, ::haxe::io::Bytes bytes);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fs.BytesFileEntry")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fs.BytesFileEntry"); }
		static ::hx::ObjectPtr< BytesFileEntry_obj > __new(::String path, ::haxe::io::Bytes bytes);
		static ::hx::ObjectPtr< BytesFileEntry_obj > __alloc(::hx::Ctx *_hx_ctx,::String path, ::haxe::io::Bytes bytes);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BytesFileEntry_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BytesFileEntry",8b,9e,1d,41); }

		::String fullPath;
		 ::haxe::io::Bytes bytes;
		int pos;
		::String get_path();

		int getSign();

		 ::haxe::io::Bytes getBytes();

		void open();

		void skip(int nbytes);

		int readByte();

		void read( ::haxe::io::Bytes out,int pos,int size);

		void close();

		void load( ::Dynamic onReady);

		void loadBitmap( ::Dynamic onLoaded);

		bool exists(::String name);

		 ::hxd::fs::FileEntry get(::String name);

		 ::hxd::impl::ArrayIterator_hxd_fs_FileEntry iterator();

		int get_size();

};

} // end namespace hxd
} // end namespace fs

#endif /* INCLUDED_hxd_fs_BytesFileEntry */ 
