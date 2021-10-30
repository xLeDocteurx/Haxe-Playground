#ifndef INCLUDED_h2d_Tile
#define INCLUDED_h2d_Tile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h2d,Tile)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS1(hxd,BitmapData)
HX_DECLARE_CLASS1(hxd,Pixels)

namespace h2d{


class HXCPP_CLASS_ATTRIBUTES Tile_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Tile_obj OBJ_;
		Tile_obj();

	public:
		enum { _hx_ClassId = 0x5c202744 };

		void __construct( ::h3d::mat::Texture tex,Float x,Float y,Float w,Float h,::hx::Null< Float >  __o_dx,::hx::Null< Float >  __o_dy);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h2d.Tile")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h2d.Tile"); }
		static ::hx::ObjectPtr< Tile_obj > __new( ::h3d::mat::Texture tex,Float x,Float y,Float w,Float h,::hx::Null< Float >  __o_dx,::hx::Null< Float >  __o_dy);
		static ::hx::ObjectPtr< Tile_obj > __alloc(::hx::Ctx *_hx_ctx, ::h3d::mat::Texture tex,Float x,Float y,Float w,Float h,::hx::Null< Float >  __o_dx,::hx::Null< Float >  __o_dy);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tile_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tile",4e,f7,d5,37); }

		static  ::h2d::Tile fromColor(int color, ::Dynamic width, ::Dynamic height, ::Dynamic alpha);
		static ::Dynamic fromColor_dyn();

		static  ::h2d::Tile fromBitmap( ::hxd::BitmapData bmp);
		static ::Dynamic fromBitmap_dyn();

		static  ::Dynamic autoCut( ::hxd::BitmapData bmp,int width, ::Dynamic height);
		static ::Dynamic autoCut_dyn();

		static  ::h2d::Tile fromTexture( ::h3d::mat::Texture t);
		static ::Dynamic fromTexture_dyn();

		static  ::h2d::Tile fromPixels( ::hxd::Pixels pixels);
		static ::Dynamic fromPixels_dyn();

		static  ::Dynamic isEmpty( ::hxd::BitmapData b,int px,int py,int width,int height,int bg);
		static ::Dynamic isEmpty_dyn();

		 ::h3d::mat::Texture innerTex;
		Float u;
		Float v;
		Float u2;
		Float v2;
		Float dx;
		Float dy;
		Float x;
		Float y;
		Float width;
		Float height;
		int get_ix();
		::Dynamic get_ix_dyn();

		int get_iy();
		::Dynamic get_iy_dyn();

		int get_iwidth();
		::Dynamic get_iwidth_dyn();

		int get_iheight();
		::Dynamic get_iheight_dyn();

		 ::h3d::mat::Texture getTexture();
		::Dynamic getTexture_dyn();

		bool isDisposed();
		::Dynamic isDisposed_dyn();

		void setTexture( ::h3d::mat::Texture tex);
		::Dynamic setTexture_dyn();

		void switchTexture( ::h2d::Tile t);
		::Dynamic switchTexture_dyn();

		 ::h2d::Tile sub(Float x,Float y,Float w,Float h,::hx::Null< Float >  dx,::hx::Null< Float >  dy);
		::Dynamic sub_dyn();

		 ::h2d::Tile center();
		::Dynamic center_dyn();

		void setCenterRatio( ::Dynamic px, ::Dynamic py);
		::Dynamic setCenterRatio_dyn();

		void flipX();
		::Dynamic flipX_dyn();

		void flipY();
		::Dynamic flipY_dyn();

		void setPosition(Float x,Float y);
		::Dynamic setPosition_dyn();

		void setSize(Float w,Float h);
		::Dynamic setSize_dyn();

		void scaleToSize(Float w,Float h);
		::Dynamic scaleToSize_dyn();

		void scrollDiscrete(Float dx,Float dy);
		::Dynamic scrollDiscrete_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		 ::h2d::Tile clone();
		::Dynamic clone_dyn();

		bool get_xFlip();
		::Dynamic get_xFlip_dyn();

		bool get_yFlip();
		::Dynamic get_yFlip_dyn();

		bool set_xFlip(bool v);
		::Dynamic set_xFlip_dyn();

		bool set_yFlip(bool v);
		::Dynamic set_yFlip_dyn();

		::Array< ::Dynamic> split(::hx::Null< int >  frames,::hx::Null< bool >  vertical,::hx::Null< bool >  subpixel);
		::Dynamic split_dyn();

		::Array< ::Dynamic> gridFlatten(Float size,::hx::Null< Float >  dx,::hx::Null< Float >  dy);
		::Dynamic gridFlatten_dyn();

		::Array< ::Dynamic> grid(Float size,::hx::Null< Float >  dx,::hx::Null< Float >  dy);
		::Dynamic grid_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		void upload( ::hxd::BitmapData bmp);
		::Dynamic upload_dyn();

};

} // end namespace h2d

#endif /* INCLUDED_h2d_Tile */ 
