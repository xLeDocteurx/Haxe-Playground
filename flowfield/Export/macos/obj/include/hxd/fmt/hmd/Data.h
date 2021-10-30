#ifndef INCLUDED_hxd_fmt_hmd_Data
#define INCLUDED_hxd_fmt_hmd_Data

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_7bf42449fc6413c4_238_new)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Animation)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Data)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Geometry)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Material)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Model)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Property)

namespace hxd{
namespace fmt{
namespace hmd{


class HXCPP_CLASS_ATTRIBUTES Data_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Data_obj OBJ_;
		Data_obj();

	public:
		enum { _hx_ClassId = 0x0916c470 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fmt.hmd.Data")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fmt.hmd.Data"); }

		inline static ::hx::ObjectPtr< Data_obj > __new() {
			::hx::ObjectPtr< Data_obj > __this = new Data_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Data_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Data_obj *__this = (Data_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Data_obj), true, "hxd.fmt.hmd.Data"));
			*(void **)__this = Data_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_7bf42449fc6413c4_238_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Data_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Data",4a,82,3c,2d); }

		static void __boot();
		static int CURRENT_VERSION;
		int version;
		::Array< ::Dynamic> props;
		::Array< ::Dynamic> geometries;
		::Array< ::Dynamic> materials;
		::Array< ::Dynamic> models;
		::Array< ::Dynamic> animations;
		int dataPosition;
		 ::haxe::io::Bytes data;
};

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd

#endif /* INCLUDED_hxd_fmt_hmd_Data */ 
