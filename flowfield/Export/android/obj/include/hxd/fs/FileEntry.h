#ifndef INCLUDED_hxd_fs_FileEntry
#define INCLUDED_hxd_fs_FileEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(hxd,BitmapData)
HX_DECLARE_CLASS2(hxd,fs,FileEntry)
HX_DECLARE_CLASS2(hxd,impl,ArrayIterator_hxd_fs_FileEntry)

namespace hxd{
namespace fs{


class HXCPP_CLASS_ATTRIBUTES FileEntry_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FileEntry_obj OBJ_;
		FileEntry_obj();

	public:
		enum { _hx_ClassId = 0x09333075 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fs.FileEntry")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fs.FileEntry"); }

		inline static ::hx::ObjectPtr< FileEntry_obj > __new() {
			::hx::ObjectPtr< FileEntry_obj > __this = new FileEntry_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FileEntry_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FileEntry_obj *__this = (FileEntry_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FileEntry_obj), true, "hxd.fs.FileEntry"));
			*(void **)__this = FileEntry_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FileEntry_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FileEntry",36,f8,80,14); }

		::String name;
		virtual int getSign();
		::Dynamic getSign_dyn();

		virtual  ::haxe::io::Bytes getBytes();
		::Dynamic getBytes_dyn();

		::String getText();
		::Dynamic getText_dyn();

		virtual void open();
		::Dynamic open_dyn();

		virtual void skip(int nbytes);
		::Dynamic skip_dyn();

		virtual int readByte();
		::Dynamic readByte_dyn();

		virtual void read( ::haxe::io::Bytes out,int pos,int size);
		::Dynamic read_dyn();

		virtual void close();
		::Dynamic close_dyn();

		virtual void load( ::Dynamic onReady);
		::Dynamic load_dyn();

		virtual void loadBitmap( ::Dynamic onLoaded);
		::Dynamic loadBitmap_dyn();

		virtual void watch( ::Dynamic onChanged);
		::Dynamic watch_dyn();

		virtual bool exists(::String name);
		::Dynamic exists_dyn();

		virtual  ::hxd::fs::FileEntry get(::String name);
		::Dynamic get_dyn();

		virtual  ::hxd::impl::ArrayIterator_hxd_fs_FileEntry iterator();
		::Dynamic iterator_dyn();

		bool get_isAvailable();
		::Dynamic get_isAvailable_dyn();

		virtual bool get_isDirectory();
		::Dynamic get_isDirectory_dyn();

		virtual int get_size();
		::Dynamic get_size_dyn();

		virtual ::String get_path();
		::Dynamic get_path_dyn();

		::String get_directory();
		::Dynamic get_directory_dyn();

		::String get_extension();
		::Dynamic get_extension_dyn();

};

} // end namespace hxd
} // end namespace fs

#endif /* INCLUDED_hxd_fs_FileEntry */ 
