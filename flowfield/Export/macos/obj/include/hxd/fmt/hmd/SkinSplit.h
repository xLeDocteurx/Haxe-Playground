#ifndef INCLUDED_hxd_fmt_hmd_SkinSplit
#define INCLUDED_hxd_fmt_hmd_SkinSplit

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_b47d39a925e15d6b_149_new)
HX_DECLARE_CLASS3(hxd,fmt,hmd,SkinSplit)

namespace hxd{
namespace fmt{
namespace hmd{


class HXCPP_CLASS_ATTRIBUTES SkinSplit_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SkinSplit_obj OBJ_;
		SkinSplit_obj();

	public:
		enum { _hx_ClassId = 0x17ccb317 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fmt.hmd.SkinSplit")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fmt.hmd.SkinSplit"); }

		inline static ::hx::ObjectPtr< SkinSplit_obj > __new() {
			::hx::ObjectPtr< SkinSplit_obj > __this = new SkinSplit_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SkinSplit_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SkinSplit_obj *__this = (SkinSplit_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SkinSplit_obj), true, "hxd.fmt.hmd.SkinSplit"));
			*(void **)__this = SkinSplit_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_b47d39a925e15d6b_149_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SkinSplit_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SkinSplit",fd,7e,86,6a); }

		int materialIndex;
		::Array< int > joints;
};

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd

#endif /* INCLUDED_hxd_fmt_hmd_SkinSplit */ 
