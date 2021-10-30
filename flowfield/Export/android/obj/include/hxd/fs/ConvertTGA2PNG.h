#ifndef INCLUDED_hxd_fs_ConvertTGA2PNG
#define INCLUDED_hxd_fs_ConvertTGA2PNG

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_fs_Convert
#include <hxd/fs/Convert.h>
#endif
HX_DECLARE_CLASS2(hxd,fs,Convert)
HX_DECLARE_CLASS2(hxd,fs,ConvertTGA2PNG)

namespace hxd{
namespace fs{


class HXCPP_CLASS_ATTRIBUTES ConvertTGA2PNG_obj : public  ::hxd::fs::Convert_obj
{
	public:
		typedef  ::hxd::fs::Convert_obj super;
		typedef ConvertTGA2PNG_obj OBJ_;
		ConvertTGA2PNG_obj();

	public:
		enum { _hx_ClassId = 0x19ccfbf3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fs.ConvertTGA2PNG")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fs.ConvertTGA2PNG"); }
		static ::hx::ObjectPtr< ConvertTGA2PNG_obj > __new();
		static ::hx::ObjectPtr< ConvertTGA2PNG_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ConvertTGA2PNG_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ConvertTGA2PNG",92,78,0e,27); }

		static void __boot();
		static int _;
		void convert();

};

} // end namespace hxd
} // end namespace fs

#endif /* INCLUDED_hxd_fs_ConvertTGA2PNG */ 
