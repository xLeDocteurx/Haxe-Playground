#ifndef INCLUDED_sys_io_FileSeek
#define INCLUDED_sys_io_FileSeek

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sys,io,FileSeek)
namespace sys{
namespace io{


class FileSeek_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FileSeek_obj OBJ_;

	public:
		FileSeek_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("sys.io.FileSeek",db,3e,fe,78); }
		::String __ToString() const { return HX_("FileSeek.",7a,c3,1e,1e) + _hx_tag; }

		static ::sys::io::FileSeek SeekBegin;
		static inline ::sys::io::FileSeek SeekBegin_dyn() { return SeekBegin; }
		static ::sys::io::FileSeek SeekCur;
		static inline ::sys::io::FileSeek SeekCur_dyn() { return SeekCur; }
		static ::sys::io::FileSeek SeekEnd;
		static inline ::sys::io::FileSeek SeekEnd_dyn() { return SeekEnd; }
};

} // end namespace sys
} // end namespace io

#endif /* INCLUDED_sys_io_FileSeek */ 