#ifndef INCLUDED_h3d_anim_Animation
#define INCLUDED_h3d_anim_Animation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
HX_DECLARE_CLASS2(h3d,anim,AnimatedObject)
HX_DECLARE_CLASS2(h3d,anim,Animation)
HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace anim{


class HXCPP_CLASS_ATTRIBUTES Animation_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Animation_obj OBJ_;
		Animation_obj();

	public:
		enum { _hx_ClassId = 0x042ba3ea };

		void __construct(::String name,int frameCount,Float sampling);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.anim.Animation")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.anim.Animation"); }
		static ::hx::ObjectPtr< Animation_obj > __new(::String name,int frameCount,Float sampling);
		static ::hx::ObjectPtr< Animation_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,int frameCount,Float sampling);
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
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Animation",e4,ce,07,ed); }

		static void __boot();
		static Float EPSILON;
		::String name;
		::String resourcePath;
		int frameCount;
		Float sampling;
		Float frame;
		Float speed;
		 ::Dynamic onAnimEnd;
		Dynamic onAnimEnd_dyn() { return onAnimEnd;}
		 ::Dynamic onEvent;
		Dynamic onEvent_dyn() { return onEvent;}
		bool pause;
		bool loop;
		::Array< ::Dynamic> events;
		bool isInstance;
		::Array< ::Dynamic> objects;
		bool isSync;
		int lastEvent;
		Float getDuration();
		::Dynamic getDuration_dyn();

		Float frameToTime(int f);
		::Dynamic frameToTime_dyn();

		int getIFrame();
		::Dynamic getIFrame_dyn();

		void unbind(::String objectName);
		::Dynamic unbind_dyn();

		void setEvents( ::Dynamic el);
		::Dynamic setEvents_dyn();

		void addEvent(int frame,::String data);
		::Dynamic addEvent_dyn();

		::Array< ::Dynamic> getEvents();
		::Dynamic getEvents_dyn();

		::Array< ::Dynamic> getObjects();
		::Dynamic getObjects_dyn();

		 ::Dynamic getEventTime(::String id);
		::Dynamic getEventTime_dyn();

		void setFrame(Float f);
		::Dynamic setFrame_dyn();

		virtual  ::h3d::anim::Animation clone( ::h3d::anim::Animation a);
		::Dynamic clone_dyn();

		virtual void initInstance();
		::Dynamic initInstance_dyn();

		 ::h3d::anim::Animation createInstance( ::h3d::scene::Object base);
		::Dynamic createInstance_dyn();

		void bind( ::h3d::scene::Object base);
		::Dynamic bind_dyn();

		virtual  ::Dynamic getPropValue(::String objectName,::String propName);
		::Dynamic getPropValue_dyn();

		virtual void sync(::hx::Null< bool >  decompose);
		::Dynamic sync_dyn();

		bool isPlaying();
		::Dynamic isPlaying_dyn();

		virtual int endFrame();
		::Dynamic endFrame_dyn();

		Float update(Float dt);
		::Dynamic update_dyn();

		void initAndBind( ::h3d::scene::Object obj);
		::Dynamic initAndBind_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace h3d
} // end namespace anim

#endif /* INCLUDED_h3d_anim_Animation */ 
