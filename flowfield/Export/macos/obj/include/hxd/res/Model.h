#ifndef INCLUDED_hxd_res_Model
#define INCLUDED_hxd_res_Model

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_res_Resource
#include <hxd/res/Resource.h>
#endif
HX_DECLARE_CLASS3(hxd,fmt,hmd,Library)
HX_DECLARE_CLASS2(hxd,fs,FileEntry)
HX_DECLARE_CLASS2(hxd,res,Model)
HX_DECLARE_CLASS2(hxd,res,Resource)

namespace hxd{
namespace res{


class HXCPP_CLASS_ATTRIBUTES Model_obj : public  ::hxd::res::Resource_obj
{
	public:
		typedef  ::hxd::res::Resource_obj super;
		typedef Model_obj OBJ_;
		Model_obj();

	public:
		enum { _hx_ClassId = 0x10cc22f5 };

		void __construct( ::hxd::fs::FileEntry entry);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.res.Model")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.res.Model"); }
		static ::hx::ObjectPtr< Model_obj > __new( ::hxd::fs::FileEntry entry);
		static ::hx::ObjectPtr< Model_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxd::fs::FileEntry entry);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Model_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Model",89,93,85,9f); }

		 ::hxd::fmt::hmd::Library toHmd();
		::Dynamic toHmd_dyn();

};

} // end namespace hxd
} // end namespace res

#endif /* INCLUDED_hxd_res_Model */ 
