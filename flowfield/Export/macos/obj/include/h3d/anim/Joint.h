#ifndef INCLUDED_h3d_anim_Joint
#define INCLUDED_h3d_anim_Joint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_519565266e5acf5e_23_new)
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS2(h3d,anim,Joint)
HX_DECLARE_CLASS2(h3d,col,Bounds)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace anim{


class HXCPP_CLASS_ATTRIBUTES Joint_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Joint_obj OBJ_;
		Joint_obj();

	public:
		enum { _hx_ClassId = 0x03ed5da0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.anim.Joint")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.anim.Joint"); }

		inline static ::hx::ObjectPtr< Joint_obj > __new() {
			::hx::ObjectPtr< Joint_obj > __this = new Joint_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Joint_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Joint_obj *__this = (Joint_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Joint_obj), true, "h3d.anim.Joint"));
			*(void **)__this = Joint_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_519565266e5acf5e_23_new)
HXLINE(  24)		( ( ::h3d::anim::Joint)(__this) )->bindIndex = -1;
HXLINE(  25)		( ( ::h3d::anim::Joint)(__this) )->splitIndex = -1;
HXLINE(  26)		( ( ::h3d::anim::Joint)(__this) )->subs = ::Array_obj< ::Dynamic>::__new(0);
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Joint_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Joint",2a,a9,55,e5); }

		int index;
		::String name;
		int bindIndex;
		int splitIndex;
		 ::h3d::Matrix defMat;
		 ::h3d::Matrix transPos;
		 ::h3d::anim::Joint parent;
		::Array< ::Dynamic> subs;
		 ::h3d::col::Bounds offsets;
		Float offsetRay;
		bool retargetAnim;
};

} // end namespace h3d
} // end namespace anim

#endif /* INCLUDED_h3d_anim_Joint */ 
