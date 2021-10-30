#ifndef INCLUDED_h3d_impl_NullDriver
#define INCLUDED_h3d_impl_NullDriver

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_impl_Driver
#include <h3d/impl/Driver.h>
#endif
HX_DECLARE_CLASS2(h3d,impl,Driver)
HX_DECLARE_CLASS2(h3d,impl,Feature)
HX_DECLARE_CLASS2(h3d,impl,InputNames)
HX_DECLARE_CLASS2(h3d,impl,ManagedBuffer)
HX_DECLARE_CLASS2(h3d,impl,NullDriver)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS1(hxd,PixelFormat)
HX_DECLARE_CLASS1(hxsl,RuntimeShader)

namespace h3d{
namespace impl{


class HXCPP_CLASS_ATTRIBUTES NullDriver_obj : public  ::h3d::impl::Driver_obj
{
	public:
		typedef  ::h3d::impl::Driver_obj super;
		typedef NullDriver_obj OBJ_;
		NullDriver_obj();

	public:
		enum { _hx_ClassId = 0x7faa8948 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.impl.NullDriver")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.impl.NullDriver"); }
		static ::hx::ObjectPtr< NullDriver_obj > __new();
		static ::hx::ObjectPtr< NullDriver_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NullDriver_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NullDriver",2f,b6,0f,c5); }

		 ::hxsl::RuntimeShader cur;
		bool hasFeature( ::h3d::impl::Feature f);

		bool isSupportedFormat( ::hxd::PixelFormat fmt);

		void logImpl(::String str);

		bool isDisposed();

		::String getDriverName(bool details);

		void init( ::Dynamic onCreate,::hx::Null< bool >  forceSoftware);

		bool selectShader( ::hxsl::RuntimeShader shader);

		 ::h3d::impl::InputNames getShaderInputNames();

		 ::Dynamic allocTexture( ::h3d::mat::Texture t);

		 ::Dynamic allocIndexes(int count,bool is32);

		 ::Dynamic allocVertexes( ::h3d::impl::ManagedBuffer m);

};

} // end namespace h3d
} // end namespace impl

#endif /* INCLUDED_h3d_impl_NullDriver */ 
