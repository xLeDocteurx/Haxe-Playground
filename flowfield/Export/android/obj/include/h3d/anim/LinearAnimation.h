#ifndef INCLUDED_h3d_anim_LinearAnimation
#define INCLUDED_h3d_anim_LinearAnimation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_anim_Animation
#include <h3d/anim/Animation.h>
#endif
HX_DECLARE_CLASS2(h3d,anim,AnimatedObject)
HX_DECLARE_CLASS2(h3d,anim,Animation)
HX_DECLARE_CLASS2(h3d,anim,LinearAnimation)
HX_DECLARE_CLASS2(h3d,anim,LinearFrame)
HX_DECLARE_CLASS2(h3d,anim,LinearObject)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace anim{


class HXCPP_CLASS_ATTRIBUTES LinearAnimation_obj : public  ::h3d::anim::Animation_obj
{
	public:
		typedef  ::h3d::anim::Animation_obj super;
		typedef LinearAnimation_obj OBJ_;
		LinearAnimation_obj();

	public:
		enum { _hx_ClassId = 0x0ac4c435 };

		void __construct(::String name,int frame,Float sampling);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.anim.LinearAnimation")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.anim.LinearAnimation"); }
		static ::hx::ObjectPtr< LinearAnimation_obj > __new(::String name,int frame,Float sampling);
		static ::hx::ObjectPtr< LinearAnimation_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,int frame,Float sampling);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LinearAnimation_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LinearAnimation",3f,a0,7e,5f); }

		Float syncFrame;
		void addCurve(::String objName,::Array< ::Dynamic> frames,bool hasPos,bool hasRot,bool hasScale);
		::Dynamic addCurve_dyn();

		void addAlphaCurve(::String objName,::Array< Float > alphas);
		::Dynamic addAlphaCurve_dyn();

		void addUVCurve(::String objName,::Array< Float > uvs);
		::Dynamic addUVCurve_dyn();

		void addPropCurve(::String objName,::String propName,::Array< Float > values);
		::Dynamic addPropCurve_dyn();

		 ::Dynamic getPropValue(::String objName,::String propName);

		::Array< ::Dynamic> getFrames();
		::Dynamic getFrames_dyn();

		 ::h3d::anim::Animation clone( ::h3d::anim::Animation a);

		int endFrame();

		void initInstance();

		int sortByFrameCountDesc( ::h3d::anim::LinearObject o1, ::h3d::anim::LinearObject o2);
		::Dynamic sortByFrameCountDesc_dyn();

		Float uvLerp(Float v1,Float v2,Float k);
		::Dynamic uvLerp_dyn();

		void sync(::hx::Null< bool >  decompose);

};

} // end namespace h3d
} // end namespace anim

#endif /* INCLUDED_h3d_anim_LinearAnimation */ 
