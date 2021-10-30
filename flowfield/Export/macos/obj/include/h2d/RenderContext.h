#ifndef INCLUDED_h2d_RenderContext
#define INCLUDED_h2d_RenderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
HX_DECLARE_CLASS1(h2d,BlendMode)
HX_DECLARE_CLASS1(h2d,Camera)
HX_DECLARE_CLASS1(h2d,Drawable)
HX_DECLARE_CLASS1(h2d,Layers)
HX_DECLARE_CLASS1(h2d,Object)
HX_DECLARE_CLASS1(h2d,RenderContext)
HX_DECLARE_CLASS1(h2d,Scene)
HX_DECLARE_CLASS1(h2d,Tile)
HX_DECLARE_CLASS2(h2d,col,Bounds)
HX_DECLARE_CLASS1(h3d,Buffer)
HX_DECLARE_CLASS1(h3d,IDrawable)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS2(h3d,mat,Pass)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS2(h3d,pass,ShaderManager)
HX_DECLARE_CLASS2(h3d,shader,Base2d)
HX_DECLARE_CLASS2(h3d,shader,Buffers)
HX_DECLARE_CLASS1(hxd,InteractiveScene)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)
HX_DECLARE_CLASS1(hxsl,RuntimeShader)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,ShaderList)

namespace h2d{


class HXCPP_CLASS_ATTRIBUTES RenderContext_obj : public  ::h3d::impl::RenderContext_obj
{
	public:
		typedef  ::h3d::impl::RenderContext_obj super;
		typedef RenderContext_obj OBJ_;
		RenderContext_obj();

	public:
		enum { _hx_ClassId = 0x6c686fff };

		void __construct( ::h2d::Scene scene);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h2d.RenderContext")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h2d.RenderContext"); }
		static ::hx::ObjectPtr< RenderContext_obj > __new( ::h2d::Scene scene);
		static ::hx::ObjectPtr< RenderContext_obj > __alloc(::hx::Ctx *_hx_ctx, ::h2d::Scene scene);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RenderContext_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RenderContext",19,59,55,5d); }

		static void __boot();
		static bool BUFFERING;
		Float globalAlpha;
		::Array< Float > buffer;
		int bufPos;
		 ::h2d::Scene scene;
		bool defaultSmooth;
		bool killAlpha;
		bool front2back;
		 ::Dynamic onBeginDraw;
		Dynamic onBeginDraw_dyn() { return onBeginDraw;}
		 ::Dynamic onEnterFilter;
		Dynamic onEnterFilter_dyn() { return onEnterFilter;}
		 ::Dynamic onLeaveFilter;
		Dynamic onLeaveFilter_dyn() { return onLeaveFilter;}
		 ::h2d::col::Bounds tmpBounds;
		 ::h3d::mat::Texture texture;
		 ::h3d::shader::Base2d baseShader;
		 ::h3d::pass::ShaderManager manager;
		 ::hxsl::RuntimeShader compiledShader;
		 ::h3d::shader::Buffers buffers;
		 ::h3d::Buffer fixedBuffer;
		 ::h3d::mat::Pass pass;
		 ::hxsl::ShaderList currentShaders;
		 ::hxsl::ShaderList baseShaderList;
		 ::h2d::Drawable currentObj;
		int stride;
		::Array< ::Dynamic> targetsStack;
		int targetsStackIndex;
		::Array< ::Dynamic> cameraStack;
		int cameraStackIndex;
		 ::h3d::mat::Texture curTarget;
		::Array< ::Dynamic> renderZoneStack;
		int renderZoneIndex;
		bool hasUVPos;
		::Array< ::Dynamic> filterStack;
		 ::h2d::Object inFilter;
		 ::h2d::BlendMode inFilterBlend;
		Float viewA;
		Float viewB;
		Float viewC;
		Float viewD;
		Float viewX;
		Float viewY;
		bool hasRenderZone;
		Float renderX;
		Float renderY;
		Float renderW;
		Float renderH;
		 ::h2d::BlendMode currentBlend;
		Float baseFlipY;
		Float targetFlipY;
		void dispose();

		bool hasBuffering();
		::Dynamic hasBuffering_dyn();

		void begin();
		::Dynamic begin_dyn();

		 ::h3d::mat::Texture allocTarget(::String name,::hx::Null< bool >  filter);
		::Dynamic allocTarget_dyn();

		void clear( ::Dynamic color);
		::Dynamic clear_dyn();

		void initShaders( ::hxsl::ShaderList shaders);
		::Dynamic initShaders_dyn();

		void end();
		::Dynamic end_dyn();

		void pushCamera( ::h2d::Camera cam);
		::Dynamic pushCamera_dyn();

		void popCamera();
		::Dynamic popCamera_dyn();

		bool pushFilter( ::h2d::Object spr);
		::Dynamic pushFilter_dyn();

		void popFilter();
		::Dynamic popFilter_dyn();

		void pushTarget( ::h3d::mat::Texture t,::hx::Null< int >  startX,::hx::Null< int >  startY,::hx::Null< int >  width,::hx::Null< int >  height);
		::Dynamic pushTarget_dyn();

		void pushTargets(::Array< ::Dynamic> texs);
		::Dynamic pushTargets_dyn();

		void popTarget();
		::Dynamic popTarget_dyn();

		void pushRenderZone(Float x,Float y,Float w,Float h);
		::Dynamic pushRenderZone_dyn();

		void popRenderZone();
		::Dynamic popRenderZone_dyn();

		void clipRenderZone(Float x,Float y,Float w,Float h);
		::Dynamic clipRenderZone_dyn();

		void setRZ(Float x,Float y,Float w,Float h);
		::Dynamic setRZ_dyn();

		void clearRZ();
		::Dynamic clearRZ_dyn();

		void setRenderZone(Float x,Float y,Float w,Float h);
		::Dynamic setRenderZone_dyn();

		void clearRenderZone();
		::Dynamic clearRenderZone_dyn();

		void drawLayer(int layer);
		::Dynamic drawLayer_dyn();

		void drawScene();
		::Dynamic drawScene_dyn();

		void flush();
		::Dynamic flush_dyn();

		void _flush();
		::Dynamic _flush_dyn();

		void beforeDraw();
		::Dynamic beforeDraw_dyn();

		void setupColor( ::h2d::Drawable obj);
		::Dynamic setupColor_dyn();

		bool beginDrawBatchState( ::h2d::Drawable obj);
		::Dynamic beginDrawBatchState_dyn();

		void swapTexture( ::h3d::mat::Texture texture);
		::Dynamic swapTexture_dyn();

		bool beginDrawObject( ::h2d::Drawable obj, ::h3d::mat::Texture texture);
		::Dynamic beginDrawObject_dyn();

		bool beginDrawBatch( ::h2d::Drawable obj, ::h3d::mat::Texture texture);
		::Dynamic beginDrawBatch_dyn();

		bool drawTile( ::h2d::Drawable obj, ::h2d::Tile tile);
		::Dynamic drawTile_dyn();

		bool beginDraw( ::h2d::Drawable obj, ::h3d::mat::Texture texture,bool isRelative,::hx::Null< bool >  hasUVPos);
		::Dynamic beginDraw_dyn();

};

} // end namespace h2d

#endif /* INCLUDED_h2d_RenderContext */ 
