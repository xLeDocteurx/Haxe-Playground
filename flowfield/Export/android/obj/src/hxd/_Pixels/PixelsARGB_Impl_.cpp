#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif
#ifndef INCLUDED_hxd_Pixels
#include <hxd/Pixels.h>
#endif
#ifndef INCLUDED_hxd__Pixels_PixelsARGB_Impl_
#include <hxd/_Pixels/PixelsARGB_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9b6b267547aefddc_14_getPixel,"hxd._Pixels.PixelsARGB_Impl_","getPixel",0x7b61ef09,"hxd._Pixels.PixelsARGB_Impl_.getPixel","hxd/Pixels.hx",14,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_9b6b267547aefddc_18_setPixel,"hxd._Pixels.PixelsARGB_Impl_","setPixel",0x29bf487d,"hxd._Pixels.PixelsARGB_Impl_.setPixel","hxd/Pixels.hx",18,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_9b6b267547aefddc_21_fromPixels,"hxd._Pixels.PixelsARGB_Impl_","fromPixels",0x8387fd70,"hxd._Pixels.PixelsARGB_Impl_.fromPixels","hxd/Pixels.hx",21,0x892673d6)
namespace hxd{
namespace _Pixels{

void PixelsARGB_Impl__obj::__construct() { }

Dynamic PixelsARGB_Impl__obj::__CreateEmpty() { return new PixelsARGB_Impl__obj; }

void *PixelsARGB_Impl__obj::_hx_vtable = 0;

Dynamic PixelsARGB_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PixelsARGB_Impl__obj > _hx_result = new PixelsARGB_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PixelsARGB_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7c9570b5;
}

int PixelsARGB_Impl__obj::getPixel( ::hxd::Pixels this1,int x,int y){
            	HX_STACKFRAME(&_hx_pos_9b6b267547aefddc_14_getPixel)
HXDLIN(  14)		 ::haxe::io::Bytes _this = this1->bytes;
HXDLIN(  14)		int pos = (((x + (y * this1->width)) << 2) + this1->offset);
HXDLIN(  14)		int v = (((( (int)(_this->b->__get(pos)) ) | (( (int)(_this->b->__get((pos + 1))) ) << 8)) | (( (int)(_this->b->__get((pos + 2))) ) << 16)) | (( (int)(_this->b->__get((pos + 3))) ) << 24));
HXDLIN(  14)		return (((::hx::UShr(v,24) | ((v >> 8) & 65280)) | ((v << 8) & 16711680)) | (v << 24));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(PixelsARGB_Impl__obj,getPixel,return )

void PixelsARGB_Impl__obj::setPixel( ::hxd::Pixels this1,int x,int y,int v){
            	HX_STACKFRAME(&_hx_pos_9b6b267547aefddc_18_setPixel)
HXDLIN(  18)		 ::haxe::io::Bytes _this = this1->bytes;
HXDLIN(  18)		int pos = (((x + (y * this1->width)) << 2) + this1->offset);
HXDLIN(  18)		int v1 = (((::hx::UShr(v,24) | ((v >> 8) & 65280)) | ((v << 8) & 16711680)) | (v << 24));
HXDLIN(  18)		_this->b[pos] = ( (unsigned char)((v1 & 255)) );
HXDLIN(  18)		_this->b[(pos + 1)] = ( (unsigned char)(((v1 >> 8) & 255)) );
HXDLIN(  18)		_this->b[(pos + 2)] = ( (unsigned char)(((v1 >> 16) & 255)) );
HXDLIN(  18)		_this->b[(pos + 3)] = ( (unsigned char)((::hx::UShr(v1,24) & 255)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(PixelsARGB_Impl__obj,setPixel,(void))

 ::hxd::Pixels PixelsARGB_Impl__obj::fromPixels( ::hxd::Pixels p){
            	HX_STACKFRAME(&_hx_pos_9b6b267547aefddc_21_fromPixels)
HXLINE(  22)		p->convert(::hxd::PixelFormat_obj::ARGB_dyn());
HXLINE(  23)		p->setFlip(false);
HXLINE(  24)		return p;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PixelsARGB_Impl__obj,fromPixels,return )


PixelsARGB_Impl__obj::PixelsARGB_Impl__obj()
{
}

bool PixelsARGB_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getPixel") ) { outValue = getPixel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setPixel") ) { outValue = setPixel_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromPixels") ) { outValue = fromPixels_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PixelsARGB_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PixelsARGB_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class PixelsARGB_Impl__obj::__mClass;

static ::String PixelsARGB_Impl__obj_sStaticFields[] = {
	HX_("getPixel",10,d6,7a,22),
	HX_("setPixel",84,2f,d8,d0),
	HX_("fromPixels",37,f4,ed,cf),
	::String(null())
};

void PixelsARGB_Impl__obj::__register()
{
	PixelsARGB_Impl__obj _hx_dummy;
	PixelsARGB_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd._Pixels.PixelsARGB_Impl_",95,4a,78,11);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PixelsARGB_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PixelsARGB_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PixelsARGB_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PixelsARGB_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PixelsARGB_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace _Pixels
