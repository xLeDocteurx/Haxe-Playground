#ifndef INCLUDED_h3d_mat_TextureArray
#define INCLUDED_h3d_mat_TextureArray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS2(h3d,mat,TextureArray)
HX_DECLARE_CLASS2(h3d,mat,TextureFlags)
HX_DECLARE_CLASS1(hxd,PixelFormat)

namespace h3d{
namespace mat{


class HXCPP_CLASS_ATTRIBUTES TextureArray_obj : public  ::h3d::mat::Texture_obj
{
	public:
		typedef  ::h3d::mat::Texture_obj super;
		typedef TextureArray_obj OBJ_;
		TextureArray_obj();

	public:
		enum { _hx_ClassId = 0x18351109 };

		void __construct(int w,int h,int layers,::Array< ::Dynamic> flags, ::hxd::PixelFormat format);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.mat.TextureArray")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.mat.TextureArray"); }
		static ::hx::ObjectPtr< TextureArray_obj > __new(int w,int h,int layers,::Array< ::Dynamic> flags, ::hxd::PixelFormat format);
		static ::hx::ObjectPtr< TextureArray_obj > __alloc(::hx::Ctx *_hx_ctx,int w,int h,int layers,::Array< ::Dynamic> flags, ::hxd::PixelFormat format);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextureArray_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextureArray",de,66,41,e6); }

		int layers;
		int get_layerCount();

		 ::h3d::mat::Texture clone();

		virtual ::String toString();

};

} // end namespace h3d
} // end namespace mat

#endif /* INCLUDED_h3d_mat_TextureArray */ 
