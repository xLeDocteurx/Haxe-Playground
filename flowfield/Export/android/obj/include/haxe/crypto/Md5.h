#ifndef INCLUDED_haxe_crypto_Md5
#define INCLUDED_haxe_crypto_Md5

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_589f0278920cc1da_55_new)
HX_DECLARE_CLASS2(haxe,crypto,Md5)

namespace haxe{
namespace crypto{


class HXCPP_CLASS_ATTRIBUTES Md5_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Md5_obj OBJ_;
		Md5_obj();

	public:
		enum { _hx_ClassId = 0x49b6b7d7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.crypto.Md5")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.crypto.Md5"); }

		inline static ::hx::ObjectPtr< Md5_obj > __new() {
			::hx::ObjectPtr< Md5_obj > __this = new Md5_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Md5_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Md5_obj *__this = (Md5_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Md5_obj), false, "haxe.crypto.Md5"));
			*(void **)__this = Md5_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_589f0278920cc1da_55_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Md5_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Md5",de,c4,3a,00); }

		static ::String encode(::String s);
		static ::Dynamic encode_dyn();

		static ::Array< int > str2blks(::String str);
		static ::Dynamic str2blks_dyn();

		int bitOR(int a,int b);
		::Dynamic bitOR_dyn();

		int bitXOR(int a,int b);
		::Dynamic bitXOR_dyn();

		int bitAND(int a,int b);
		::Dynamic bitAND_dyn();

		int addme(int x,int y);
		::Dynamic addme_dyn();

		::String hex(::Array< int > a);
		::Dynamic hex_dyn();

		int rol(int num,int cnt);
		::Dynamic rol_dyn();

		int cmn(int q,int a,int b,int x,int s,int t);
		::Dynamic cmn_dyn();

		int ff(int a,int b,int c,int d,int x,int s,int t);
		::Dynamic ff_dyn();

		int gg(int a,int b,int c,int d,int x,int s,int t);
		::Dynamic gg_dyn();

		int hh(int a,int b,int c,int d,int x,int s,int t);
		::Dynamic hh_dyn();

		int ii(int a,int b,int c,int d,int x,int s,int t);
		::Dynamic ii_dyn();

		::Array< int > doEncode(::Array< int > x);
		::Dynamic doEncode_dyn();

};

} // end namespace haxe
} // end namespace crypto

#endif /* INCLUDED_haxe_crypto_Md5 */ 
