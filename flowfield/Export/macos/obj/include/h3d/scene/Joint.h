#ifndef INCLUDED_h3d_scene_Joint
#define INCLUDED_h3d_scene_Joint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_scene_Object
#include <h3d/scene/Object.h>
#endif
HX_DECLARE_CLASS2(h3d,anim,Joint)
HX_DECLARE_CLASS2(h3d,scene,Joint)
HX_DECLARE_CLASS2(h3d,scene,Mesh)
HX_DECLARE_CLASS2(h3d,scene,MultiMaterial)
HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS2(h3d,scene,Skin)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES Joint_obj : public  ::h3d::scene::Object_obj
{
	public:
		typedef  ::h3d::scene::Object_obj super;
		typedef Joint_obj OBJ_;
		Joint_obj();

	public:
		enum { _hx_ClassId = 0x3f569797 };

		void __construct( ::h3d::scene::Skin skin, ::h3d::anim::Joint j);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.scene.Joint")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.scene.Joint"); }
		static ::hx::ObjectPtr< Joint_obj > __new( ::h3d::scene::Skin skin, ::h3d::anim::Joint j);
		static ::hx::ObjectPtr< Joint_obj > __alloc(::hx::Ctx *_hx_ctx, ::h3d::scene::Skin skin, ::h3d::anim::Joint j);
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

		 ::h3d::scene::Skin skin;
		int index;
		 ::h3d::scene::Object getObjectByName(::String name);

		void syncPos();

};

} // end namespace h3d
} // end namespace scene

#endif /* INCLUDED_h3d_scene_Joint */ 
