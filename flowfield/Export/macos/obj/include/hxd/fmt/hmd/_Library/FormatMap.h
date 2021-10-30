#ifndef INCLUDED_hxd_fmt_hmd__Library_FormatMap
#define INCLUDED_hxd_fmt_hmd__Library_FormatMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS4(hxd,fmt,hmd,_Library,FormatMap)

namespace hxd{
namespace fmt{
namespace hmd{
namespace _Library{


class HXCPP_CLASS_ATTRIBUTES FormatMap_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FormatMap_obj OBJ_;
		FormatMap_obj();

	public:
		enum { _hx_ClassId = 0x07359f4b };

		void __construct(int size,int offset, ::h3d::Vector def, ::hxd::fmt::hmd::_Library::FormatMap next);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fmt.hmd._Library.FormatMap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fmt.hmd._Library.FormatMap"); }
		static ::hx::ObjectPtr< FormatMap_obj > __new(int size,int offset, ::h3d::Vector def, ::hxd::fmt::hmd::_Library::FormatMap next);
		static ::hx::ObjectPtr< FormatMap_obj > __alloc(::hx::Ctx *_hx_ctx,int size,int offset, ::h3d::Vector def, ::hxd::fmt::hmd::_Library::FormatMap next);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FormatMap_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FormatMap",85,2f,1d,bb); }

		int size;
		int offset;
		 ::h3d::Vector def;
		 ::hxd::fmt::hmd::_Library::FormatMap next;
};

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd
} // end namespace _Library

#endif /* INCLUDED_hxd_fmt_hmd__Library_FormatMap */ 
