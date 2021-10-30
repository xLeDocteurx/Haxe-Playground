#ifndef INCLUDED_h2d__Graphics_GraphicsContent
#define INCLUDED_h2d__Graphics_GraphicsContent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_prim_Primitive
#include <h3d/prim/Primitive.h>
#endif
HX_DECLARE_CLASS2(h2d,_Graphics,GraphicsContent)
HX_DECLARE_CLASS1(h3d,Engine)
HX_DECLARE_CLASS2(h3d,prim,Primitive)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h2d{
namespace _Graphics{


class HXCPP_CLASS_ATTRIBUTES GraphicsContent_obj : public  ::h3d::prim::Primitive_obj
{
	public:
		typedef  ::h3d::prim::Primitive_obj super;
		typedef GraphicsContent_obj OBJ_;
		GraphicsContent_obj();

	public:
		enum { _hx_ClassId = 0x20451a9e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h2d._Graphics.GraphicsContent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h2d._Graphics.GraphicsContent"); }
		static ::hx::ObjectPtr< GraphicsContent_obj > __new();
		static ::hx::ObjectPtr< GraphicsContent_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GraphicsContent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GraphicsContent",8e,43,5c,99); }

		::Array< Float > tmp;
		::Array< int > index;
		::Array< ::Dynamic> buffers;
		bool bufferDirty;
		bool indexDirty;
		void addIndex(int i);
		::Dynamic addIndex_dyn();

		void add(Float x,Float y,Float u,Float v,Float r,Float g,Float b,Float a);
		::Dynamic add_dyn();

		bool next();
		::Dynamic next_dyn();

		void alloc( ::h3d::Engine engine);

		void render( ::h3d::Engine engine);

		void flush();
		::Dynamic flush_dyn();

		void dispose();

		void clear();
		::Dynamic clear_dyn();

};

} // end namespace h2d
} // end namespace _Graphics

#endif /* INCLUDED_h2d__Graphics_GraphicsContent */ 
