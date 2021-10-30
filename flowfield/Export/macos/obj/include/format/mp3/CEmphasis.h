#ifndef INCLUDED_format_mp3_CEmphasis
#define INCLUDED_format_mp3_CEmphasis

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,mp3,CEmphasis)
HX_DECLARE_CLASS2(format,mp3,Emphasis)

namespace format{
namespace mp3{


class HXCPP_CLASS_ATTRIBUTES CEmphasis_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CEmphasis_obj OBJ_;
		CEmphasis_obj();

	public:
		enum { _hx_ClassId = 0x446503a6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="format.mp3.CEmphasis")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"format.mp3.CEmphasis"); }

		inline static ::hx::ObjectPtr< CEmphasis_obj > __new() {
			::hx::ObjectPtr< CEmphasis_obj > __this = new CEmphasis_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CEmphasis_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CEmphasis_obj *__this = (CEmphasis_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CEmphasis_obj), false, "format.mp3.CEmphasis"));
			*(void **)__this = CEmphasis_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CEmphasis_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CEmphasis",1f,dd,84,3e); }

		static void __boot();
		static int ENone;
		static int EMs50_15;
		static int EReserved;
		static int ECCIT_J17;
		static int enum2Num( ::format::mp3::Emphasis c);
		static ::Dynamic enum2Num_dyn();

		static  ::format::mp3::Emphasis num2Enum(int c);
		static ::Dynamic num2Enum_dyn();

};

} // end namespace format
} // end namespace mp3

#endif /* INCLUDED_format_mp3_CEmphasis */ 
