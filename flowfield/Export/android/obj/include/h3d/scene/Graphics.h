#ifndef INCLUDED_h3d_scene_Graphics
#define INCLUDED_h3d_scene_Graphics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_scene_Mesh
#include <h3d/scene/Mesh.h>
#endif
HX_DECLARE_CLASS2(h3d,col,Point)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS2(h3d,prim,BigPrimitive)
HX_DECLARE_CLASS2(h3d,prim,Primitive)
HX_DECLARE_CLASS2(h3d,scene,Graphics)
HX_DECLARE_CLASS2(h3d,scene,Mesh)
HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS2(h3d,scene,RenderContext)
HX_DECLARE_CLASS3(h3d,scene,_Graphics,GPoint)
HX_DECLARE_CLASS2(h3d,shader,LineShader)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)
HX_DECLARE_CLASS1(hxsl,Shader)

namespace h3d{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES Graphics_obj : public  ::h3d::scene::Mesh_obj
{
	public:
		typedef  ::h3d::scene::Mesh_obj super;
		typedef Graphics_obj OBJ_;
		Graphics_obj();

	public:
		enum { _hx_ClassId = 0x6aedc89e };

		void __construct( ::h3d::scene::Object parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.scene.Graphics")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.scene.Graphics"); }
		static ::hx::ObjectPtr< Graphics_obj > __new( ::h3d::scene::Object parent);
		static ::hx::ObjectPtr< Graphics_obj > __alloc(::hx::Ctx *_hx_ctx, ::h3d::scene::Object parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Graphics_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Graphics",eb,b4,19,ec); }

		 ::h3d::prim::BigPrimitive bprim;
		Float curX;
		Float curY;
		Float curZ;
		Float curR;
		Float curG;
		Float curB;
		Float curA;
		Float lineSize;
		 ::h3d::shader::LineShader lineShader;
		::Array< ::Dynamic> tmpPoints;
		bool is3D;
		void onRemove();

		bool set_is3D(bool v);
		::Dynamic set_is3D_dyn();

		void flushLine();
		::Dynamic flushLine_dyn();

		void flush();
		::Dynamic flush_dyn();

		void sync( ::h3d::scene::RenderContext ctx);

		void draw( ::h3d::scene::RenderContext ctx);

		void clear();
		::Dynamic clear_dyn();

		void lineStyle(::hx::Null< Float >  size,::hx::Null< int >  color,::hx::Null< Float >  alpha);
		::Dynamic lineStyle_dyn();

		void setColor(int color,::hx::Null< Float >  alpha);
		::Dynamic setColor_dyn();

		void drawLine( ::h3d::col::Point p1, ::h3d::col::Point p2);
		::Dynamic drawLine_dyn();

		void moveTo(Float x,Float y,Float z);
		::Dynamic moveTo_dyn();

		void addVertex(Float x,Float y,Float z,Float r,Float g,Float b,Float a);
		::Dynamic addVertex_dyn();

		void lineTo(Float x,Float y,Float z);
		::Dynamic lineTo_dyn();

};

} // end namespace h3d
} // end namespace scene

#endif /* INCLUDED_h3d_scene_Graphics */ 
