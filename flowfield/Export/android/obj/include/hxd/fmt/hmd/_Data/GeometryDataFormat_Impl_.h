#ifndef INCLUDED_hxd_fmt_hmd__Data_GeometryDataFormat_Impl_
#define INCLUDED_hxd_fmt_hmd__Data_GeometryDataFormat_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(hxd,fmt,hmd,_Data,GeometryDataFormat_Impl_)

namespace hxd{
namespace fmt{
namespace hmd{
namespace _Data{


class HXCPP_CLASS_ATTRIBUTES GeometryDataFormat_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GeometryDataFormat_Impl__obj OBJ_;
		GeometryDataFormat_Impl__obj();

	public:
		enum { _hx_ClassId = 0x237e1f16 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.fmt.hmd._Data.GeometryDataFormat_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.fmt.hmd._Data.GeometryDataFormat_Impl_"); }

		inline static ::hx::ObjectPtr< GeometryDataFormat_Impl__obj > __new() {
			::hx::ObjectPtr< GeometryDataFormat_Impl__obj > __this = new GeometryDataFormat_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GeometryDataFormat_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			GeometryDataFormat_Impl__obj *__this = (GeometryDataFormat_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GeometryDataFormat_Impl__obj), false, "hxd.fmt.hmd._Data.GeometryDataFormat_Impl_"));
			*(void **)__this = GeometryDataFormat_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GeometryDataFormat_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GeometryDataFormat_Impl_",53,a7,f0,ff); }

		static void __boot();
		static int DFloat;
		static int DVec2;
		static int DVec3;
		static int DVec4;
		static int DBytes4;
		static int _new(int v);
		static ::Dynamic _new_dyn();

		static int getSize(int this1);
		static ::Dynamic getSize_dyn();

		static int toInt(int this1);
		static ::Dynamic toInt_dyn();

		static ::String toString(int this1);
		static ::Dynamic toString_dyn();

		static int fromInt(int v);
		static ::Dynamic fromInt_dyn();

};

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd
} // end namespace _Data

#endif /* INCLUDED_hxd_fmt_hmd__Data_GeometryDataFormat_Impl_ */ 
