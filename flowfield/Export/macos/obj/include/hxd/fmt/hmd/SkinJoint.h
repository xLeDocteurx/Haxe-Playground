#ifndef INCLUDED_hxd_fmt_hmd_SkinJoint
#define INCLUDED_hxd_fmt_hmd_SkinJoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_f3850d6010f556a7_142_new)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Position)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Property)
HX_DECLARE_CLASS3(hxd,fmt,hmd,SkinJoint)

namespace hxd{
namespace fmt{
namespace hmd{


class HXCPP_CLASS_ATTRIBUTES SkinJoint_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SkinJoint_obj OBJ_;
		SkinJoint_obj();

	public:
		enum { _hx_ClassId = 0x137feeeb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fmt.hmd.SkinJoint")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fmt.hmd.SkinJoint"); }

		inline static ::hx::ObjectPtr< SkinJoint_obj > __new() {
			::hx::ObjectPtr< SkinJoint_obj > __this = new SkinJoint_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SkinJoint_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SkinJoint_obj *__this = (SkinJoint_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SkinJoint_obj), true, "hxd.fmt.hmd.SkinJoint"));
			*(void **)__this = SkinJoint_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_f3850d6010f556a7_142_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SkinJoint_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SkinJoint",6d,cd,3f,3b); }

		::String name;
		::Array< ::Dynamic> props;
		int parent;
		 ::hxd::fmt::hmd::Position position;
		int bind;
		 ::hxd::fmt::hmd::Position transpos;
};

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd

#endif /* INCLUDED_hxd_fmt_hmd_SkinJoint */ 
