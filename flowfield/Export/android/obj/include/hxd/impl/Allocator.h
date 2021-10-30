#ifndef INCLUDED_hxd_impl_Allocator
#define INCLUDED_hxd_impl_Allocator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Buffer)
HX_DECLARE_CLASS1(h3d,Indexes)
HX_DECLARE_CLASS2(hxd,impl,Allocator)

namespace hxd{
namespace impl{


class HXCPP_CLASS_ATTRIBUTES Allocator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Allocator_obj OBJ_;
		Allocator_obj();

	public:
		enum { _hx_ClassId = 0x056b488f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.impl.Allocator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.impl.Allocator"); }
		static ::hx::ObjectPtr< Allocator_obj > __new();
		static ::hx::ObjectPtr< Allocator_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Allocator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Allocator",ab,7b,60,de); }

		static  ::hxd::impl::Allocator inst;
		static void set( ::hxd::impl::Allocator a);
		static ::Dynamic set_dyn();

		static  ::hxd::impl::Allocator get();
		static ::Dynamic get_dyn();

		 ::h3d::Buffer allocBuffer(int vertices,int stride,int flags);
		::Dynamic allocBuffer_dyn();

		 ::h3d::Buffer ofFloats(::Array< Float > v,int stride,int flags);
		::Dynamic ofFloats_dyn();

		void disposeBuffer( ::h3d::Buffer b);
		::Dynamic disposeBuffer_dyn();

		 ::h3d::Indexes allocIndexBuffer(int count);
		::Dynamic allocIndexBuffer_dyn();

		 ::h3d::Indexes ofIndexes(::Array< int > ib,::hx::Null< int >  length);
		::Dynamic ofIndexes_dyn();

		void disposeIndexBuffer( ::h3d::Indexes i);
		::Dynamic disposeIndexBuffer_dyn();

		void onContextLost();
		::Dynamic onContextLost_dyn();

		::Array< Float > allocFloats(int count);
		::Dynamic allocFloats_dyn();

		void disposeFloats(::Array< Float > f);
		::Dynamic disposeFloats_dyn();

		::Array< int > allocIndexes(int count);
		::Dynamic allocIndexes_dyn();

		void disposeIndexes(::Array< int > i);
		::Dynamic disposeIndexes_dyn();

};

} // end namespace hxd
} // end namespace impl

#endif /* INCLUDED_hxd_impl_Allocator */ 
