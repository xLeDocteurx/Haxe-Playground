#ifndef INCLUDED_hxd_res_Resource
#define INCLUDED_hxd_res_Resource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,fs,FileEntry)
HX_DECLARE_CLASS2(hxd,res,Resource)

namespace hxd{
namespace res{


class HXCPP_CLASS_ATTRIBUTES Resource_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Resource_obj OBJ_;
		Resource_obj();

	public:
		enum { _hx_ClassId = 0x09c9e03a };

		void __construct( ::hxd::fs::FileEntry entry);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.res.Resource")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.res.Resource"); }
		static ::hx::ObjectPtr< Resource_obj > __new( ::hxd::fs::FileEntry entry);
		static ::hx::ObjectPtr< Resource_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxd::fs::FileEntry entry);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Resource_obj();

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
		::String __ToString() const { return HX_("Resource",ee,18,52,ec); }

		static void __boot();
		static bool LIVE_UPDATE;
		 ::hxd::fs::FileEntry entry;
		::String get_name();
		::Dynamic get_name_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		void watch( ::Dynamic onChanged);
		::Dynamic watch_dyn();

};

} // end namespace hxd
} // end namespace res

#endif /* INCLUDED_hxd_res_Resource */ 
