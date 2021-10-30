#ifndef INCLUDED_h3d_scene_Skin
#define INCLUDED_h3d_scene_Skin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_scene_MultiMaterial
#include <h3d/scene/MultiMaterial.h>
#endif
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS2(h3d,anim,Skin)
HX_DECLARE_CLASS2(h3d,col,Bounds)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS2(h3d,mat,BaseMaterial)
HX_DECLARE_CLASS2(h3d,mat,Material)
HX_DECLARE_CLASS2(h3d,scene,Graphics)
HX_DECLARE_CLASS2(h3d,scene,Mesh)
HX_DECLARE_CLASS2(h3d,scene,MultiMaterial)
HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS2(h3d,scene,RenderContext)
HX_DECLARE_CLASS2(h3d,scene,Skin)
HX_DECLARE_CLASS2(h3d,shader,SkinBase)
HX_DECLARE_CLASS2(hxd,impl,AnyProps)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)
HX_DECLARE_CLASS1(hxsl,Shader)

namespace h3d{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES Skin_obj : public  ::h3d::scene::MultiMaterial_obj
{
	public:
		typedef  ::h3d::scene::MultiMaterial_obj super;
		typedef Skin_obj OBJ_;
		Skin_obj();

	public:
		enum { _hx_ClassId = 0x70fbc0d0 };

		void __construct( ::h3d::anim::Skin s,::Array< ::Dynamic> mat, ::h3d::scene::Object parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.scene.Skin")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.scene.Skin"); }
		static ::hx::ObjectPtr< Skin_obj > __new( ::h3d::anim::Skin s,::Array< ::Dynamic> mat, ::h3d::scene::Object parent);
		static ::hx::ObjectPtr< Skin_obj > __alloc(::hx::Ctx *_hx_ctx, ::h3d::anim::Skin s,::Array< ::Dynamic> mat, ::h3d::scene::Object parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Skin_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Skin",9d,42,2e,37); }

		static void __boot();
		static  ::h3d::Matrix TMP_MAT;
		 ::h3d::anim::Skin skinData;
		::Array< ::Dynamic> currentRelPose;
		::Array< ::Dynamic> currentAbsPose;
		::Array< ::Dynamic> currentPalette;
		::Array< ::Dynamic> splitPalette;
		bool jointsUpdated;
		 ::h3d::Matrix jointsAbsPosInv;
		bool paletteChanged;
		 ::h3d::shader::SkinBase skinShader;
		 ::h3d::scene::Graphics jointsGraphics;
		bool showJoints;
		 ::h3d::scene::Object clone( ::h3d::scene::Object o);

		 ::h3d::col::Bounds getBoundsRec( ::h3d::col::Bounds b);

		 ::h3d::col::Bounds getCurrentSkeletonBounds();
		::Dynamic getCurrentSkeletonBounds_dyn();

		 ::h3d::scene::Object getObjectByName(::String name);

		::Dynamic getLocalCollider();

		::Dynamic getGlobalCollider();

		void calcAbsPos();

		 ::h3d::anim::Skin getSkinData();
		::Dynamic getSkinData_dyn();

		void setSkinData( ::h3d::anim::Skin s,::hx::Null< bool >  shaderInit);
		::Dynamic setSkinData_dyn();

		void sync( ::h3d::scene::RenderContext ctx);

		void syncJoints();
		::Dynamic syncJoints_dyn();

		void emit( ::h3d::scene::RenderContext ctx);

		void draw( ::h3d::scene::RenderContext ctx);

};

} // end namespace h3d
} // end namespace scene

#endif /* INCLUDED_h3d_scene_Skin */ 
