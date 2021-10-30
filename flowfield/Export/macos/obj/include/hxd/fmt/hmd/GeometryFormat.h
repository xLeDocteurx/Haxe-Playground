#ifndef INCLUDED_hxd_fmt_hmd_GeometryFormat
#define INCLUDED_hxd_fmt_hmd_GeometryFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_fbb9c19686c72d8c_97_new)
HX_DECLARE_CLASS3(hxd,fmt,hmd,GeometryFormat)

namespace hxd{
namespace fmt{
namespace hmd{


class HXCPP_CLASS_ATTRIBUTES GeometryFormat_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GeometryFormat_obj OBJ_;
		GeometryFormat_obj();

	public:
		enum { _hx_ClassId = 0x11c0594f };

		void __construct(::String name,int format);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fmt.hmd.GeometryFormat")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fmt.hmd.GeometryFormat"); }

		inline static ::hx::ObjectPtr< GeometryFormat_obj > __new(::String name,int format) {
			::hx::ObjectPtr< GeometryFormat_obj > __this = new GeometryFormat_obj();
			__this->__construct(name,format);
			return __this;
		}

		inline static ::hx::ObjectPtr< GeometryFormat_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,int format) {
			GeometryFormat_obj *__this = (GeometryFormat_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GeometryFormat_obj), true, "hxd.fmt.hmd.GeometryFormat"));
			*(void **)__this = GeometryFormat_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_fbb9c19686c72d8c_97_new)
HXLINE(  98)		( ( ::hxd::fmt::hmd::GeometryFormat)(__this) )->name = name;
HXLINE(  99)		( ( ::hxd::fmt::hmd::GeometryFormat)(__this) )->format = format;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GeometryFormat_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GeometryFormat",a9,ab,bb,a8); }

		::String name;
		int format;
};

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd

#endif /* INCLUDED_hxd_fmt_hmd_GeometryFormat */ 
