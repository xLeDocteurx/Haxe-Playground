#ifndef INCLUDED_haxe_crypto_Sha1
#define INCLUDED_haxe_crypto_Sha1

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_b388adc1457cbfc2_48_new)
HX_DECLARE_CLASS2(haxe,crypto,Sha1)
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace haxe{
namespace crypto{


class HXCPP_CLASS_ATTRIBUTES Sha1_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Sha1_obj OBJ_;
		Sha1_obj();

	public:
		enum { _hx_ClassId = 0x3a249b8c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.crypto.Sha1")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.crypto.Sha1"); }

		inline static ::hx::ObjectPtr< Sha1_obj > __new() {
			::hx::ObjectPtr< Sha1_obj > __this = new Sha1_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Sha1_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Sha1_obj *__this = (Sha1_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Sha1_obj), false, "haxe.crypto.Sha1"));
			*(void **)__this = Sha1_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_b388adc1457cbfc2_48_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Sha1_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Sha1",a5,f4,2b,37); }

		static  ::haxe::io::Bytes make( ::haxe::io::Bytes b);
		static ::Dynamic make_dyn();

		static ::Array< int > bytes2blks( ::haxe::io::Bytes b);
		static ::Dynamic bytes2blks_dyn();

		::Array< int > doEncode(::Array< int > x);
		::Dynamic doEncode_dyn();

		int ft(int t,int b,int c,int d);
		::Dynamic ft_dyn();

		int kt(int t);
		::Dynamic kt_dyn();

};

} // end namespace haxe
} // end namespace crypto

#endif /* INCLUDED_haxe_crypto_Sha1 */ 
