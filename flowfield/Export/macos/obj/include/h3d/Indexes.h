#ifndef INCLUDED_h3d_Indexes
#define INCLUDED_h3d_Indexes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Indexes)
HX_DECLARE_CLASS2(h3d,impl,MemoryManager)
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace h3d{


class HXCPP_CLASS_ATTRIBUTES Indexes_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Indexes_obj OBJ_;
		Indexes_obj();

	public:
		enum { _hx_ClassId = 0x08869ceb };

		void __construct(int count,::hx::Null< bool >  __o_is32);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.Indexes")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.Indexes"); }
		static ::hx::ObjectPtr< Indexes_obj > __new(int count,::hx::Null< bool >  __o_is32);
		static ::hx::ObjectPtr< Indexes_obj > __alloc(::hx::Ctx *_hx_ctx,int count,::hx::Null< bool >  __o_is32);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Indexes_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Indexes",e0,83,10,ae); }

		static  ::h3d::Indexes alloc(::Array< int > i,::hx::Null< int >  startPos,::hx::Null< int >  length);
		static ::Dynamic alloc_dyn();

		 ::h3d::impl::MemoryManager mem;
		 ::Dynamic ibuf;
		bool is32;
		int count;
		bool isDisposed();
		::Dynamic isDisposed_dyn();

		void upload(::Array< int > indexes,int pos,int count,::hx::Null< int >  bufferPos);
		::Dynamic upload_dyn();

		void uploadBytes( ::haxe::io::Bytes bytes,int dataPos,int indices);
		::Dynamic uploadBytes_dyn();

		void readBytes( ::haxe::io::Bytes bytes,int bytesPosition,int indices,::hx::Null< int >  startIndice);
		::Dynamic readBytes_dyn();

		void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace h3d

#endif /* INCLUDED_h3d_Indexes */ 
