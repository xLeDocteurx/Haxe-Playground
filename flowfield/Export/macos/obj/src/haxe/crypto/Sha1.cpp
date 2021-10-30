#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_Sha1
#include <haxe/crypto/Sha1.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b388adc1457cbfc2_48_new,"haxe.crypto.Sha1","new",0xdb44b09c,"haxe.crypto.Sha1.new","/usr/local/lib/haxe/std/haxe/crypto/Sha1.hx",48,0x02d96297)
HX_LOCAL_STACK_FRAME(_hx_pos_b388adc1457cbfc2_50_doEncode,"haxe.crypto.Sha1","doEncode",0xfb483e45,"haxe.crypto.Sha1.doEncode","/usr/local/lib/haxe/std/haxe/crypto/Sha1.hx",50,0x02d96297)
HX_LOCAL_STACK_FRAME(_hx_pos_b388adc1457cbfc2_142_ft,"haxe.crypto.Sha1","ft",0x7aab5492,"haxe.crypto.Sha1.ft","/usr/local/lib/haxe/std/haxe/crypto/Sha1.hx",142,0x02d96297)
HX_LOCAL_STACK_FRAME(_hx_pos_b388adc1457cbfc2_155_kt,"haxe.crypto.Sha1","kt",0x7aab58ed,"haxe.crypto.Sha1.kt","/usr/local/lib/haxe/std/haxe/crypto/Sha1.hx",155,0x02d96297)
HX_LOCAL_STACK_FRAME(_hx_pos_b388adc1457cbfc2_35_make,"haxe.crypto.Sha1","make",0x00298e32,"haxe.crypto.Sha1.make","/usr/local/lib/haxe/std/haxe/crypto/Sha1.hx",35,0x02d96297)
HX_LOCAL_STACK_FRAME(_hx_pos_b388adc1457cbfc2_115_bytes2blks,"haxe.crypto.Sha1","bytes2blks",0x985aae1d,"haxe.crypto.Sha1.bytes2blks","/usr/local/lib/haxe/std/haxe/crypto/Sha1.hx",115,0x02d96297)
namespace haxe{
namespace crypto{

void Sha1_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b388adc1457cbfc2_48_new)
            	}

Dynamic Sha1_obj::__CreateEmpty() { return new Sha1_obj; }

void *Sha1_obj::_hx_vtable = 0;

Dynamic Sha1_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Sha1_obj > _hx_result = new Sha1_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Sha1_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3a249b8c;
}

::Array< int > Sha1_obj::doEncode(::Array< int > x){
            	HX_STACKFRAME(&_hx_pos_b388adc1457cbfc2_50_doEncode)
HXLINE(  51)		::Array< int > w = ::Array_obj< int >::__new();
HXLINE(  53)		int a = (int)1732584193;
HXLINE(  54)		int b = -271733879;
HXLINE(  55)		int c = (int)-1732584194;
HXLINE(  56)		int d = 271733878;
HXLINE(  57)		int e = (int)-1009589776;
HXLINE(  59)		int i = 0;
HXLINE(  60)		while((i < x->length)){
HXLINE(  61)			int olda = a;
HXLINE(  62)			int oldb = b;
HXLINE(  63)			int oldc = c;
HXLINE(  64)			int oldd = d;
HXLINE(  65)			int olde = e;
HXLINE(  67)			int j = 0;
HXLINE(  68)			while((j < 80)){
HXLINE(  69)				if ((j < 16)) {
HXLINE(  70)					w[j] = x->__get((i + j));
            				}
            				else {
HXLINE(  72)					int num = (((w->__get((j - 3)) ^ w->__get((j - 8))) ^ w->__get((j - 14))) ^ w->__get((j - 16)));
HXDLIN(  72)					w[j] = ((num << 1) | ::hx::UShr(num,31));
            				}
HXLINE(  73)				int t = ((((a << 5) | ::hx::UShr(a,27)) + this->ft(j,b,c,d)) + e);
HXDLIN(  73)				int t1 = (t + w->__get(j));
HXDLIN(  73)				int t2 = (t1 + this->kt(j));
HXLINE(  74)				e = d;
HXLINE(  75)				d = c;
HXLINE(  76)				c = ((b << 30) | ::hx::UShr(b,2));
HXLINE(  77)				b = a;
HXLINE(  78)				a = t2;
HXLINE(  79)				j = (j + 1);
            			}
HXLINE(  81)			a = (a + olda);
HXLINE(  82)			b = (b + oldb);
HXLINE(  83)			c = (c + oldc);
HXLINE(  84)			d = (d + oldd);
HXLINE(  85)			e = (e + olde);
HXLINE(  86)			i = (i + 16);
            		}
HXLINE(  88)		return ::Array_obj< int >::__new(5)->init(0,a)->init(1,b)->init(2,c)->init(3,d)->init(4,e);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Sha1_obj,doEncode,return )

int Sha1_obj::ft(int t,int b,int c,int d){
            	HX_STACKFRAME(&_hx_pos_b388adc1457cbfc2_142_ft)
HXLINE( 143)		if ((t < 20)) {
HXLINE( 144)			return ((b & c) | (~(b) & d));
            		}
HXLINE( 145)		if ((t < 40)) {
HXLINE( 146)			return ((b ^ c) ^ d);
            		}
HXLINE( 147)		if ((t < 60)) {
HXLINE( 148)			return (((b & c) | (b & d)) | (c & d));
            		}
HXLINE( 149)		return ((b ^ c) ^ d);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Sha1_obj,ft,return )

int Sha1_obj::kt(int t){
            	HX_STACKFRAME(&_hx_pos_b388adc1457cbfc2_155_kt)
HXLINE( 156)		if ((t < 20)) {
HXLINE( 157)			return (int)1518500249;
            		}
HXLINE( 158)		if ((t < 40)) {
HXLINE( 159)			return (int)1859775393;
            		}
HXLINE( 160)		if ((t < 60)) {
HXLINE( 161)			return (int)-1894007588;
            		}
HXLINE( 162)		return -899497514;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Sha1_obj,kt,return )

 ::haxe::io::Bytes Sha1_obj::make( ::haxe::io::Bytes b){
            	HX_GC_STACKFRAME(&_hx_pos_b388adc1457cbfc2_35_make)
HXLINE(  36)		 ::haxe::crypto::Sha1 h =  ::haxe::crypto::Sha1_obj::__alloc( HX_CTX );
HXDLIN(  36)		::Array< int > h1 = h->doEncode(::haxe::crypto::Sha1_obj::bytes2blks(b));
HXLINE(  37)		 ::haxe::io::Bytes out = ::haxe::io::Bytes_obj::alloc(20);
HXLINE(  38)		int p = 0;
HXLINE(  39)		{
HXLINE(  39)			{
HXLINE(  40)				{
HXLINE(  40)					p = (p + 1);
HXDLIN(  40)					out->b[(p - 1)] = ( (unsigned char)(::hx::UShr(h1->__get(0),24)) );
            				}
HXLINE(  41)				{
HXLINE(  41)					p = (p + 1);
HXDLIN(  41)					out->b[(p - 1)] = ( (unsigned char)(((h1->__get(0) >> 16) & 255)) );
            				}
HXLINE(  42)				{
HXLINE(  42)					p = (p + 1);
HXDLIN(  42)					out->b[(p - 1)] = ( (unsigned char)(((h1->__get(0) >> 8) & 255)) );
            				}
HXLINE(  43)				{
HXLINE(  43)					p = (p + 1);
HXDLIN(  43)					out->b[(p - 1)] = ( (unsigned char)((h1->__get(0) & 255)) );
            				}
            			}
HXLINE(  39)			{
HXLINE(  40)				{
HXLINE(  40)					p = (p + 1);
HXDLIN(  40)					out->b[(p - 1)] = ( (unsigned char)(::hx::UShr(h1->__get(1),24)) );
            				}
HXLINE(  41)				{
HXLINE(  41)					p = (p + 1);
HXDLIN(  41)					out->b[(p - 1)] = ( (unsigned char)(((h1->__get(1) >> 16) & 255)) );
            				}
HXLINE(  42)				{
HXLINE(  42)					p = (p + 1);
HXDLIN(  42)					out->b[(p - 1)] = ( (unsigned char)(((h1->__get(1) >> 8) & 255)) );
            				}
HXLINE(  43)				{
HXLINE(  43)					p = (p + 1);
HXDLIN(  43)					out->b[(p - 1)] = ( (unsigned char)((h1->__get(1) & 255)) );
            				}
            			}
HXLINE(  39)			{
HXLINE(  40)				{
HXLINE(  40)					p = (p + 1);
HXDLIN(  40)					out->b[(p - 1)] = ( (unsigned char)(::hx::UShr(h1->__get(2),24)) );
            				}
HXLINE(  41)				{
HXLINE(  41)					p = (p + 1);
HXDLIN(  41)					out->b[(p - 1)] = ( (unsigned char)(((h1->__get(2) >> 16) & 255)) );
            				}
HXLINE(  42)				{
HXLINE(  42)					p = (p + 1);
HXDLIN(  42)					out->b[(p - 1)] = ( (unsigned char)(((h1->__get(2) >> 8) & 255)) );
            				}
HXLINE(  43)				{
HXLINE(  43)					p = (p + 1);
HXDLIN(  43)					out->b[(p - 1)] = ( (unsigned char)((h1->__get(2) & 255)) );
            				}
            			}
HXLINE(  39)			{
HXLINE(  40)				{
HXLINE(  40)					p = (p + 1);
HXDLIN(  40)					out->b[(p - 1)] = ( (unsigned char)(::hx::UShr(h1->__get(3),24)) );
            				}
HXLINE(  41)				{
HXLINE(  41)					p = (p + 1);
HXDLIN(  41)					out->b[(p - 1)] = ( (unsigned char)(((h1->__get(3) >> 16) & 255)) );
            				}
HXLINE(  42)				{
HXLINE(  42)					p = (p + 1);
HXDLIN(  42)					out->b[(p - 1)] = ( (unsigned char)(((h1->__get(3) >> 8) & 255)) );
            				}
HXLINE(  43)				{
HXLINE(  43)					p = (p + 1);
HXDLIN(  43)					out->b[(p - 1)] = ( (unsigned char)((h1->__get(3) & 255)) );
            				}
            			}
HXLINE(  39)			{
HXLINE(  40)				{
HXLINE(  40)					p = (p + 1);
HXDLIN(  40)					out->b[(p - 1)] = ( (unsigned char)(::hx::UShr(h1->__get(4),24)) );
            				}
HXLINE(  41)				{
HXLINE(  41)					p = (p + 1);
HXDLIN(  41)					out->b[(p - 1)] = ( (unsigned char)(((h1->__get(4) >> 16) & 255)) );
            				}
HXLINE(  42)				{
HXLINE(  42)					p = (p + 1);
HXDLIN(  42)					out->b[(p - 1)] = ( (unsigned char)(((h1->__get(4) >> 8) & 255)) );
            				}
HXLINE(  43)				{
HXLINE(  43)					p = (p + 1);
HXDLIN(  43)					out->b[(p - 1)] = ( (unsigned char)((h1->__get(4) & 255)) );
            				}
            			}
            		}
HXLINE(  45)		return out;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sha1_obj,make,return )

::Array< int > Sha1_obj::bytes2blks( ::haxe::io::Bytes b){
            	HX_STACKFRAME(&_hx_pos_b388adc1457cbfc2_115_bytes2blks)
HXLINE( 116)		int nblk = (((b->length + 8) >> 6) + 1);
HXLINE( 117)		::Array< int > blks = ::Array_obj< int >::__new();
HXLINE( 119)		{
HXLINE( 119)			int _g = 0;
HXDLIN( 119)			int _g1 = (nblk * 16);
HXDLIN( 119)			while((_g < _g1)){
HXLINE( 119)				_g = (_g + 1);
HXDLIN( 119)				int i = (_g - 1);
HXLINE( 120)				blks[i] = 0;
            			}
            		}
HXLINE( 121)		{
HXLINE( 121)			int _g2 = 0;
HXDLIN( 121)			int _g3 = b->length;
HXDLIN( 121)			while((_g2 < _g3)){
HXLINE( 121)				_g2 = (_g2 + 1);
HXDLIN( 121)				int i = (_g2 - 1);
HXLINE( 122)				int p = (i >> 2);
HXLINE( 123)				::Array< int > blks1 = blks;
HXDLIN( 123)				int p1 = p;
HXDLIN( 123)				blks1[p1] = (blks1->__get(p1) | (( (int)(b->b->__get(i)) ) << (24 - ((i & 3) << 3))));
            			}
            		}
HXLINE( 125)		int i = b->length;
HXLINE( 126)		int p = (i >> 2);
HXLINE( 127)		::Array< int > blks1 = blks;
HXDLIN( 127)		int p1 = p;
HXDLIN( 127)		blks1[p1] = (blks1->__get(p1) | (128 << (24 - ((i & 3) << 3))));
HXLINE( 128)		blks[((nblk * 16) - 1)] = (b->length * 8);
HXLINE( 129)		return blks;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sha1_obj,bytes2blks,return )


Sha1_obj::Sha1_obj()
{
}

::hx::Val Sha1_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ft") ) { return ::hx::Val( ft_dyn() ); }
		if (HX_FIELD_EQ(inName,"kt") ) { return ::hx::Val( kt_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"doEncode") ) { return ::hx::Val( doEncode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Sha1_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { outValue = make_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytes2blks") ) { outValue = bytes2blks_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Sha1_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Sha1_obj_sStaticStorageInfo = 0;
#endif

static ::String Sha1_obj_sMemberFields[] = {
	HX_("doEncode",01,78,fb,8d),
	HX_("ft",4e,59,00,00),
	HX_("kt",a9,5d,00,00),
	::String(null()) };

::hx::Class Sha1_obj::__mClass;

static ::String Sha1_obj_sStaticFields[] = {
	HX_("make",ee,39,56,48),
	HX_("bytes2blks",d9,ce,9c,a9),
	::String(null())
};

void Sha1_obj::__register()
{
	Sha1_obj _hx_dummy;
	Sha1_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.crypto.Sha1",aa,72,c9,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sha1_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Sha1_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Sha1_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Sha1_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sha1_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sha1_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace crypto
