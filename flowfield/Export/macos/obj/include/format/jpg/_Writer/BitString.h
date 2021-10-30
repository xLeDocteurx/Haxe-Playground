#ifndef INCLUDED_format_jpg__Writer_BitString
#define INCLUDED_format_jpg__Writer_BitString

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_cfc383ae01af4196_647_new)
HX_DECLARE_CLASS3(format,jpg,_Writer,BitString)

namespace format{
namespace jpg{
namespace _Writer{


class HXCPP_CLASS_ATTRIBUTES BitString_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BitString_obj OBJ_;
		BitString_obj();

	public:
		enum { _hx_ClassId = 0x276b7ff6 };

		void __construct(int l,int v);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="format.jpg._Writer.BitString")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"format.jpg._Writer.BitString"); }

		inline static ::hx::ObjectPtr< BitString_obj > __new(int l,int v) {
			::hx::ObjectPtr< BitString_obj > __this = new BitString_obj();
			__this->__construct(l,v);
			return __this;
		}

		inline static ::hx::ObjectPtr< BitString_obj > __alloc(::hx::Ctx *_hx_ctx,int l,int v) {
			BitString_obj *__this = (BitString_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BitString_obj), false, "format.jpg._Writer.BitString"));
			*(void **)__this = BitString_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_cfc383ae01af4196_647_new)
HXLINE( 648)		( ( ::format::jpg::_Writer::BitString)(__this) )->len = l;
HXLINE( 649)		( ( ::format::jpg::_Writer::BitString)(__this) )->val = v;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BitString_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BitString",5e,4d,6c,f5); }

		int len;
		int val;
};

} // end namespace format
} // end namespace jpg
} // end namespace _Writer

#endif /* INCLUDED_format_jpg__Writer_BitString */ 
