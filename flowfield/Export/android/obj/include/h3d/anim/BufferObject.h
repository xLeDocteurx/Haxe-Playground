#ifndef INCLUDED_h3d_anim_BufferObject
#define INCLUDED_h3d_anim_BufferObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_anim_AnimatedObject
#include <h3d/anim/AnimatedObject.h>
#endif
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS2(h3d,anim,AnimatedObject)
HX_DECLARE_CLASS2(h3d,anim,BufferObject)

namespace h3d{
namespace anim{


class HXCPP_CLASS_ATTRIBUTES BufferObject_obj : public  ::h3d::anim::AnimatedObject_obj
{
	public:
		typedef  ::h3d::anim::AnimatedObject_obj super;
		typedef BufferObject_obj OBJ_;
		BufferObject_obj();

	public:
		enum { _hx_ClassId = 0x1bc5ed65 };

		void __construct(::String objectName,int dataOffset);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.anim.BufferObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.anim.BufferObject"); }
		static ::hx::ObjectPtr< BufferObject_obj > __new(::String objectName,int dataOffset);
		static ::hx::ObjectPtr< BufferObject_obj > __alloc(::hx::Ctx *_hx_ctx,::String objectName,int dataOffset);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BufferObject_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BufferObject",ff,bb,26,e2); }

		int layout;
		int dataOffset;
		Float propCurrentValue;
		::String propName;
		 ::h3d::Matrix matrix;
		int getStride();
		::Dynamic getStride_dyn();

		 ::h3d::anim::AnimatedObject clone();

};

} // end namespace h3d
} // end namespace anim

#endif /* INCLUDED_h3d_anim_BufferObject */ 
