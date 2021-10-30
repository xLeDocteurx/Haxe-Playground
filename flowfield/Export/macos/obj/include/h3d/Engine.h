#ifndef INCLUDED_h3d_Engine
#define INCLUDED_h3d_Engine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Buffer)
HX_DECLARE_CLASS1(h3d,BufferOffset)
HX_DECLARE_CLASS1(h3d,Engine)
HX_DECLARE_CLASS1(h3d,Indexes)
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,_Engine,TargetTmp)
HX_DECLARE_CLASS2(h3d,impl,Driver)
HX_DECLARE_CLASS2(h3d,impl,Feature)
HX_DECLARE_CLASS2(h3d,impl,InstanceBuffer)
HX_DECLARE_CLASS2(h3d,impl,MemoryManager)
HX_DECLARE_CLASS2(h3d,mat,Pass)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS2(h3d,shader,Buffers)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS1(hxd,Window)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)
HX_DECLARE_CLASS1(hxsl,RuntimeShader)

namespace h3d{


class HXCPP_CLASS_ATTRIBUTES Engine_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Engine_obj OBJ_;
		Engine_obj();

	public:
		enum { _hx_ClassId = 0x54dd3c1b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.Engine")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.Engine"); }
		static ::hx::ObjectPtr< Engine_obj > __new();
		static ::hx::ObjectPtr< Engine_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		static void __alloc_dynamic_functions(::hx::Ctx *_hx_alloc,Engine_obj *_hx_obj);
		//~Engine_obj();

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
		::String __ToString() const { return HX_("Engine",e2,bb,18,31); }

		static void __boot();
		static bool SOFTWARE_DRIVER;
		static int ANTIALIASING;
		static  ::h3d::Engine CURRENT;
		static  ::h3d::Engine getCurrent();
		static ::Dynamic getCurrent_dyn();

		 ::h3d::impl::Driver driver;
		 ::h3d::impl::MemoryManager mem;
		bool hardware;
		int width;
		int height;
		bool debug;
		int drawTriangles;
		int drawCalls;
		int shaderSwitches;
		 ::Dynamic backgroundColor;
		bool autoResize;
		bool fullScreen;
		Float realFps;
		Float lastTime;
		int antiAlias;
		 ::h3d::Vector tmpVector;
		 ::hxd::Window window;
		 ::h3d::_Engine::TargetTmp targetTmp;
		 ::h3d::_Engine::TargetTmp targetStack;
		 ::h3d::mat::Texture currentTargetTex;
		int currentTargetLayer;
		int currentTargetMip;
		bool needFlushTarget;
		 ::h3d::mat::Texture nullTexture;
		 ::haxe::ds::IntMap textureColorCache;
		bool inRender;
		bool ready;
		 ::haxe::ds::ObjectMap resCache;
		void setDriver( ::h3d::impl::Driver d);
		::Dynamic setDriver_dyn();

		void setCurrent();
		::Dynamic setCurrent_dyn();

		void init();
		::Dynamic init_dyn();

		::String driverName(::hx::Null< bool >  details);
		::Dynamic driverName_dyn();

		void selectShader( ::hxsl::RuntimeShader shader);
		::Dynamic selectShader_dyn();

		void selectMaterial( ::h3d::mat::Pass pass);
		::Dynamic selectMaterial_dyn();

		void uploadShaderBuffers( ::h3d::shader::Buffers buffers,int which);
		::Dynamic uploadShaderBuffers_dyn();

		bool selectBuffer( ::h3d::Buffer buf);
		::Dynamic selectBuffer_dyn();

		void renderTriBuffer( ::h3d::Buffer b,::hx::Null< int >  start,::hx::Null< int >  max);
		::Dynamic renderTriBuffer_dyn();

		void renderQuadBuffer( ::h3d::Buffer b,::hx::Null< int >  start,::hx::Null< int >  max);
		::Dynamic renderQuadBuffer_dyn();

		void renderBuffer( ::h3d::Buffer b, ::h3d::Indexes indexes,int vertPerTri,::hx::Null< int >  startTri,::hx::Null< int >  drawTri);
		::Dynamic renderBuffer_dyn();

		void renderIndexed( ::h3d::Buffer b, ::h3d::Indexes indexes,::hx::Null< int >  startTri,::hx::Null< int >  drawTri);
		::Dynamic renderIndexed_dyn();

		void renderMultiBuffers( ::h3d::BufferOffset buffers, ::h3d::Indexes indexes,::hx::Null< int >  startTri,::hx::Null< int >  drawTri);
		::Dynamic renderMultiBuffers_dyn();

		void renderInstanced( ::h3d::BufferOffset buffers, ::h3d::Indexes indexes, ::h3d::impl::InstanceBuffer commands);
		::Dynamic renderInstanced_dyn();

		bool set_debug(bool d);
		::Dynamic set_debug_dyn();

		void onCreate(bool disposed);
		::Dynamic onCreate_dyn();

		::Dynamic onContextLost;
		inline ::Dynamic &onContextLost_dyn() {return onContextLost; }

		::Dynamic onReady;
		inline ::Dynamic &onReady_dyn() {return onReady; }

		void onWindowResize();
		::Dynamic onWindowResize_dyn();

		bool set_fullScreen(bool v);
		::Dynamic set_fullScreen_dyn();

		::Dynamic onResized;
		inline ::Dynamic &onResized_dyn() {return onResized; }

		void resize(int width,int height);
		::Dynamic resize_dyn();

		bool begin();
		::Dynamic begin_dyn();

		bool hasFeature( ::h3d::impl::Feature f);
		::Dynamic hasFeature_dyn();

		void end();
		::Dynamic end_dyn();

		 ::h3d::mat::Texture getCurrentTarget();
		::Dynamic getCurrentTarget_dyn();

		void pushTarget( ::h3d::mat::Texture tex,::hx::Null< int >  layer,::hx::Null< int >  mipLevel);
		::Dynamic pushTarget_dyn();

		void updateNeedFlush();
		::Dynamic updateNeedFlush_dyn();

		void pushTargets(::Array< ::Dynamic> textures);
		::Dynamic pushTargets_dyn();

		void popTarget();
		::Dynamic popTarget_dyn();

		void flushTarget();
		::Dynamic flushTarget_dyn();

		void doFlushTarget();
		::Dynamic doFlushTarget_dyn();

		void clearF( ::h3d::Vector color, ::Dynamic depth, ::Dynamic stencil);
		::Dynamic clearF_dyn();

		void clear( ::Dynamic color, ::Dynamic depth, ::Dynamic stencil);
		::Dynamic clear_dyn();

		void setRenderZone(::hx::Null< int >  x,::hx::Null< int >  y,::hx::Null< int >  width,::hx::Null< int >  height);
		::Dynamic setRenderZone_dyn();

		bool render( ::Dynamic obj);
		::Dynamic render_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		Float get_fps();
		::Dynamic get_fps_dyn();

};

} // end namespace h3d

#endif /* INCLUDED_h3d_Engine */ 
