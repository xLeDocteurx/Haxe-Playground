#include <hxcpp.h>

#ifndef INCLUDED_format_tools_BitsInput
#include <format/tools/BitsInput.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3c3f3afe156df4fc_35_new,"format.tools.BitsInput","new",0x7a7265ac,"format.tools.BitsInput.new","format/tools/BitsInput.hx",35,0x82748506)
HX_LOCAL_STACK_FRAME(_hx_pos_3c3f3afe156df4fc_41_readBits,"format.tools.BitsInput","readBits",0x12138cb0,"format.tools.BitsInput.readBits","format/tools/BitsInput.hx",41,0x82748506)
HX_LOCAL_STACK_FRAME(_hx_pos_3c3f3afe156df4fc_63_readBit,"format.tools.BitsInput","readBit",0x5ac58a63,"format.tools.BitsInput.readBit","format/tools/BitsInput.hx",63,0x82748506)
HX_LOCAL_STACK_FRAME(_hx_pos_3c3f3afe156df4fc_73_reset,"format.tools.BitsInput","reset",0x15afca1b,"format.tools.BitsInput.reset","format/tools/BitsInput.hx",73,0x82748506)
namespace format{
namespace tools{

void BitsInput_obj::__construct( ::haxe::io::Input i){
            	HX_STACKFRAME(&_hx_pos_3c3f3afe156df4fc_35_new)
HXLINE(  36)		this->i = i;
HXLINE(  37)		this->nbits = 0;
HXLINE(  38)		this->bits = 0;
            	}

Dynamic BitsInput_obj::__CreateEmpty() { return new BitsInput_obj; }

void *BitsInput_obj::_hx_vtable = 0;

Dynamic BitsInput_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BitsInput_obj > _hx_result = new BitsInput_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BitsInput_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0683d1e4;
}

int BitsInput_obj::readBits(int n){
            	HX_STACKFRAME(&_hx_pos_3c3f3afe156df4fc_41_readBits)
HXLINE(  42)		if ((this->nbits >= n)) {
HXLINE(  43)			int c = (this->nbits - n);
HXLINE(  44)			int k = (::hx::UShr(this->bits,c) & ((1 << n) - 1));
HXLINE(  45)			this->nbits = c;
HXLINE(  46)			return k;
            		}
HXLINE(  48)		int k = this->i->readByte();
HXLINE(  49)		if ((this->nbits >= 24)) {
HXLINE(  50)			if ((n > 31)) {
HXLINE(  50)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Bits error",4e,5f,cc,ef)));
            			}
HXLINE(  51)			int c = ((8 + this->nbits) - n);
HXLINE(  52)			int d = (this->bits & ((1 << this->nbits) - 1));
HXLINE(  53)			d = ((d << (8 - c)) | (k << c));
HXLINE(  54)			this->bits = k;
HXLINE(  55)			this->nbits = c;
HXLINE(  56)			return d;
            		}
HXLINE(  58)		this->bits = ((this->bits << 8) | k);
HXLINE(  59)		 ::format::tools::BitsInput _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  59)		_hx_tmp->nbits = (_hx_tmp->nbits + 8);
HXLINE(  60)		return this->readBits(n);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitsInput_obj,readBits,return )

bool BitsInput_obj::readBit(){
            	HX_STACKFRAME(&_hx_pos_3c3f3afe156df4fc_63_readBit)
HXLINE(  64)		if ((this->nbits == 0)) {
HXLINE(  65)			this->bits = this->i->readByte();
HXLINE(  66)			this->nbits = 8;
            		}
HXLINE(  68)		this->nbits--;
HXLINE(  69)		return ((::hx::UShr(this->bits,this->nbits) & 1) == 1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitsInput_obj,readBit,return )

void BitsInput_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_3c3f3afe156df4fc_73_reset)
HXDLIN(  73)		this->nbits = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitsInput_obj,reset,(void))


::hx::ObjectPtr< BitsInput_obj > BitsInput_obj::__new( ::haxe::io::Input i) {
	::hx::ObjectPtr< BitsInput_obj > __this = new BitsInput_obj();
	__this->__construct(i);
	return __this;
}

::hx::ObjectPtr< BitsInput_obj > BitsInput_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input i) {
	BitsInput_obj *__this = (BitsInput_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BitsInput_obj), true, "format.tools.BitsInput"));
	*(void **)__this = BitsInput_obj::_hx_vtable;
	__this->__construct(i);
	return __this;
}

BitsInput_obj::BitsInput_obj()
{
}

void BitsInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitsInput);
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(nbits,"nbits");
	HX_MARK_MEMBER_NAME(bits,"bits");
	HX_MARK_END_CLASS();
}

void BitsInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(nbits,"nbits");
	HX_VISIT_MEMBER_NAME(bits,"bits");
}

::hx::Val BitsInput_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return ::hx::Val( i ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bits") ) { return ::hx::Val( bits ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nbits") ) { return ::hx::Val( nbits ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"readBit") ) { return ::hx::Val( readBit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readBits") ) { return ::hx::Val( readBits_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BitsInput_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast<  ::haxe::io::Input >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bits") ) { bits=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nbits") ) { nbits=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitsInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("i",69,00,00,00));
	outFields->push(HX_("nbits",74,ca,2a,97));
	outFields->push(HX_("bits",06,fb,16,41));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BitsInput_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Input */ ,(int)offsetof(BitsInput_obj,i),HX_("i",69,00,00,00)},
	{::hx::fsInt,(int)offsetof(BitsInput_obj,nbits),HX_("nbits",74,ca,2a,97)},
	{::hx::fsInt,(int)offsetof(BitsInput_obj,bits),HX_("bits",06,fb,16,41)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BitsInput_obj_sStaticStorageInfo = 0;
#endif

static ::String BitsInput_obj_sMemberFields[] = {
	HX_("i",69,00,00,00),
	HX_("nbits",74,ca,2a,97),
	HX_("bits",06,fb,16,41),
	HX_("readBits",7c,d5,0e,69),
	HX_("readBit",17,5f,c4,02),
	HX_("reset",cf,49,c8,e6),
	::String(null()) };

::hx::Class BitsInput_obj::__mClass;

void BitsInput_obj::__register()
{
	BitsInput_obj _hx_dummy;
	BitsInput_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.tools.BitsInput",ba,5f,93,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BitsInput_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BitsInput_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BitsInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BitsInput_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace format
} // end namespace tools
