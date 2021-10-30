#ifndef INCLUDED_h3d_Buffer
#define INCLUDED_h3d_Buffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Buffer)
HX_DECLARE_CLASS1(h3d,BufferFlag)
HX_DECLARE_CLASS2(h3d,impl,ManagedBuffer)
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace h3d{


class HXCPP_CLASS_ATTRIBUTES Buffer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Buffer_obj OBJ_;
		Buffer_obj();

	public:
		enum { _hx_ClassId = 0x28edb159 };

		void __construct(int vertices,int stride,::Array< ::Dynamic> flags);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.Buffer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.Buffer"); }
		static ::hx::ObjectPtr< Buffer_obj > __new(int vertices,int stride,::Array< ::Dynamic> flags);
		static ::hx::ObjectPtr< Buffer_obj > __alloc(::hx::Ctx *_hx_ctx,int vertices,int stride,::Array< ::Dynamic> flags);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Buffer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Buffer",20,31,29,05); }

		static void __boot();
		static int GUID;
		static  ::h3d::Buffer ofFloats(::Array< Float > v,int stride,::Array< ::Dynamic> flags);
		static ::Dynamic ofFloats_dyn();

		static  ::h3d::Buffer ofSubFloats(::Array< Float > v,int stride,int vertices,::Array< ::Dynamic> flags);
		static ::Dynamic ofSubFloats_dyn();

		int id;
		 ::h3d::impl::ManagedBuffer buffer;
		int position;
		int vertices;
		 ::h3d::Buffer next;
		int flags;
		bool isDisposed();
		::Dynamic isDisposed_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		int totalVertices();
		::Dynamic totalVertices_dyn();

		void uploadVector(::Array< Float > buf,int bufPos,int vertices,::hx::Null< int >  startVertice);
		::Dynamic uploadVector_dyn();

		void uploadBytes( ::haxe::io::Bytes data,int dataPos,int vertices);
		::Dynamic uploadBytes_dyn();

		void readBytes( ::haxe::io::Bytes bytes,int bytesPosition,int vertices,::hx::Null< int >  startVertice);
		::Dynamic readBytes_dyn();

};

} // end namespace h3d

#endif /* INCLUDED_h3d_Buffer */ 
