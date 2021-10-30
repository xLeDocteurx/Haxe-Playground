#ifndef INCLUDED_h3d_impl_ManagedBuffer
#define INCLUDED_h3d_impl_ManagedBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Buffer)
HX_DECLARE_CLASS1(h3d,BufferFlag)
HX_DECLARE_CLASS2(h3d,impl,ManagedBuffer)
HX_DECLARE_CLASS2(h3d,impl,MemoryManager)
HX_DECLARE_CLASS3(h3d,impl,_ManagedBuffer,FreeCell)
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace h3d{
namespace impl{


class HXCPP_CLASS_ATTRIBUTES ManagedBuffer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ManagedBuffer_obj OBJ_;
		ManagedBuffer_obj();

	public:
		enum { _hx_ClassId = 0x13f0e1ee };

		void __construct(int stride,int size,::Array< ::Dynamic> flags);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.impl.ManagedBuffer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.impl.ManagedBuffer"); }
		static ::hx::ObjectPtr< ManagedBuffer_obj > __new(int stride,int size,::Array< ::Dynamic> flags);
		static ::hx::ObjectPtr< ManagedBuffer_obj > __alloc(::hx::Ctx *_hx_ctx,int stride,int size,::Array< ::Dynamic> flags);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ManagedBuffer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ManagedBuffer",9f,a4,cb,d3); }

		 ::h3d::impl::MemoryManager mem;
		int stride;
		int size;
		int flags;
		 ::Dynamic vbuf;
		 ::h3d::impl::_ManagedBuffer::FreeCell freeList;
		 ::h3d::impl::ManagedBuffer next;
		void uploadVertexBuffer(int start,int vertices,::Array< Float > buf,::hx::Null< int >  bufPos);
		::Dynamic uploadVertexBuffer_dyn();

		void uploadVertexBytes(int start,int vertices, ::haxe::io::Bytes data,::hx::Null< int >  dataPos);
		::Dynamic uploadVertexBytes_dyn();

		void readVertexBytes(int start,int vertices, ::haxe::io::Bytes data,::hx::Null< int >  dataPos);
		::Dynamic readVertexBytes_dyn();

		 ::h3d::Buffer alloc(int vertices,int align);
		::Dynamic alloc_dyn();

		int getFreeVertices();
		::Dynamic getFreeVertices_dyn();

		int allocPosition(int nvert,int align);
		::Dynamic allocPosition_dyn();

		bool allocBuffer( ::h3d::Buffer b);
		::Dynamic allocBuffer_dyn();

		void freeBuffer( ::h3d::Buffer b);
		::Dynamic freeBuffer_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		bool isDisposed();
		::Dynamic isDisposed_dyn();

};

} // end namespace h3d
} // end namespace impl

#endif /* INCLUDED_h3d_impl_ManagedBuffer */ 
