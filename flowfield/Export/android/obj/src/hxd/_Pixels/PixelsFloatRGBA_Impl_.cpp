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
#ifndef INCLUDED_hxd__Pixels_PixelsFloatRGBA_Impl_
#include <hxd/_Pixels/PixelsFloatRGBA_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f24e8a7237b11a30_57_getPixelF,"hxd._Pixels.PixelsFloatRGBA_Impl_","getPixelF",0xd261318f,"hxd._Pixels.PixelsFloatRGBA_Impl_.getPixelF","hxd/Pixels.hx",57,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_f24e8a7237b11a30_68_setPixelF,"hxd._Pixels.PixelsFloatRGBA_Impl_","setPixelF",0xb5b21d9b,"hxd._Pixels.PixelsFloatRGBA_Impl_.setPixelF","hxd/Pixels.hx",68,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_f24e8a7237b11a30_76_fromPixels,"hxd._Pixels.PixelsFloatRGBA_Impl_","fromPixels",0x3b2f68be,"hxd._Pixels.PixelsFloatRGBA_Impl_.fromPixels","hxd/Pixels.hx",76,0x892673d6)
namespace hxd{
namespace _Pixels{

void PixelsFloatRGBA_Impl__obj::__construct() { }

Dynamic PixelsFloatRGBA_Impl__obj::__CreateEmpty() { return new PixelsFloatRGBA_Impl__obj; }

void *PixelsFloatRGBA_Impl__obj::_hx_vtable = 0;

Dynamic PixelsFloatRGBA_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PixelsFloatRGBA_Impl__obj > _hx_result = new PixelsFloatRGBA_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PixelsFloatRGBA_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1ea7414b;
}

 ::h3d::Vector PixelsFloatRGBA_Impl__obj::getPixelF( ::hxd::Pixels this1,int x,int y, ::h3d::Vector v){
            	HX_GC_STACKFRAME(&_hx_pos_f24e8a7237b11a30_57_getPixelF)
HXLINE(  58)		if (::hx::IsNull( v )) {
HXLINE(  59)			v =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE(  60)		int pix = (((x + (y * this1->width)) << 4) + this1->offset);
HXLINE(  61)		 ::haxe::io::Bytes _this = this1->bytes;
HXDLIN(  61)		bool _hx_tmp;
HXDLIN(  61)		if ((pix >= 0)) {
HXLINE(  61)			_hx_tmp = ((pix + 4) > _this->length);
            		}
            		else {
HXLINE(  61)			_hx_tmp = true;
            		}
HXDLIN(  61)		if (_hx_tmp) {
HXLINE(  61)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            		}
HXDLIN(  61)		v->x =  ::__hxcpp_memory_get_float(_this->b,pix);
HXLINE(  62)		 ::haxe::io::Bytes _this1 = this1->bytes;
HXDLIN(  62)		int pos = (pix + 4);
HXDLIN(  62)		bool _hx_tmp1;
HXDLIN(  62)		if ((pos >= 0)) {
HXLINE(  62)			_hx_tmp1 = ((pos + 4) > _this1->length);
            		}
            		else {
HXLINE(  62)			_hx_tmp1 = true;
            		}
HXDLIN(  62)		if (_hx_tmp1) {
HXLINE(  62)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            		}
HXDLIN(  62)		v->y =  ::__hxcpp_memory_get_float(_this1->b,pos);
HXLINE(  63)		 ::haxe::io::Bytes _this2 = this1->bytes;
HXDLIN(  63)		int pos1 = (pix + 8);
HXDLIN(  63)		bool _hx_tmp2;
HXDLIN(  63)		if ((pos1 >= 0)) {
HXLINE(  63)			_hx_tmp2 = ((pos1 + 4) > _this2->length);
            		}
            		else {
HXLINE(  63)			_hx_tmp2 = true;
            		}
HXDLIN(  63)		if (_hx_tmp2) {
HXLINE(  63)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            		}
HXDLIN(  63)		v->z =  ::__hxcpp_memory_get_float(_this2->b,pos1);
HXLINE(  64)		 ::haxe::io::Bytes _this3 = this1->bytes;
HXDLIN(  64)		int pos2 = (pix + 12);
HXDLIN(  64)		bool _hx_tmp3;
HXDLIN(  64)		if ((pos2 >= 0)) {
HXLINE(  64)			_hx_tmp3 = ((pos2 + 4) > _this3->length);
            		}
            		else {
HXLINE(  64)			_hx_tmp3 = true;
            		}
HXDLIN(  64)		if (_hx_tmp3) {
HXLINE(  64)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            		}
HXDLIN(  64)		v->w =  ::__hxcpp_memory_get_float(_this3->b,pos2);
HXLINE(  65)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(PixelsFloatRGBA_Impl__obj,getPixelF,return )

void PixelsFloatRGBA_Impl__obj::setPixelF( ::hxd::Pixels this1,int x,int y, ::h3d::Vector v){
            	HX_STACKFRAME(&_hx_pos_f24e8a7237b11a30_68_setPixelF)
HXLINE(  69)		int pix = (((x + (y * this1->width)) << 4) + this1->offset);
HXLINE(  70)		this1->bytes->setFloat(pix,v->x);
HXLINE(  71)		this1->bytes->setFloat((pix + 4),v->y);
HXLINE(  72)		this1->bytes->setFloat((pix + 8),v->z);
HXLINE(  73)		this1->bytes->setFloat((pix + 12),v->w);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(PixelsFloatRGBA_Impl__obj,setPixelF,(void))

 ::hxd::Pixels PixelsFloatRGBA_Impl__obj::fromPixels( ::hxd::Pixels p){
            	HX_STACKFRAME(&_hx_pos_f24e8a7237b11a30_76_fromPixels)
HXLINE(  77)		p->setFlip(false);
HXLINE(  78)		p->convert(::hxd::PixelFormat_obj::RGBA32F_dyn());
HXLINE(  79)		return p;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PixelsFloatRGBA_Impl__obj,fromPixels,return )


PixelsFloatRGBA_Impl__obj::PixelsFloatRGBA_Impl__obj()
{
}

bool PixelsFloatRGBA_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *PixelsFloatRGBA_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PixelsFloatRGBA_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class PixelsFloatRGBA_Impl__obj::__mClass;

static ::String PixelsFloatRGBA_Impl__obj_sStaticFields[] = {
	HX_("getPixelF",36,78,00,09),
	HX_("setPixelF",42,64,51,ec),
	HX_("fromPixels",37,f4,ed,cf),
	::String(null())
};

void PixelsFloatRGBA_Impl__obj::__register()
{
	PixelsFloatRGBA_Impl__obj _hx_dummy;
	PixelsFloatRGBA_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd._Pixels.PixelsFloatRGBA_Impl_",87,a0,ac,34);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PixelsFloatRGBA_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PixelsFloatRGBA_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PixelsFloatRGBA_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PixelsFloatRGBA_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PixelsFloatRGBA_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace _Pixels
