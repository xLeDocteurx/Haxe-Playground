#ifndef INCLUDED_h3d_impl_InstanceBuffer
#define INCLUDED_h3d_impl_InstanceBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,impl,Driver)
HX_DECLARE_CLASS2(h3d,impl,InstanceBuffer)
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace h3d{
namespace impl{


class HXCPP_CLASS_ATTRIBUTES InstanceBuffer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef InstanceBuffer_obj OBJ_;
		InstanceBuffer_obj();

	public:
		enum { _hx_ClassId = 0x7684162e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.impl.InstanceBuffer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.impl.InstanceBuffer"); }
		static ::hx::ObjectPtr< InstanceBuffer_obj > __new();
		static ::hx::ObjectPtr< InstanceBuffer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~InstanceBuffer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("InstanceBuffer",95,42,7f,75); }

		 ::Dynamic data;
		 ::h3d::impl::Driver driver;
		int indexCount;
		int triCount;
		int commandCount;
		void setCommand(int commandCount,int indexCount);
		::Dynamic setCommand_dyn();

		void setBuffer(int commandCount, ::haxe::io::Bytes bytes);
		::Dynamic setBuffer_dyn();

		void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace h3d
} // end namespace impl

#endif /* INCLUDED_h3d_impl_InstanceBuffer */ 
