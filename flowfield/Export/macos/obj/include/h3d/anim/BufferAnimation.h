#ifndef INCLUDED_h3d_anim_BufferAnimation
#define INCLUDED_h3d_anim_BufferAnimation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_anim_Animation
#include <h3d/anim/Animation.h>
#endif
HX_DECLARE_CLASS2(h3d,anim,AnimatedObject)
HX_DECLARE_CLASS2(h3d,anim,Animation)
HX_DECLARE_CLASS2(h3d,anim,BufferAnimation)
HX_DECLARE_CLASS2(h3d,anim,BufferObject)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace anim{


class HXCPP_CLASS_ATTRIBUTES BufferAnimation_obj : public  ::h3d::anim::Animation_obj
{
	public:
		typedef  ::h3d::anim::Animation_obj super;
		typedef BufferAnimation_obj OBJ_;
		BufferAnimation_obj();

	public:
		enum { _hx_ClassId = 0x70459dba };

		void __construct(::String name,int frame,Float sampling);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.anim.BufferAnimation")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.anim.BufferAnimation"); }
		static ::hx::ObjectPtr< BufferAnimation_obj > __new(::String name,int frame,Float sampling);
		static ::hx::ObjectPtr< BufferAnimation_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,int frame,Float sampling);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BufferAnimation_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BufferAnimation",c4,79,ff,c4); }

		Float syncFrame;
		::Array< Float > data;
		int stride;
		void setData(::Array< Float > data,int stride);
		::Dynamic setData_dyn();

		 ::h3d::anim::BufferObject addObject(::String objName,int offset);
		::Dynamic addObject_dyn();

		 ::Dynamic getPropValue(::String objName,::String propName);

		::Array< ::Dynamic> getFrames();
		::Dynamic getFrames_dyn();

		 ::h3d::anim::Animation clone( ::h3d::anim::Animation a);

		int endFrame();

		void initInstance();

		int sortByFrameCountDesc( ::h3d::anim::BufferObject o1, ::h3d::anim::BufferObject o2);
		::Dynamic sortByFrameCountDesc_dyn();

		Float uvLerp(Float v1,Float v2,Float k);
		::Dynamic uvLerp_dyn();

		void sync(::hx::Null< bool >  decompose);

};

} // end namespace h3d
} // end namespace anim

#endif /* INCLUDED_h3d_anim_BufferAnimation */ 
