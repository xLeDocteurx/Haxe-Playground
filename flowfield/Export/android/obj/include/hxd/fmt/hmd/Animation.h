#ifndef INCLUDED_hxd_fmt_hmd_Animation
#define INCLUDED_hxd_fmt_hmd_Animation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_b79802d9ff193469_221_new)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Animation)
HX_DECLARE_CLASS3(hxd,fmt,hmd,AnimationEvent)
HX_DECLARE_CLASS3(hxd,fmt,hmd,AnimationObject)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Property)

namespace hxd{
namespace fmt{
namespace hmd{


class HXCPP_CLASS_ATTRIBUTES Animation_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Animation_obj OBJ_;
		Animation_obj();

	public:
		enum { _hx_ClassId = 0x1b3bcb2a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fmt.hmd.Animation")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fmt.hmd.Animation"); }

		inline static ::hx::ObjectPtr< Animation_obj > __new() {
			::hx::ObjectPtr< Animation_obj > __this = new Animation_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Animation_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Animation_obj *__this = (Animation_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Animation_obj), true, "hxd.fmt.hmd.Animation"));
			*(void **)__this = Animation_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_b79802d9ff193469_221_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Animation_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Animation",e4,ce,07,ed); }

		::String name;
		::Array< ::Dynamic> props;
		int frames;
		Float sampling;
		Float speed;
		bool loop;
		::Array< ::Dynamic> objects;
		::Array< ::Dynamic> events;
		int dataPosition;
};

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd

#endif /* INCLUDED_hxd_fmt_hmd_Animation */ 
