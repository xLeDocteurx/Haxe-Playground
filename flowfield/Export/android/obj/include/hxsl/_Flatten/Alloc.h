#ifndef INCLUDED_hxsl__Flatten_Alloc
#define INCLUDED_hxsl__Flatten_Alloc

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,VecType)
HX_DECLARE_CLASS2(hxsl,_Flatten,Alloc)

namespace hxsl{
namespace _Flatten{


class HXCPP_CLASS_ATTRIBUTES Alloc_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Alloc_obj OBJ_;
		Alloc_obj();

	public:
		enum { _hx_ClassId = 0x0582c3c7 };

		void __construct( ::Dynamic g, ::hxsl::VecType t,int pos,int size);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl._Flatten.Alloc")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl._Flatten.Alloc"); }
		static ::hx::ObjectPtr< Alloc_obj > __new( ::Dynamic g, ::hxsl::VecType t,int pos,int size);
		static ::hx::ObjectPtr< Alloc_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic g, ::hxsl::VecType t,int pos,int size);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Alloc_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Alloc",55,14,c1,b4); }

		 ::hxsl::VecType t;
		int pos;
		int size;
		 ::Dynamic g;
		 ::Dynamic v;
};

} // end namespace hxsl
} // end namespace _Flatten

#endif /* INCLUDED_hxsl__Flatten_Alloc */ 
