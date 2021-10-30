#ifndef INCLUDED_h3d_anim_AnimatedObject
#define INCLUDED_h3d_anim_AnimatedObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_ab56984047475848_13_new)
HX_DECLARE_CLASS2(h3d,anim,AnimatedObject)
HX_DECLARE_CLASS2(h3d,scene,Mesh)
HX_DECLARE_CLASS2(h3d,scene,MultiMaterial)
HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS2(h3d,scene,Skin)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace anim{


class HXCPP_CLASS_ATTRIBUTES AnimatedObject_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AnimatedObject_obj OBJ_;
		AnimatedObject_obj();

	public:
		enum { _hx_ClassId = 0x0c82ecc8 };

		void __construct(::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.anim.AnimatedObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.anim.AnimatedObject"); }

		inline static ::hx::ObjectPtr< AnimatedObject_obj > __new(::String name) {
			::hx::ObjectPtr< AnimatedObject_obj > __this = new AnimatedObject_obj();
			__this->__construct(name);
			return __this;
		}

		inline static ::hx::ObjectPtr< AnimatedObject_obj > __alloc(::hx::Ctx *_hx_ctx,::String name) {
			AnimatedObject_obj *__this = (AnimatedObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnimatedObject_obj), true, "h3d.anim.AnimatedObject"));
			*(void **)__this = AnimatedObject_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_ab56984047475848_13_new)
HXDLIN(  13)		( ( ::h3d::anim::AnimatedObject)(__this) )->objectName = name;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnimatedObject_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimatedObject",e2,15,a8,c7); }

		::String objectName;
		 ::h3d::scene::Object targetObject;
		 ::h3d::scene::Skin targetSkin;
		int targetJoint;
		virtual  ::h3d::anim::AnimatedObject clone();
		::Dynamic clone_dyn();

};

} // end namespace h3d
} // end namespace anim

#endif /* INCLUDED_h3d_anim_AnimatedObject */ 
