#include <hxcpp.h>

#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_impl_Driver
#include <h3d/impl/Driver.h>
#endif
#ifndef INCLUDED_h3d_impl_MemoryManager
#include <h3d/impl/MemoryManager.h>
#endif
#ifndef INCLUDED_h3d_mat_DepthBuffer
#include <h3d/mat/DepthBuffer.h>
#endif
#ifndef INCLUDED_h3d_mat_DepthFormat
#include <h3d/mat/DepthFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_53f7222022bb92cb_23_new,"h3d.mat.DepthBuffer","new",0x43020932,"h3d.mat.DepthBuffer.new","h3d/mat/DepthBuffer.hx",23,0x75995680)
HX_LOCAL_STACK_FRAME(_hx_pos_53f7222022bb92cb_31_hasStencil,"h3d.mat.DepthBuffer","hasStencil",0x8e220b30,"h3d.mat.DepthBuffer.hasStencil","h3d/mat/DepthBuffer.hx",31,0x75995680)
HX_LOCAL_STACK_FRAME(_hx_pos_53f7222022bb92cb_38_alloc,"h3d.mat.DepthBuffer","alloc",0x16df35c7,"h3d.mat.DepthBuffer.alloc","h3d/mat/DepthBuffer.hx",38,0x75995680)
HX_LOCAL_STACK_FRAME(_hx_pos_53f7222022bb92cb_42_dispose,"h3d.mat.DepthBuffer","dispose",0x479c8a71,"h3d.mat.DepthBuffer.dispose","h3d/mat/DepthBuffer.hx",42,0x75995680)
HX_LOCAL_STACK_FRAME(_hx_pos_53f7222022bb92cb_49_isDisposed,"h3d.mat.DepthBuffer","isDisposed",0x25bd825d,"h3d.mat.DepthBuffer.isDisposed","h3d/mat/DepthBuffer.hx",49,0x75995680)
HX_LOCAL_STACK_FRAME(_hx_pos_53f7222022bb92cb_56_getDefault,"h3d.mat.DepthBuffer","getDefault",0x6e8fc439,"h3d.mat.DepthBuffer.getDefault","h3d/mat/DepthBuffer.hx",56,0x75995680)
namespace h3d{
namespace mat{

void DepthBuffer_obj::__construct(int width,int height, ::h3d::mat::DepthFormat format){
            	HX_STACKFRAME(&_hx_pos_53f7222022bb92cb_23_new)
HXLINE(  24)		this->width = width;
HXLINE(  25)		this->height = height;
HXLINE(  26)		this->format = format;
HXLINE(  27)		if ((width > 0)) {
HXLINE(  27)			this->alloc();
            		}
            	}

Dynamic DepthBuffer_obj::__CreateEmpty() { return new DepthBuffer_obj; }

void *DepthBuffer_obj::_hx_vtable = 0;

Dynamic DepthBuffer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DepthBuffer_obj > _hx_result = new DepthBuffer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool DepthBuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4b19565c;
}

bool DepthBuffer_obj::hasStencil(){
            	HX_STACKFRAME(&_hx_pos_53f7222022bb92cb_31_hasStencil)
HXDLIN(  31)		switch((int)(this->format->_hx_getIndex())){
            			case (int)0: case (int)1: {
HXLINE(  32)				return false;
            			}
            			break;
            			case (int)2: {
HXLINE(  33)				return true;
            			}
            			break;
            		}
HXLINE(  31)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DepthBuffer_obj,hasStencil,return )

void DepthBuffer_obj::alloc(){
            	HX_STACKFRAME(&_hx_pos_53f7222022bb92cb_38_alloc)
HXDLIN(  38)		::h3d::Engine_obj::CURRENT->mem->allocDepth(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DepthBuffer_obj,alloc,(void))

void DepthBuffer_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_53f7222022bb92cb_42_dispose)
HXDLIN(  42)		if (::hx::IsNotNull( this->b )) {
HXLINE(  43)			::h3d::Engine_obj::CURRENT->mem->deleteDepth(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  44)			this->b = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DepthBuffer_obj,dispose,(void))

bool DepthBuffer_obj::isDisposed(){
            	HX_STACKFRAME(&_hx_pos_53f7222022bb92cb_49_isDisposed)
HXDLIN(  49)		return ::hx::IsNull( this->b );
            	}


HX_DEFINE_DYNAMIC_FUNC0(DepthBuffer_obj,isDisposed,return )

 ::h3d::mat::DepthBuffer DepthBuffer_obj::getDefault(){
            	HX_STACKFRAME(&_hx_pos_53f7222022bb92cb_56_getDefault)
HXDLIN(  56)		return ::h3d::Engine_obj::CURRENT->driver->getDefaultDepthBuffer();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DepthBuffer_obj,getDefault,return )


::hx::ObjectPtr< DepthBuffer_obj > DepthBuffer_obj::__new(int width,int height, ::h3d::mat::DepthFormat format) {
	::hx::ObjectPtr< DepthBuffer_obj > __this = new DepthBuffer_obj();
	__this->__construct(width,height,format);
	return __this;
}

::hx::ObjectPtr< DepthBuffer_obj > DepthBuffer_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::h3d::mat::DepthFormat format) {
	DepthBuffer_obj *__this = (DepthBuffer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DepthBuffer_obj), true, "h3d.mat.DepthBuffer"));
	*(void **)__this = DepthBuffer_obj::_hx_vtable;
	__this->__construct(width,height,format);
	return __this;
}

DepthBuffer_obj::DepthBuffer_obj()
{
}

void DepthBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DepthBuffer);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_END_CLASS();
}

void DepthBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(format,"format");
}

::hx::Val DepthBuffer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"alloc") ) { return ::hx::Val( alloc_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"format") ) { return ::hx::Val( format ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hasStencil") ) { return ::hx::Val( hasStencil_dyn() ); }
		if (HX_FIELD_EQ(inName,"isDisposed") ) { return ::hx::Val( isDisposed_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DepthBuffer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"getDefault") ) { outValue = getDefault_dyn(); return true; }
	}
	return false;
}

::hx::Val DepthBuffer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast<  ::h3d::mat::DepthFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DepthBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("format",37,8f,8e,fd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DepthBuffer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DepthBuffer_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsInt,(int)offsetof(DepthBuffer_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(DepthBuffer_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsObject /*  ::h3d::mat::DepthFormat */ ,(int)offsetof(DepthBuffer_obj,format),HX_("format",37,8f,8e,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DepthBuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String DepthBuffer_obj_sMemberFields[] = {
	HX_("b",62,00,00,00),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("format",37,8f,8e,fd),
	HX_("hasStencil",c2,a5,b7,0a),
	HX_("alloc",75,a4,93,21),
	HX_("dispose",9f,80,4c,bb),
	HX_("isDisposed",ef,1c,53,a2),
	::String(null()) };

::hx::Class DepthBuffer_obj::__mClass;

static ::String DepthBuffer_obj_sStaticFields[] = {
	HX_("getDefault",cb,5e,25,eb),
	::String(null())
};

void DepthBuffer_obj::__register()
{
	DepthBuffer_obj _hx_dummy;
	DepthBuffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.mat.DepthBuffer",40,48,5d,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DepthBuffer_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DepthBuffer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DepthBuffer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DepthBuffer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DepthBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DepthBuffer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace mat
