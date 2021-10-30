#ifndef INCLUDED_h3d_impl_LogDriver
#define INCLUDED_h3d_impl_LogDriver

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_impl_Driver
#include <h3d/impl/Driver.h>
#endif
HX_DECLARE_CLASS1(h3d,Buffer)
HX_DECLARE_CLASS1(h3d,BufferOffset)
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,impl,Driver)
HX_DECLARE_CLASS2(h3d,impl,Feature)
HX_DECLARE_CLASS2(h3d,impl,InputNames)
HX_DECLARE_CLASS2(h3d,impl,LogDriver)
HX_DECLARE_CLASS2(h3d,impl,ManagedBuffer)
HX_DECLARE_CLASS2(h3d,mat,Pass)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS2(h3d,shader,Buffers)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(hxd,BitmapData)
HX_DECLARE_CLASS1(hxd,PixelFormat)
HX_DECLARE_CLASS1(hxd,Pixels)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)
HX_DECLARE_CLASS1(hxsl,RuntimeShader)
HX_DECLARE_CLASS1(hxsl,Type)

namespace h3d{
namespace impl{


class HXCPP_CLASS_ATTRIBUTES LogDriver_obj : public  ::h3d::impl::Driver_obj
{
	public:
		typedef  ::h3d::impl::Driver_obj super;
		typedef LogDriver_obj OBJ_;
		LogDriver_obj();

	public:
		enum { _hx_ClassId = 0x0be5bb0b };

		void __construct( ::h3d::impl::Driver driver);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.impl.LogDriver")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.impl.LogDriver"); }
		static ::hx::ObjectPtr< LogDriver_obj > __new( ::h3d::impl::Driver driver);
		static ::hx::ObjectPtr< LogDriver_obj > __alloc(::hx::Ctx *_hx_ctx, ::h3d::impl::Driver driver);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LogDriver_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LogDriver",ac,63,61,41); }

		static void debug( ::Dynamic f);
		static ::Dynamic debug_dyn();

		 ::h3d::impl::Driver d;
		 ::haxe::ds::IntMap loggedShaders;
		 ::hxsl::RuntimeShader currentShader;
		::Array< ::String > logLines;
		void logImpl(::String str);

		bool hasFeature( ::h3d::impl::Feature f);

		bool isSupportedFormat( ::hxd::PixelFormat fmt);

		bool isDisposed();

		void dispose();

		void begin(int frame);

		void clear( ::h3d::Vector color, ::Dynamic depth, ::Dynamic stencil);

		void captureRenderBuffer( ::hxd::Pixels pixels);

		::String getDriverName(bool details);

		void init( ::Dynamic onCreate,::hx::Null< bool >  forceSoftware);

		void resize(int width,int height);

		bool selectShader( ::hxsl::RuntimeShader shader);

		::String getNativeShaderCode( ::hxsl::RuntimeShader shader);

		void selectMaterial( ::h3d::mat::Pass pass);

		int sizeOf( ::hxsl::Type t);
		::Dynamic sizeOf_dyn();

		void uploadShaderBuffers( ::h3d::shader::Buffers buffers,int which);

		::String textureInfos(::Array< ::Dynamic> buf,int tid);
		::Dynamic textureInfos_dyn();

		 ::h3d::impl::InputNames getShaderInputNames();

		void selectBuffer( ::h3d::Buffer buffer);

		void selectMultiBuffers( ::h3d::BufferOffset buffers);

		void draw( ::Dynamic ibuf,int startIndex,int ntriangles);

		void setRenderZone(int x,int y,int width,int height);

		void setRenderTarget( ::h3d::mat::Texture tex,::hx::Null< int >  face,::hx::Null< int >  mipMap);

		void setRenderTargets(::Array< ::Dynamic> textures);

		void end();

		void present();

		void setDebug(bool b);

		 ::Dynamic allocTexture( ::h3d::mat::Texture t);

		 ::Dynamic allocIndexes(int count,bool is32);

		 ::Dynamic allocVertexes( ::h3d::impl::ManagedBuffer m);

		void disposeTexture( ::h3d::mat::Texture t);

		void disposeIndexes( ::Dynamic i);

		void disposeVertexes( ::Dynamic v);

		void uploadIndexBuffer( ::Dynamic i,int startIndice,int indiceCount,::Array< int > buf,int bufPos);

		void uploadIndexBytes( ::Dynamic i,int startIndice,int indiceCount, ::haxe::io::Bytes buf,int bufPos);

		void uploadVertexBuffer( ::Dynamic v,int startVertex,int vertexCount,::Array< Float > buf,int bufPos);

		void uploadVertexBytes( ::Dynamic v,int startVertex,int vertexCount, ::haxe::io::Bytes buf,int bufPos);

		void uploadTextureBitmap( ::h3d::mat::Texture t, ::hxd::BitmapData bmp,int mipLevel,int side);

		void uploadTexturePixels( ::h3d::mat::Texture t, ::hxd::Pixels pixels,int mipLevel,int side);

};

} // end namespace h3d
} // end namespace impl

#endif /* INCLUDED_h3d_impl_LogDriver */ 
