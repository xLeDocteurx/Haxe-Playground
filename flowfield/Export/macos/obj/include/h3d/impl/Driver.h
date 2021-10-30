#ifndef INCLUDED_h3d_impl_Driver
#define INCLUDED_h3d_impl_Driver

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h2d,col,IBounds)
HX_DECLARE_CLASS1(h3d,Buffer)
HX_DECLARE_CLASS1(h3d,BufferOffset)
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,impl,Driver)
HX_DECLARE_CLASS2(h3d,impl,Feature)
HX_DECLARE_CLASS2(h3d,impl,InputNames)
HX_DECLARE_CLASS2(h3d,impl,InstanceBuffer)
HX_DECLARE_CLASS2(h3d,impl,ManagedBuffer)
HX_DECLARE_CLASS2(h3d,impl,QueryKind)
HX_DECLARE_CLASS2(h3d,impl,RenderFlag)
HX_DECLARE_CLASS2(h3d,mat,DepthBuffer)
HX_DECLARE_CLASS2(h3d,mat,Pass)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS2(h3d,shader,Buffers)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(hxd,BitmapData)
HX_DECLARE_CLASS1(hxd,PixelFormat)
HX_DECLARE_CLASS1(hxd,Pixels)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)
HX_DECLARE_CLASS1(hxsl,RuntimeShader)

namespace h3d{
namespace impl{


class HXCPP_CLASS_ATTRIBUTES Driver_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Driver_obj OBJ_;
		Driver_obj();

	public:
		enum { _hx_ClassId = 0x7fa9e081 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h3d.impl.Driver")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h3d.impl.Driver"); }

		inline static ::hx::ObjectPtr< Driver_obj > __new() {
			::hx::ObjectPtr< Driver_obj > __this = new Driver_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Driver_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Driver_obj *__this = (Driver_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Driver_obj), false, "h3d.impl.Driver"));
			*(void **)__this = Driver_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Driver_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Driver",48,f4,b3,19); }

		bool logEnable;
		virtual bool hasFeature( ::h3d::impl::Feature f);
		::Dynamic hasFeature_dyn();

		void setRenderFlag( ::h3d::impl::RenderFlag r,int value);
		::Dynamic setRenderFlag_dyn();

		virtual bool isSupportedFormat( ::hxd::PixelFormat fmt);
		::Dynamic isSupportedFormat_dyn();

		virtual bool isDisposed();
		::Dynamic isDisposed_dyn();

		virtual void dispose();
		::Dynamic dispose_dyn();

		virtual void begin(int frame);
		::Dynamic begin_dyn();

		void log(::String str);
		::Dynamic log_dyn();

		void generateMipMaps( ::h3d::mat::Texture texture);
		::Dynamic generateMipMaps_dyn();

		virtual ::String getNativeShaderCode( ::hxsl::RuntimeShader shader);
		::Dynamic getNativeShaderCode_dyn();

		virtual void logImpl(::String str);
		::Dynamic logImpl_dyn();

		virtual void clear( ::h3d::Vector color, ::Dynamic depth, ::Dynamic stencil);
		::Dynamic clear_dyn();

		virtual void captureRenderBuffer( ::hxd::Pixels pixels);
		::Dynamic captureRenderBuffer_dyn();

		 ::hxd::Pixels capturePixels( ::h3d::mat::Texture tex,int layer,int mipLevel, ::h2d::col::IBounds region);
		::Dynamic capturePixels_dyn();

		virtual ::String getDriverName(bool details);
		::Dynamic getDriverName_dyn();

		virtual void init( ::Dynamic onCreate,::hx::Null< bool >  forceSoftware);
		::Dynamic init_dyn();

		virtual void resize(int width,int height);
		::Dynamic resize_dyn();

		virtual bool selectShader( ::hxsl::RuntimeShader shader);
		::Dynamic selectShader_dyn();

		virtual void selectMaterial( ::h3d::mat::Pass pass);
		::Dynamic selectMaterial_dyn();

		virtual void uploadShaderBuffers( ::h3d::shader::Buffers buffers,int which);
		::Dynamic uploadShaderBuffers_dyn();

		virtual  ::h3d::impl::InputNames getShaderInputNames();
		::Dynamic getShaderInputNames_dyn();

		virtual void selectBuffer( ::h3d::Buffer buffer);
		::Dynamic selectBuffer_dyn();

		virtual void selectMultiBuffers( ::h3d::BufferOffset buffers);
		::Dynamic selectMultiBuffers_dyn();

		virtual void draw( ::Dynamic ibuf,int startIndex,int ntriangles);
		::Dynamic draw_dyn();

		void drawInstanced( ::Dynamic ibuf, ::h3d::impl::InstanceBuffer commands);
		::Dynamic drawInstanced_dyn();

		virtual void setRenderZone(int x,int y,int width,int height);
		::Dynamic setRenderZone_dyn();

		virtual void setRenderTarget( ::h3d::mat::Texture tex,::hx::Null< int >  layer,::hx::Null< int >  mipLevel);
		::Dynamic setRenderTarget_dyn();

		virtual void setRenderTargets(::Array< ::Dynamic> textures);
		::Dynamic setRenderTargets_dyn();

		 ::Dynamic allocDepthBuffer( ::h3d::mat::DepthBuffer b);
		::Dynamic allocDepthBuffer_dyn();

		void disposeDepthBuffer( ::h3d::mat::DepthBuffer b);
		::Dynamic disposeDepthBuffer_dyn();

		 ::h3d::mat::DepthBuffer getDefaultDepthBuffer();
		::Dynamic getDefaultDepthBuffer_dyn();

		virtual void present();
		::Dynamic present_dyn();

		virtual void end();
		::Dynamic end_dyn();

		virtual void setDebug(bool b);
		::Dynamic setDebug_dyn();

		virtual  ::Dynamic allocTexture( ::h3d::mat::Texture t);
		::Dynamic allocTexture_dyn();

		virtual  ::Dynamic allocIndexes(int count,bool is32);
		::Dynamic allocIndexes_dyn();

		virtual  ::Dynamic allocVertexes( ::h3d::impl::ManagedBuffer m);
		::Dynamic allocVertexes_dyn();

		void allocInstanceBuffer( ::h3d::impl::InstanceBuffer b, ::haxe::io::Bytes bytes);
		::Dynamic allocInstanceBuffer_dyn();

		virtual void disposeTexture( ::h3d::mat::Texture t);
		::Dynamic disposeTexture_dyn();

		virtual void disposeIndexes( ::Dynamic i);
		::Dynamic disposeIndexes_dyn();

		virtual void disposeVertexes( ::Dynamic v);
		::Dynamic disposeVertexes_dyn();

		void disposeInstanceBuffer( ::h3d::impl::InstanceBuffer b);
		::Dynamic disposeInstanceBuffer_dyn();

		virtual void uploadIndexBuffer( ::Dynamic i,int startIndice,int indiceCount,::Array< int > buf,int bufPos);
		::Dynamic uploadIndexBuffer_dyn();

		virtual void uploadIndexBytes( ::Dynamic i,int startIndice,int indiceCount, ::haxe::io::Bytes buf,int bufPos);
		::Dynamic uploadIndexBytes_dyn();

		virtual void uploadVertexBuffer( ::Dynamic v,int startVertex,int vertexCount,::Array< Float > buf,int bufPos);
		::Dynamic uploadVertexBuffer_dyn();

		virtual void uploadVertexBytes( ::Dynamic v,int startVertex,int vertexCount, ::haxe::io::Bytes buf,int bufPos);
		::Dynamic uploadVertexBytes_dyn();

		virtual void uploadTextureBitmap( ::h3d::mat::Texture t, ::hxd::BitmapData bmp,int mipLevel,int side);
		::Dynamic uploadTextureBitmap_dyn();

		virtual void uploadTexturePixels( ::h3d::mat::Texture t, ::hxd::Pixels pixels,int mipLevel,int side);
		::Dynamic uploadTexturePixels_dyn();

		void readVertexBytes( ::Dynamic v,int startVertex,int vertexCount, ::haxe::io::Bytes buf,int bufPos);
		::Dynamic readVertexBytes_dyn();

		void readIndexBytes( ::Dynamic v,int startVertex,int vertexCount, ::haxe::io::Bytes buf,int bufPos);
		::Dynamic readIndexBytes_dyn();

		bool copyTexture( ::h3d::mat::Texture from, ::h3d::mat::Texture to);
		::Dynamic copyTexture_dyn();

		 ::Dynamic allocQuery( ::h3d::impl::QueryKind queryKind);
		::Dynamic allocQuery_dyn();

		void deleteQuery( ::Dynamic q);
		::Dynamic deleteQuery_dyn();

		void beginQuery( ::Dynamic q);
		::Dynamic beginQuery_dyn();

		void endQuery( ::Dynamic q);
		::Dynamic endQuery_dyn();

		bool queryResultAvailable( ::Dynamic q);
		::Dynamic queryResultAvailable_dyn();

		Float queryResult( ::Dynamic q);
		::Dynamic queryResult_dyn();

};

} // end namespace h3d
} // end namespace impl

#endif /* INCLUDED_h3d_impl_Driver */ 
