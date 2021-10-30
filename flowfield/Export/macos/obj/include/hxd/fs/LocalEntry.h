#ifndef INCLUDED_hxd_fs_LocalEntry
#define INCLUDED_hxd_fs_LocalEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_fs_FileEntry
#include <hxd/fs/FileEntry.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS1(hxd,BitmapData)
HX_DECLARE_CLASS2(hxd,fs,FileEntry)
HX_DECLARE_CLASS2(hxd,fs,FileSystem)
HX_DECLARE_CLASS2(hxd,fs,LocalEntry)
HX_DECLARE_CLASS2(hxd,fs,LocalFileSystem)
HX_DECLARE_CLASS2(hxd,impl,ArrayIterator_hxd_fs_FileEntry)
HX_DECLARE_CLASS2(sys,io,FileInput)

namespace hxd{
namespace fs{


class HXCPP_CLASS_ATTRIBUTES LocalEntry_obj : public  ::hxd::fs::FileEntry_obj
{
	public:
		typedef  ::hxd::fs::FileEntry_obj super;
		typedef LocalEntry_obj OBJ_;
		LocalEntry_obj();

	public:
		enum { _hx_ClassId = 0x74ff2b24 };

		void __construct( ::hxd::fs::LocalFileSystem fs,::String name,::String relPath,::String file);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fs.LocalEntry")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fs.LocalEntry"); }
		static ::hx::ObjectPtr< LocalEntry_obj > __new( ::hxd::fs::LocalFileSystem fs,::String name,::String relPath,::String file);
		static ::hx::ObjectPtr< LocalEntry_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxd::fs::LocalFileSystem fs,::String name,::String relPath,::String file);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LocalEntry_obj();

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
		::String __ToString() const { return HX_("LocalEntry",27,1f,2b,9f); }

		static void __boot();
		static int WATCH_INDEX;
		static ::Array< ::Dynamic> WATCH_LIST;
		static ::String tmpDir;
		static void checkFiles();
		static ::Dynamic checkFiles_dyn();

		static void checkNext();
		static ::Dynamic checkNext_dyn();

		 ::hxd::fs::LocalFileSystem fs;
		::String relPath;
		::String file;
		::String originalFile;
		 ::sys::io::FileInput fread;
		int getSign();

		 ::haxe::io::Bytes getBytes();

		void open();

		void skip(int nbytes);

		int readByte();

		void read( ::haxe::io::Bytes out,int pos,int size);

		void close();

		 ::Dynamic isDirCached;
		bool get_isDirectory();

		void load( ::Dynamic onReady);

		void loadBitmap( ::Dynamic onLoaded);

		::String get_path();

		bool exists(::String name);

		 ::hxd::fs::FileEntry get(::String name);

		int get_size();

		 ::hxd::impl::ArrayIterator_hxd_fs_FileEntry iterator();

		 ::Dynamic watchCallback;
		Dynamic watchCallback_dyn() { return watchCallback;}
		Float watchTime;
		Float getModifTime();
		::Dynamic getModifTime_dyn();

		void watch( ::Dynamic onChanged);

};

} // end namespace hxd
} // end namespace fs

#endif /* INCLUDED_hxd_fs_LocalEntry */ 
