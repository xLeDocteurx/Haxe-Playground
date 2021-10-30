#ifndef INCLUDED_hxd_fmt_hmd_Skin
#define INCLUDED_hxd_fmt_hmd_Skin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_d1693ea01e926e67_158_new)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Property)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Skin)
HX_DECLARE_CLASS3(hxd,fmt,hmd,SkinJoint)
HX_DECLARE_CLASS3(hxd,fmt,hmd,SkinSplit)

namespace hxd{
namespace fmt{
namespace hmd{


class HXCPP_CLASS_ATTRIBUTES Skin_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Skin_obj OBJ_;
		Skin_obj();

	public:
		enum { _hx_ClassId = 0x130884c3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fmt.hmd.Skin")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fmt.hmd.Skin"); }

		inline static ::hx::ObjectPtr< Skin_obj > __new() {
			::hx::ObjectPtr< Skin_obj > __this = new Skin_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Skin_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Skin_obj *__this = (Skin_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Skin_obj), true, "hxd.fmt.hmd.Skin"));
			*(void **)__this = Skin_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_d1693ea01e926e67_158_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Skin_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Skin",9d,42,2e,37); }

		::String name;
		::Array< ::Dynamic> props;
		::Array< ::Dynamic> joints;
		::Array< ::Dynamic> split;
};

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd

#endif /* INCLUDED_hxd_fmt_hmd_Skin */ 
