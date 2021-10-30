#ifndef INCLUDED_h3d_anim_LinearObject
#define INCLUDED_h3d_anim_LinearObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_anim_AnimatedObject
#include <h3d/anim/AnimatedObject.h>
#endif
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS2(h3d,anim,AnimatedObject)
HX_DECLARE_CLASS2(h3d,anim,LinearFrame)
HX_DECLARE_CLASS2(h3d,anim,LinearObject)

namespace h3d{
namespace anim{


class HXCPP_CLASS_ATTRIBUTES LinearObject_obj : public  ::h3d::anim::AnimatedObject_obj
{
	public:
		typedef  ::h3d::anim::AnimatedObject_obj super;
		typedef LinearObject_obj OBJ_;
		LinearObject_obj();

	public:
		enum { _hx_ClassId = 0x7b93f0ee };

		void __construct(::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.anim.LinearObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.anim.LinearObject"); }
		static ::hx::ObjectPtr< LinearObject_obj > __new(::String name);
		static ::hx::ObjectPtr< LinearObject_obj > __alloc(::hx::Ctx *_hx_ctx,::String name);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LinearObject_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LinearObject",a4,8a,cc,b3); }

		bool hasPosition;
		bool hasRotation;
		bool hasScale;
		::Array< ::Dynamic> frames;
		::Array< Float > alphas;
		::Array< Float > uvs;
		::String propName;
		::Array< Float > propValues;
		 ::h3d::Matrix matrix;
		Float propCurrentValue;
		 ::h3d::anim::AnimatedObject clone();

};

} // end namespace h3d
} // end namespace anim

#endif /* INCLUDED_h3d_anim_LinearObject */ 
