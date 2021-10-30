#ifndef INCLUDED_h3d_scene_Light
#define INCLUDED_h3d_scene_Light

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_scene_Object
#include <h3d/scene/Object.h>
#endif
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS2(h3d,scene,Light)
HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS2(h3d,scene,RenderContext)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)
HX_DECLARE_CLASS1(hxsl,Shader)

namespace h3d{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES Light_obj : public  ::h3d::scene::Object_obj
{
	public:
		typedef  ::h3d::scene::Object_obj super;
		typedef Light_obj OBJ_;
		Light_obj();

	public:
		enum { _hx_ClassId = 0x622aef23 };

		void __construct( ::hxsl::Shader shader, ::h3d::scene::Object parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.scene.Light")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.scene.Light"); }
		static ::hx::ObjectPtr< Light_obj > __new( ::hxsl::Shader shader, ::h3d::scene::Object parent);
		static ::hx::ObjectPtr< Light_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxsl::Shader shader, ::h3d::scene::Object parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Light_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Light",b6,00,2a,08); }

		 ::hxsl::Shader shader;
		Float objectDistance;
		 ::h3d::scene::Light next;
		Float cullingDistance;
		int priority;
		 ::h3d::Vector get_color();
		::Dynamic get_color_dyn();

		 ::h3d::Vector set_color( ::h3d::Vector v);
		::Dynamic set_color_dyn();

		bool get_enableSpecular();
		::Dynamic get_enableSpecular_dyn();

		bool set_enableSpecular(bool b);
		::Dynamic set_enableSpecular_dyn();

		void emit( ::h3d::scene::RenderContext ctx);

		 ::h3d::Vector getShadowDirection();
		::Dynamic getShadowDirection_dyn();

};

} // end namespace h3d
} // end namespace scene

#endif /* INCLUDED_h3d_scene_Light */ 
