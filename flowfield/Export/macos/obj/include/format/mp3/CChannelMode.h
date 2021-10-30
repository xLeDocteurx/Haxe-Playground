#ifndef INCLUDED_format_mp3_CChannelMode
#define INCLUDED_format_mp3_CChannelMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,mp3,CChannelMode)
HX_DECLARE_CLASS2(format,mp3,ChannelMode)

namespace format{
namespace mp3{


class HXCPP_CLASS_ATTRIBUTES CChannelMode_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CChannelMode_obj OBJ_;
		CChannelMode_obj();

	public:
		enum { _hx_ClassId = 0x6e5e6254 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="format.mp3.CChannelMode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"format.mp3.CChannelMode"); }

		inline static ::hx::ObjectPtr< CChannelMode_obj > __new() {
			::hx::ObjectPtr< CChannelMode_obj > __this = new CChannelMode_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CChannelMode_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CChannelMode_obj *__this = (CChannelMode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CChannelMode_obj), false, "format.mp3.CChannelMode"));
			*(void **)__this = CChannelMode_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CChannelMode_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CChannelMode",43,66,7b,31); }

		static void __boot();
		static int CStereo;
		static int CJointStereo;
		static int CDualChannel;
		static int CMono;
		static int enum2Num( ::format::mp3::ChannelMode c);
		static ::Dynamic enum2Num_dyn();

		static  ::format::mp3::ChannelMode num2Enum(int c);
		static ::Dynamic num2Enum_dyn();

};

} // end namespace format
} // end namespace mp3

#endif /* INCLUDED_format_mp3_CChannelMode */ 
