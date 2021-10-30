#ifndef INCLUDED_hxd_CustomCursor
#define INCLUDED_hxd_CustomCursor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxd,BitmapData)
HX_DECLARE_CLASS1(hxd,CustomCursor)

namespace hxd{


class HXCPP_CLASS_ATTRIBUTES CustomCursor_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CustomCursor_obj OBJ_;
		CustomCursor_obj();

	public:
		enum { _hx_ClassId = 0x02ff37db };

		void __construct(::Array< ::Dynamic> frames,Float speed,int offsetX,int offsetY);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.CustomCursor")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.CustomCursor"); }
		static ::hx::ObjectPtr< CustomCursor_obj > __new(::Array< ::Dynamic> frames,Float speed,int offsetX,int offsetY);
		static ::hx::ObjectPtr< CustomCursor_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> frames,Float speed,int offsetX,int offsetY);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CustomCursor_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CustomCursor",87,31,98,06); }

		::Array< ::Dynamic> frames;
		Float speed;
		int offsetX;
		int offsetY;
		 ::Dynamic alloc;
		void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace hxd

#endif /* INCLUDED_hxd_CustomCursor */ 
