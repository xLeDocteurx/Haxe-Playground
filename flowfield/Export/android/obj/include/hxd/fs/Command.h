#ifndef INCLUDED_hxd_fs_Command
#define INCLUDED_hxd_fs_Command

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_fs_Convert
#include <hxd/fs/Convert.h>
#endif
HX_DECLARE_CLASS2(hxd,fs,Command)
HX_DECLARE_CLASS2(hxd,fs,Convert)

namespace hxd{
namespace fs{


class HXCPP_CLASS_ATTRIBUTES Command_obj : public  ::hxd::fs::Convert_obj
{
	public:
		typedef  ::hxd::fs::Convert_obj super;
		typedef Command_obj OBJ_;
		Command_obj();

	public:
		enum { _hx_ClassId = 0x1f05f3aa };

		void __construct( ::Dynamic fr,::String to,::String cmd,::Array< ::String > args);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fs.Command")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fs.Command"); }
		static ::hx::ObjectPtr< Command_obj > __new( ::Dynamic fr,::String to,::String cmd,::Array< ::String > args);
		static ::hx::ObjectPtr< Command_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic fr,::String to,::String cmd,::Array< ::String > args);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Command_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Command",2b,99,be,4e); }

		::String cmd;
		::Array< ::String > args;
		void convert();

};

} // end namespace hxd
} // end namespace fs

#endif /* INCLUDED_hxd_fs_Command */ 
