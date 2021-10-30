#include <hxcpp.h>

#ifndef INCLUDED_h2d_BlendMode
#include <h2d/BlendMode.h>
#endif
#ifndef INCLUDED_h3d_mat_Pass
#include <h3d/mat/Pass.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_mat_TextureArray
#include <h3d/mat/TextureArray.h>
#endif
#ifndef INCLUDED_h3d_mat_TextureFlags
#include <h3d/mat/TextureFlags.h>
#endif
#ifndef INCLUDED_h3d_pass_Copy
#include <h3d/pass/Copy.h>
#endif
#ifndef INCLUDED_h3d_pass_ScreenFx
#include <h3d/pass/ScreenFx.h>
#endif
#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2d11347d1e3458d2_8_new,"h3d.mat.TextureArray","new",0xe9be0fb3,"h3d.mat.TextureArray.new","h3d/mat/TextureArray.hx",8,0xa16d74db)
HX_LOCAL_STACK_FRAME(_hx_pos_2d11347d1e3458d2_16_get_layerCount,"h3d.mat.TextureArray","get_layerCount",0xedc93114,"h3d.mat.TextureArray.get_layerCount","h3d/mat/TextureArray.hx",16,0xa16d74db)
HX_LOCAL_STACK_FRAME(_hx_pos_2d11347d1e3458d2_19_clone,"h3d.mat.TextureArray","clone",0x105a0d70,"h3d.mat.TextureArray.clone","h3d/mat/TextureArray.hx",19,0xa16d74db)
HX_LOCAL_STACK_FRAME(_hx_pos_2d11347d1e3458d2_29_toString,"h3d.mat.TextureArray","toString",0x9a1f2479,"h3d.mat.TextureArray.toString","h3d/mat/TextureArray.hx",29,0xa16d74db)
namespace h3d{
namespace mat{

void TextureArray_obj::__construct(int w,int h,int layers,::Array< ::Dynamic> flags, ::hxd::PixelFormat format){
            	HX_STACKFRAME(&_hx_pos_2d11347d1e3458d2_8_new)
HXLINE(   9)		this->layers = layers;
HXLINE(  10)		if (::hx::IsNull( flags )) {
HXLINE(  10)			flags = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE(  11)		flags->push(::h3d::mat::TextureFlags_obj::IsArray_dyn());
HXLINE(  12)		super::__construct(w,h,flags,format);
            	}

Dynamic TextureArray_obj::__CreateEmpty() { return new TextureArray_obj; }

void *TextureArray_obj::_hx_vtable = 0;

Dynamic TextureArray_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextureArray_obj > _hx_result = new TextureArray_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool TextureArray_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x18351109) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x18351109;
	} else {
		return inClassId==(int)0x6d442854;
	}
}

int TextureArray_obj::get_layerCount(){
            	HX_STACKFRAME(&_hx_pos_2d11347d1e3458d2_16_get_layerCount)
HXDLIN(  16)		return this->layers;
            	}


 ::h3d::mat::Texture TextureArray_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_2d11347d1e3458d2_19_clone)
HXLINE(  20)		int old = this->get_lastFrame();
HXLINE(  21)		this->preventAutoDispose();
HXLINE(  22)		 ::h3d::mat::TextureArray t =  ::h3d::mat::TextureArray_obj::__alloc( HX_CTX ,this->width,this->height,this->layers,null(),this->format);
HXLINE(  23)		::h3d::pass::Copy_obj::run(::hx::ObjectPtr<OBJ_>(this),t,null(),null(),null());
HXLINE(  24)		this->set_lastFrame(old);
HXLINE(  25)		return t;
            	}


::String TextureArray_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_2d11347d1e3458d2_29_toString)
HXDLIN(  29)		::String _hx_tmp = (this->super::toString() + HX_("[",5b,00,00,00));
HXDLIN(  29)		return ((_hx_tmp + this->layers) + HX_("]",5d,00,00,00));
            	}



::hx::ObjectPtr< TextureArray_obj > TextureArray_obj::__new(int w,int h,int layers,::Array< ::Dynamic> flags, ::hxd::PixelFormat format) {
	::hx::ObjectPtr< TextureArray_obj > __this = new TextureArray_obj();
	__this->__construct(w,h,layers,flags,format);
	return __this;
}

::hx::ObjectPtr< TextureArray_obj > TextureArray_obj::__alloc(::hx::Ctx *_hx_ctx,int w,int h,int layers,::Array< ::Dynamic> flags, ::hxd::PixelFormat format) {
	TextureArray_obj *__this = (TextureArray_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextureArray_obj), true, "h3d.mat.TextureArray"));
	*(void **)__this = TextureArray_obj::_hx_vtable;
	__this->__construct(w,h,layers,flags,format);
	return __this;
}

TextureArray_obj::TextureArray_obj()
{
}

::hx::Val TextureArray_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layers") ) { return ::hx::Val( layers ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_layerCount") ) { return ::hx::Val( get_layerCount_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextureArray_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"layers") ) { layers=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextureArray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("layers",82,15,b1,58));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextureArray_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TextureArray_obj,layers),HX_("layers",82,15,b1,58)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TextureArray_obj_sStaticStorageInfo = 0;
#endif

static ::String TextureArray_obj_sMemberFields[] = {
	HX_("layers",82,15,b1,58),
	HX_("get_layerCount",87,85,e8,65),
	HX_("clone",5d,13,63,48),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class TextureArray_obj::__mClass;

void TextureArray_obj::__register()
{
	TextureArray_obj _hx_dummy;
	TextureArray_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.mat.TextureArray",41,ba,91,39);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextureArray_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextureArray_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextureArray_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextureArray_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace mat
