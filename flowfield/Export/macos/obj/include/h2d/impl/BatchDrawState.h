#ifndef INCLUDED_h2d_impl_BatchDrawState
#define INCLUDED_h2d_impl_BatchDrawState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h2d,RenderContext)
HX_DECLARE_CLASS1(h2d,Tile)
HX_DECLARE_CLASS2(h2d,impl,BatchDrawState)
HX_DECLARE_CLASS3(h2d,impl,_BatchDrawState,StateEntry)
HX_DECLARE_CLASS1(h3d,Buffer)
HX_DECLARE_CLASS1(h3d,Indexes)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS2(h3d,mat,Texture)

namespace h2d{
namespace impl{


class HXCPP_CLASS_ATTRIBUTES BatchDrawState_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BatchDrawState_obj OBJ_;
		BatchDrawState_obj();

	public:
		enum { _hx_ClassId = 0x10082e09 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h2d.impl.BatchDrawState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h2d.impl.BatchDrawState"); }
		static ::hx::ObjectPtr< BatchDrawState_obj > __new();
		static ::hx::ObjectPtr< BatchDrawState_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BatchDrawState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BatchDrawState",73,70,8a,4b); }

		int totalCount;
		 ::h2d::impl::_BatchDrawState::StateEntry head;
		 ::h2d::impl::_BatchDrawState::StateEntry tail;
		void setTile( ::h2d::Tile tile);
		::Dynamic setTile_dyn();

		void setTexture( ::h3d::mat::Texture texture);
		::Dynamic setTexture_dyn();

		void add(int count);
		::Dynamic add_dyn();

		void clear();
		::Dynamic clear_dyn();

		void drawQuads( ::h2d::RenderContext ctx, ::h3d::Buffer buffer,::hx::Null< int >  offset,::hx::Null< int >  length);
		::Dynamic drawQuads_dyn();

		void drawIndexed( ::h2d::RenderContext ctx, ::h3d::Buffer buffer, ::h3d::Indexes indices,::hx::Null< int >  offset,::hx::Null< int >  length);
		::Dynamic drawIndexed_dyn();

		 ::h3d::mat::Texture get_currentTexture();
		::Dynamic get_currentTexture_dyn();

};

} // end namespace h2d
} // end namespace impl

#endif /* INCLUDED_h2d_impl_BatchDrawState */ 
