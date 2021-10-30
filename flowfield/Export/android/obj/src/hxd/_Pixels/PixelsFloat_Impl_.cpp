#include <hxcpp.h>

#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif
#ifndef INCLUDED_hxd_Pixels
#include <hxd/Pixels.h>
#endif
#ifndef INCLUDED_hxd__Pixels_PixelsFloat_Impl_
#include <hxd/_Pixels/PixelsFloat_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d4273797e99a6fb4_32_getPixelF,"hxd._Pixels.PixelsFloat_Impl_","getPixelF",0x65b93b5b,"hxd._Pixels.PixelsFloat_Impl_.getPixelF","hxd/Pixels.hx",32,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_d4273797e99a6fb4_40_setPixelF,"hxd._Pixels.PixelsFloat_Impl_","setPixelF",0x490a2767,"hxd._Pixels.PixelsFloat_Impl_.setPixelF","hxd/Pixels.hx",40,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_d4273797e99a6fb4_45_fromPixels,"hxd._Pixels.PixelsFloat_Impl_","fromPixels",0x94dff172,"hxd._Pixels.PixelsFloat_Impl_.fromPixels","hxd/Pixels.hx",45,0x892673d6)
namespace hxd{
namespace _Pixels{

void PixelsFloat_Impl__obj::__construct() { }

Dynamic PixelsFloat_Impl__obj::__CreateEmpty() { return new PixelsFloat_Impl__obj; }

void *PixelsFloat_Impl__obj::_hx_vtable = 0;

Dynamic PixelsFloat_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PixelsFloat_Impl__obj > _hx_result = new PixelsFloat_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PixelsFloat_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0f23304f;
}

 ::h3d::Vector PixelsFloat_Impl__obj::getPixelF( ::hxd::Pixels this1,int x,int y, ::h3d::Vector v){
            	HX_GC_STACKFRAME(&_hx_pos_d4273797e99a6fb4_32_getPixelF)
HXLINE(  33)		if (::hx::IsNull( v )) {
HXLINE(  34)			v =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE(  35)		int pix = (((x + (y * this1->width)) << 2) + this1->offset);
HXLINE(  36)		 ::haxe::io::Bytes _this = this1->bytes;
HXDLIN(  36)		bool _hx_tmp;
HXDLIN(  36)		if ((pix >= 0)) {
HXLINE(  36)			_hx_tmp = ((pix + 4) > _this->length);
            		}
            		else {
HXLINE(  36)			_hx_tmp = true;
            		}
HXDLIN(  36)		if (_hx_tmp) {
HXLINE(  36)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            		}
HXDLIN(  36)		v->x =  ::__hxcpp_memory_get_float(_this->b,pix);
HXLINE(  37)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(PixelsFloat_Impl__obj,getPixelF,return )

void PixelsFloat_Impl__obj::setPixelF( ::hxd::Pixels this1,int x,int y, ::h3d::Vector v){
            	HX_STACKFRAME(&_hx_pos_d4273797e99a6fb4_40_setPixelF)
HXLINE(  41)		int pix = (((x + (y * this1->width)) << 2) + this1->offset);
HXLINE(  42)		this1->bytes->setFloat(pix,v->x);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(PixelsFloat_Impl__obj,setPixelF,(void))

 ::hxd::Pixels PixelsFloat_Impl__obj::fromPixels( ::hxd::Pixels p){
            	HX_STACKFRAME(&_hx_pos_d4273797e99a6fb4_45_fromPixels)
HXLINE(  46)		p->setFlip(false);
HXLINE(  47)		p->convert(::hxd::PixelFormat_obj::R32F_dyn());
HXLINE(  48)		return p;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PixelsFloat_Impl__obj,fromPixels,return )


PixelsFloat_Impl__obj::PixelsFloat_Impl__obj()
{
}

bool PixelsFloat_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"getPixelF") ) { outValue = getPixelF_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setPixelF") ) { outValue = setPixelF_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromPixels") ) { outValue = fromPixels_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PixelsFloat_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PixelsFloat_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class PixelsFloat_Impl__obj::__mClass;

static ::String PixelsFloat_Impl__obj_sStaticFields[] = {
	HX_("getPixelF",36,78,00,09),
	HX_("setPixelF",42,64,51,ec),
	HX_("fromPixels",37,f4,ed,cf),
	::String(null())
};

void PixelsFloat_Impl__obj::__register()
{
	PixelsFloat_Impl__obj _hx_dummy;
	PixelsFloat_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd._Pixels.PixelsFloat_Impl_",53,b3,3c,9f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PixelsFloat_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PixelsFloat_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PixelsFloat_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PixelsFloat_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PixelsFloat_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace _Pixels
