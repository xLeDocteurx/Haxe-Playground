#ifndef INCLUDED_hxd_fmt_hmd_AnimationEvent
#define INCLUDED_hxd_fmt_hmd_AnimationEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_aa5a68f3382e5cb0_207_new)
HX_DECLARE_CLASS3(hxd,fmt,hmd,AnimationEvent)

namespace hxd{
namespace fmt{
namespace hmd{


class HXCPP_CLASS_ATTRIBUTES AnimationEvent_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AnimationEvent_obj OBJ_;
		AnimationEvent_obj();

	public:
		enum { _hx_ClassId = 0x7ec43650 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fmt.hmd.AnimationEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fmt.hmd.AnimationEvent"); }

		inline static ::hx::ObjectPtr< AnimationEvent_obj > __new() {
			::hx::ObjectPtr< AnimationEvent_obj > __this = new AnimationEvent_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AnimationEvent_obj > __alloc(::hx::Ctx *_hx_ctx) {
			AnimationEvent_obj *__this = (AnimationEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnimationEvent_obj), true, "hxd.fmt.hmd.AnimationEvent"));
			*(void **)__this = AnimationEvent_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_aa5a68f3382e5cb0_207_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnimationEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimationEvent",96,ee,3d,30); }

		int frame;
		::String data;
};

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd

#endif /* INCLUDED_hxd_fmt_hmd_AnimationEvent */ 
