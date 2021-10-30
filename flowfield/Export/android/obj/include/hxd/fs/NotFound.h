#ifndef INCLUDED_hxd_fs_NotFound
#define INCLUDED_hxd_fs_NotFound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_45884c9f6ba2e5a4_6_new)
HX_DECLARE_CLASS2(hxd,fs,NotFound)

namespace hxd{
namespace fs{


class HXCPP_CLASS_ATTRIBUTES NotFound_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NotFound_obj OBJ_;
		NotFound_obj();

	public:
		enum { _hx_ClassId = 0x7fd895b4 };

		void __construct(::String path);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fs.NotFound")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fs.NotFound"); }

		inline static ::hx::ObjectPtr< NotFound_obj > __new(::String path) {
			::hx::ObjectPtr< NotFound_obj > __this = new NotFound_obj();
			__this->__construct(path);
			return __this;
		}

		inline static ::hx::ObjectPtr< NotFound_obj > __alloc(::hx::Ctx *_hx_ctx,::String path) {
			NotFound_obj *__this = (NotFound_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NotFound_obj), true, "hxd.fs.NotFound"));
			*(void **)__this = NotFound_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_45884c9f6ba2e5a4_6_new)
HXDLIN(   6)		( ( ::hxd::fs::NotFound)(__this) )->path = path;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NotFound_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NotFound",4f,90,57,6e); }

		::String path;
		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace hxd
} // end namespace fs

#endif /* INCLUDED_hxd_fs_NotFound */ 
