#ifndef INCLUDED_format_mp3_CLayer
#define INCLUDED_format_mp3_CLayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,mp3,CLayer)
HX_DECLARE_CLASS2(format,mp3,Layer)

namespace format{
namespace mp3{


class HXCPP_CLASS_ATTRIBUTES CLayer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CLayer_obj OBJ_;
		CLayer_obj();

	public:
		enum { _hx_ClassId = 0x20a0ada7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="format.mp3.CLayer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"format.mp3.CLayer"); }

		inline static ::hx::ObjectPtr< CLayer_obj > __new() {
			::hx::ObjectPtr< CLayer_obj > __this = new CLayer_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CLayer_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CLayer_obj *__this = (CLayer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CLayer_obj), false, "format.mp3.CLayer"));
			*(void **)__this = CLayer_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CLayer_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CLayer",8e,1e,d7,cc); }

		static void __boot();
		static int LReserved;
		static int LLayer3;
		static int LLayer2;
		static int LLayer1;
		static int enum2Num( ::format::mp3::Layer l);
		static ::Dynamic enum2Num_dyn();

		static  ::format::mp3::Layer num2Enum(int l);
		static ::Dynamic num2Enum_dyn();

};

} // end namespace format
} // end namespace mp3

#endif /* INCLUDED_format_mp3_CLayer */ 
