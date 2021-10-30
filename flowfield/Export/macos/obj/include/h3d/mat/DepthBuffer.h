#ifndef INCLUDED_h3d_mat_DepthBuffer
#define INCLUDED_h3d_mat_DepthBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,mat,DepthBuffer)
HX_DECLARE_CLASS2(h3d,mat,DepthFormat)

namespace h3d{
namespace mat{


class HXCPP_CLASS_ATTRIBUTES DepthBuffer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DepthBuffer_obj OBJ_;
		DepthBuffer_obj();

	public:
		enum { _hx_ClassId = 0x4b19565c };

		void __construct(int width,int height, ::h3d::mat::DepthFormat format);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.mat.DepthBuffer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.mat.DepthBuffer"); }
		static ::hx::ObjectPtr< DepthBuffer_obj > __new(int width,int height, ::h3d::mat::DepthFormat format);
		static ::hx::ObjectPtr< DepthBuffer_obj > __alloc(::hx::Ctx *_hx_ctx,int width,int height, ::h3d::mat::DepthFormat format);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DepthBuffer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DepthBuffer",43,de,d0,36); }

		static  ::h3d::mat::DepthBuffer getDefault();
		static ::Dynamic getDefault_dyn();

		 ::Dynamic b;
		int width;
		int height;
		 ::h3d::mat::DepthFormat format;
		bool hasStencil();
		::Dynamic hasStencil_dyn();

		void alloc();
		::Dynamic alloc_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		bool isDisposed();
		::Dynamic isDisposed_dyn();

};

} // end namespace h3d
} // end namespace mat

#endif /* INCLUDED_h3d_mat_DepthBuffer */ 
