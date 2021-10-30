#ifndef INCLUDED_h3d_mat_Pass
#define INCLUDED_h3d_mat_Pass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
HX_DECLARE_CLASS1(h2d,BlendMode)
HX_DECLARE_CLASS1(h3d,IDrawable)
HX_DECLARE_CLASS2(h3d,mat,Blend)
HX_DECLARE_CLASS2(h3d,mat,Compare)
HX_DECLARE_CLASS2(h3d,mat,Face)
HX_DECLARE_CLASS2(h3d,mat,Operation)
HX_DECLARE_CLASS2(h3d,mat,Pass)
HX_DECLARE_CLASS2(h3d,mat,Stencil)
HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS2(h3d,scene,Scene)
HX_DECLARE_CLASS1(hxd,InteractiveScene)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)
HX_DECLARE_CLASS1(hxsl,Channel)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,ShaderList)
HX_DECLARE_CLASS2(hxsl,_ShaderList,ShaderIterator)

namespace h3d{
namespace mat{


class HXCPP_CLASS_ATTRIBUTES Pass_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Pass_obj OBJ_;
		Pass_obj();

	public:
		enum { _hx_ClassId = 0x6f750fb8 };

		void __construct(::String name, ::hxsl::ShaderList shaders, ::h3d::mat::Pass parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.mat.Pass")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.mat.Pass"); }
		static ::hx::ObjectPtr< Pass_obj > __new(::String name, ::hxsl::ShaderList shaders, ::h3d::mat::Pass parent);
		static ::hx::ObjectPtr< Pass_obj > __alloc(::hx::Ctx *_hx_ctx,::String name, ::hxsl::ShaderList shaders, ::h3d::mat::Pass parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Pass_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Pass",f1,10,2b,35); }

		static void __boot();
		static int getEnableLights(int v);
		static ::Dynamic getEnableLights_dyn();

		static int enableLights_bits;
		static int enableLights_offset;
		static int enableLights_mask;
		static int getDynamicParameters(int v);
		static ::Dynamic getDynamicParameters_dyn();

		static int dynamicParameters_bits;
		static int dynamicParameters_offset;
		static int dynamicParameters_mask;
		static int getIsStatic(int v);
		static ::Dynamic getIsStatic_dyn();

		static int isStatic_bits;
		static int isStatic_offset;
		static int isStatic_mask;
		static int getBatchMode(int v);
		static ::Dynamic getBatchMode_dyn();

		static int batchMode_bits;
		static int batchMode_offset;
		static int batchMode_mask;
		static int getCulling(int v);
		static ::Dynamic getCulling_dyn();

		static int culling_bits;
		static int culling_offset;
		static int culling_mask;
		static int getDepthWrite(int v);
		static ::Dynamic getDepthWrite_dyn();

		static int depthWrite_bits;
		static int depthWrite_offset;
		static int depthWrite_mask;
		static int getDepthTest(int v);
		static ::Dynamic getDepthTest_dyn();

		static int depthTest_bits;
		static int depthTest_offset;
		static int depthTest_mask;
		static int getBlendSrc(int v);
		static ::Dynamic getBlendSrc_dyn();

		static int blendSrc_bits;
		static int blendSrc_offset;
		static int blendSrc_mask;
		static int getBlendDst(int v);
		static ::Dynamic getBlendDst_dyn();

		static int blendDst_bits;
		static int blendDst_offset;
		static int blendDst_mask;
		static int getBlendAlphaSrc(int v);
		static ::Dynamic getBlendAlphaSrc_dyn();

		static int blendAlphaSrc_bits;
		static int blendAlphaSrc_offset;
		static int blendAlphaSrc_mask;
		static int getBlendAlphaDst(int v);
		static ::Dynamic getBlendAlphaDst_dyn();

		static int blendAlphaDst_bits;
		static int blendAlphaDst_offset;
		static int blendAlphaDst_mask;
		static int getBlendOp(int v);
		static ::Dynamic getBlendOp_dyn();

		static int blendOp_bits;
		static int blendOp_offset;
		static int blendOp_mask;
		static int getBlendAlphaOp(int v);
		static ::Dynamic getBlendAlphaOp_dyn();

		static int blendAlphaOp_bits;
		static int blendAlphaOp_offset;
		static int blendAlphaOp_mask;
		static int getWireframe(int v);
		static ::Dynamic getWireframe_dyn();

		static int wireframe_bits;
		static int wireframe_offset;
		static int wireframe_mask;
		static int getReserved(int v);
		static ::Dynamic getReserved_dyn();

		static int reserved_bits;
		static int reserved_offset;
		static int reserved_mask;
		::String name;
		int flags;
		int passId;
		int bits;
		 ::h3d::mat::Pass parentPass;
		 ::hxsl::ShaderList parentShaders;
		 ::hxsl::ShaderList shaders;
		 ::h3d::mat::Pass nextPass;
		bool enableLights;
		bool dynamicParameters;
		bool isStatic;
		bool batchMode;
		 ::h3d::mat::Face culling;
		bool depthWrite;
		 ::h3d::mat::Compare depthTest;
		 ::h3d::mat::Blend blendSrc;
		 ::h3d::mat::Blend blendDst;
		 ::h3d::mat::Blend blendAlphaSrc;
		 ::h3d::mat::Blend blendAlphaDst;
		 ::h3d::mat::Operation blendOp;
		 ::h3d::mat::Operation blendAlphaOp;
		bool wireframe;
		int colorMask;
		int layer;
		 ::h3d::mat::Stencil stencil;
		bool reserved;
		void load( ::h3d::mat::Pass p);
		::Dynamic load_dyn();

		void setPassName(::String name);
		::Dynamic setPassName_dyn();

		void blend( ::h3d::mat::Blend src, ::h3d::mat::Blend dst);
		::Dynamic blend_dyn();

		void setBlendMode( ::h2d::BlendMode b);
		::Dynamic setBlendMode_dyn();

		void depth(bool write, ::h3d::mat::Compare test);
		::Dynamic depth_dyn();

		void setColorMask(bool r,bool g,bool b,bool a);
		::Dynamic setColorMask_dyn();

		void setColorChannel( ::hxsl::Channel c);
		::Dynamic setColorChannel_dyn();

		 ::Dynamic addShader( ::Dynamic s);
		::Dynamic addShader_dyn();

		 ::Dynamic addShaderAtIndex( ::Dynamic s,int index);
		::Dynamic addShaderAtIndex_dyn();

		int getShaderIndex( ::hxsl::Shader s);
		::Dynamic getShaderIndex_dyn();

		bool removeShader( ::hxsl::Shader s);
		::Dynamic removeShader_dyn();

		 ::Dynamic getShader(::hx::Class t);
		::Dynamic getShader_dyn();

		 ::hxsl::Shader getShaderByName(::String name);
		::Dynamic getShaderByName_dyn();

		 ::hxsl::_ShaderList::ShaderIterator getShaders();
		::Dynamic getShaders_dyn();

		 ::hxsl::ShaderList getShadersRec();
		::Dynamic getShadersRec_dyn();

		 ::h3d::mat::Pass clone();
		::Dynamic clone_dyn();

		::String getDebugShaderCode( ::h3d::scene::Scene scene,::hx::Null< bool >  toHxsl);
		::Dynamic getDebugShaderCode_dyn();

		bool set_enableLights(bool v);
		::Dynamic set_enableLights_dyn();

		bool set_dynamicParameters(bool v);
		::Dynamic set_dynamicParameters_dyn();

		bool set_isStatic(bool v);
		::Dynamic set_isStatic_dyn();

		bool set_batchMode(bool v);
		::Dynamic set_batchMode_dyn();

		 ::h3d::mat::Face set_culling( ::h3d::mat::Face v);
		::Dynamic set_culling_dyn();

		bool set_depthWrite(bool v);
		::Dynamic set_depthWrite_dyn();

		 ::h3d::mat::Compare set_depthTest( ::h3d::mat::Compare v);
		::Dynamic set_depthTest_dyn();

		 ::h3d::mat::Blend set_blendSrc( ::h3d::mat::Blend v);
		::Dynamic set_blendSrc_dyn();

		 ::h3d::mat::Blend set_blendDst( ::h3d::mat::Blend v);
		::Dynamic set_blendDst_dyn();

		 ::h3d::mat::Blend set_blendAlphaSrc( ::h3d::mat::Blend v);
		::Dynamic set_blendAlphaSrc_dyn();

		 ::h3d::mat::Blend set_blendAlphaDst( ::h3d::mat::Blend v);
		::Dynamic set_blendAlphaDst_dyn();

		 ::h3d::mat::Operation set_blendOp( ::h3d::mat::Operation v);
		::Dynamic set_blendOp_dyn();

		 ::h3d::mat::Operation set_blendAlphaOp( ::h3d::mat::Operation v);
		::Dynamic set_blendAlphaOp_dyn();

		bool set_wireframe(bool v);
		::Dynamic set_wireframe_dyn();

		bool set_reserved(bool v);
		::Dynamic set_reserved_dyn();

		void loadFlags(int bits);
		::Dynamic loadFlags_dyn();

		void loadBits(int bits);
		::Dynamic loadBits_dyn();

};

} // end namespace h3d
} // end namespace mat

#endif /* INCLUDED_h3d_mat_Pass */ 
