#ifndef INCLUDED_hxd_fmt_hmd_Library
#define INCLUDED_hxd_fmt_hmd_Library

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,anim,Animation)
HX_DECLARE_CLASS2(h3d,anim,BufferAnimation)
HX_DECLARE_CLASS2(h3d,anim,LinearAnimation)
HX_DECLARE_CLASS2(h3d,anim,Skin)
HX_DECLARE_CLASS2(h3d,mat,BaseMaterial)
HX_DECLARE_CLASS2(h3d,mat,Material)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS2(h3d,prim,HMDModel)
HX_DECLARE_CLASS2(h3d,prim,MeshPrimitive)
HX_DECLARE_CLASS2(h3d,prim,Primitive)
HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Animation)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Data)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Geometry)
HX_DECLARE_CLASS3(hxd,fmt,hmd,GeometryBuffer)
HX_DECLARE_CLASS3(hxd,fmt,hmd,GeometryFormat)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Library)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Model)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Property)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Skin)
HX_DECLARE_CLASS2(hxd,impl,AnyProps)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)
HX_DECLARE_CLASS2(hxd,res,Resource)

namespace hxd{
namespace fmt{
namespace hmd{


class HXCPP_CLASS_ATTRIBUTES Library_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Library_obj OBJ_;
		Library_obj();

	public:
		enum { _hx_ClassId = 0x4e5a6875 };

		void __construct( ::hxd::res::Resource res, ::hxd::fmt::hmd::Data header);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fmt.hmd.Library")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fmt.hmd.Library"); }
		static ::hx::ObjectPtr< Library_obj > __new( ::hxd::res::Resource res, ::hxd::fmt::hmd::Data header);
		static ::hx::ObjectPtr< Library_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxd::res::Resource res, ::hxd::fmt::hmd::Data header);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Library_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Library",db,4e,c1,0c); }

		 ::hxd::res::Resource resource;
		 ::hxd::fmt::hmd::Data header;
		::Array< ::Dynamic> cachedPrimitives;
		 ::haxe::ds::StringMap cachedAnimations;
		 ::haxe::ds::StringMap cachedSkin;
		 ::haxe::io::Bytes getData();
		::Dynamic getData_dyn();

		 ::Dynamic getDefaultFormat(int stride);
		::Dynamic getDefaultFormat_dyn();

		 ::Dynamic load(::Array< ::Dynamic> format,::Array< ::Dynamic> defaults,::hx::Null< int >  modelIndex);
		::Dynamic load_dyn();

		 ::hxd::fmt::hmd::GeometryBuffer getBuffers( ::hxd::fmt::hmd::Geometry geom,::Array< ::Dynamic> format,::Array< ::Dynamic> defaults, ::Dynamic material);
		::Dynamic getBuffers_dyn();

		 ::h3d::prim::HMDModel makePrimitive(int id);
		::Dynamic makePrimitive_dyn();

		 ::h3d::mat::Material makeMaterial( ::hxd::fmt::hmd::Model model,int mid, ::Dynamic loadTexture);
		::Dynamic makeMaterial_dyn();

		 ::h3d::anim::Skin makeSkin( ::hxd::fmt::hmd::Skin skin);
		::Dynamic makeSkin_dyn();

		 ::Dynamic getModelProperty(::String objName, ::hxd::fmt::hmd::Property p, ::Dynamic def);
		::Dynamic getModelProperty_dyn();

		 ::h3d::scene::Object makeObject( ::Dynamic loadTexture);
		::Dynamic makeObject_dyn();

		 ::h3d::anim::Animation loadAnimation(::String name);
		::Dynamic loadAnimation_dyn();

		 ::h3d::anim::BufferAnimation makeAnimation( ::hxd::fmt::hmd::Animation a);
		::Dynamic makeAnimation_dyn();

		 ::h3d::anim::LinearAnimation makeLinearAnimation( ::hxd::fmt::hmd::Animation a);
		::Dynamic makeLinearAnimation_dyn();

		void loadSkin( ::hxd::fmt::hmd::Geometry geom, ::h3d::anim::Skin skin,::hx::Null< bool >  optimize);
		::Dynamic loadSkin_dyn();

};

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd

#endif /* INCLUDED_hxd_fmt_hmd_Library */ 
