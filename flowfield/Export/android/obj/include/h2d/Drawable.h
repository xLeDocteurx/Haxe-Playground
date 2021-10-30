#ifndef INCLUDED_h2d_Drawable
#define INCLUDED_h2d_Drawable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h2d_Object
#include <h2d/Object.h>
#endif
HX_DECLARE_CLASS1(h2d,Drawable)
HX_DECLARE_CLASS1(h2d,Object)
HX_DECLARE_CLASS1(h2d,RenderContext)
HX_DECLARE_CLASS1(h2d,Tile)
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,ShaderList)
HX_DECLARE_CLASS2(hxsl,_ShaderList,ShaderIterator)

namespace h2d{


class HXCPP_CLASS_ATTRIBUTES Drawable_obj : public  ::h2d::Object_obj
{
	public:
		typedef  ::h2d::Object_obj super;
		typedef Drawable_obj OBJ_;
		Drawable_obj();

	public:
		enum { _hx_ClassId = 0x6c6b2aec };

		void __construct( ::h2d::Object parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h2d.Drawable")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h2d.Drawable"); }
		static ::hx::ObjectPtr< Drawable_obj > __new( ::h2d::Object parent);
		static ::hx::ObjectPtr< Drawable_obj > __alloc(::hx::Ctx *_hx_ctx, ::h2d::Object parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Drawable_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Drawable",be,a7,aa,43); }

		 ::h3d::Vector color;
		 ::Dynamic smooth;
		bool tileWrap;
		 ::Dynamic colorKey;
		 ::hxsl::ShaderList shaders;
		bool set_tileWrap(bool b);
		::Dynamic set_tileWrap_dyn();

		 ::h3d::Vector get_colorAdd();
		::Dynamic get_colorAdd_dyn();

		 ::h3d::Vector set_colorAdd( ::h3d::Vector c);
		::Dynamic set_colorAdd_dyn();

		void drawFiltered( ::h2d::RenderContext ctx, ::h2d::Tile tile);

		 ::Dynamic set_colorKey( ::Dynamic v);
		::Dynamic set_colorKey_dyn();

		void adjustColor( ::Dynamic col);
		::Dynamic adjustColor_dyn();

		 ::h3d::Matrix get_colorMatrix();
		::Dynamic get_colorMatrix_dyn();

		 ::h3d::Matrix set_colorMatrix( ::h3d::Matrix m);
		::Dynamic set_colorMatrix_dyn();

		::String getDebugShaderCode(::hx::Null< bool >  toHxsl);
		::Dynamic getDebugShaderCode_dyn();

		 ::Dynamic getShader(::hx::Class stype);
		::Dynamic getShader_dyn();

		 ::hxsl::_ShaderList::ShaderIterator getShaders();
		::Dynamic getShaders_dyn();

		 ::Dynamic addShader( ::Dynamic s);
		::Dynamic addShader_dyn();

		bool removeShader( ::hxsl::Shader s);
		::Dynamic removeShader_dyn();

		void emitTile( ::h2d::RenderContext ctx, ::h2d::Tile tile);

};

} // end namespace h2d

#endif /* INCLUDED_h2d_Drawable */ 
