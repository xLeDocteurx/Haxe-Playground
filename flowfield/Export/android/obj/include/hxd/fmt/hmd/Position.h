#ifndef INCLUDED_hxd_fmt_hmd_Position
#define INCLUDED_hxd_fmt_hmd_Position

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS1(h3d,Quat)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Position)

namespace hxd{
namespace fmt{
namespace hmd{


class HXCPP_CLASS_ATTRIBUTES Position_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Position_obj OBJ_;
		Position_obj();

	public:
		enum { _hx_ClassId = 0x3ae1750b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.fmt.hmd.Position")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.fmt.hmd.Position"); }
		static ::hx::ObjectPtr< Position_obj > __new();
		static ::hx::ObjectPtr< Position_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Position_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Position",c9,5c,ac,a4); }

		static void __boot();
		static  ::h3d::Quat QTMP;
		Float x;
		Float y;
		Float z;
		Float qx;
		Float qy;
		Float qz;
		Float sx;
		Float sy;
		Float sz;
		void loadQuaternion( ::h3d::Quat q);
		::Dynamic loadQuaternion_dyn();

		Float get_qw();
		::Dynamic get_qw_dyn();

		 ::h3d::Matrix toMatrix(::hx::Null< bool >  postScale);
		::Dynamic toMatrix_dyn();

};

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd

#endif /* INCLUDED_hxd_fmt_hmd_Position */ 
