#ifndef INCLUDED_hxd_fs_ConvertFBX2HMD
#define INCLUDED_hxd_fs_ConvertFBX2HMD

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_fs_Convert
#include <hxd/fs/Convert.h>
#endif
HX_DECLARE_CLASS2(hxd,fs,Convert)
HX_DECLARE_CLASS2(hxd,fs,ConvertFBX2HMD)

namespace hxd{
namespace fs{


class HXCPP_CLASS_ATTRIBUTES ConvertFBX2HMD_obj : public  ::hxd::fs::Convert_obj
{
	public:
		typedef  ::hxd::fs::Convert_obj super;
		typedef ConvertFBX2HMD_obj OBJ_;
		ConvertFBX2HMD_obj();

	public:
		enum { _hx_ClassId = 0x1208f437 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fs.ConvertFBX2HMD")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fs.ConvertFBX2HMD"); }
		static ::hx::ObjectPtr< ConvertFBX2HMD_obj > __new();
		static ::hx::ObjectPtr< ConvertFBX2HMD_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ConvertFBX2HMD_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ConvertFBX2HMD",d6,70,4a,1f); }

		static void __boot();
		static int _;
		void convert();

};

} // end namespace hxd
} // end namespace fs

#endif /* INCLUDED_hxd_fs_ConvertFBX2HMD */ 
