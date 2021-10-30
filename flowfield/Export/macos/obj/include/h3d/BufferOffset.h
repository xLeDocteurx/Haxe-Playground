#ifndef INCLUDED_h3d_BufferOffset
#define INCLUDED_h3d_BufferOffset

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Buffer)
HX_DECLARE_CLASS1(h3d,BufferOffset)

namespace h3d{


class HXCPP_CLASS_ATTRIBUTES BufferOffset_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BufferOffset_obj OBJ_;
		BufferOffset_obj();

	public:
		enum { _hx_ClassId = 0x7992c5cc };

		void __construct( ::h3d::Buffer buffer,int offset);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.BufferOffset")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.BufferOffset"); }
		static ::hx::ObjectPtr< BufferOffset_obj > __new( ::h3d::Buffer buffer,int offset);
		static ::hx::ObjectPtr< BufferOffset_obj > __alloc(::hx::Ctx *_hx_ctx, ::h3d::Buffer buffer,int offset);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BufferOffset_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BufferOffset",d3,d4,26,2d); }

		 ::h3d::Buffer buffer;
		int offset;
		 ::h3d::BufferOffset next;
		 ::h3d::BufferOffset clone();
		::Dynamic clone_dyn();

		void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace h3d

#endif /* INCLUDED_h3d_BufferOffset */ 
