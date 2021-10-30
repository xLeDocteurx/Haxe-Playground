#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_h3d_impl_Driver
#include <h3d/impl/Driver.h>
#endif
#ifndef INCLUDED_h3d_impl_Feature
#include <h3d/impl/Feature.h>
#endif
#ifndef INCLUDED_h3d_impl_InputNames
#include <h3d/impl/InputNames.h>
#endif
#ifndef INCLUDED_h3d_impl_ManagedBuffer
#include <h3d/impl/ManagedBuffer.h>
#endif
#ifndef INCLUDED_h3d_impl_NullDriver
#include <h3d/impl/NullDriver.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif
#ifndef INCLUDED_hxsl_RuntimeShader
#include <hxsl/RuntimeShader.h>
#endif
#ifndef INCLUDED_hxsl_RuntimeShaderData
#include <hxsl/RuntimeShaderData.h>
#endif
#ifndef INCLUDED_hxsl_VarKind
#include <hxsl/VarKind.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_946e85b7554e4386_8_new,"h3d.impl.NullDriver","new",0x91158aba,"h3d.impl.NullDriver.new","h3d/impl/NullDriver.hx",8,0x95de1196)
HX_LOCAL_STACK_FRAME(_hx_pos_946e85b7554e4386_12_hasFeature,"h3d.impl.NullDriver","hasFeature",0xe1367f62,"h3d.impl.NullDriver.hasFeature","h3d/impl/NullDriver.hx",12,0x95de1196)
HX_LOCAL_STACK_FRAME(_hx_pos_946e85b7554e4386_16_isSupportedFormat,"h3d.impl.NullDriver","isSupportedFormat",0x0ad9a715,"h3d.impl.NullDriver.isSupportedFormat","h3d/impl/NullDriver.hx",16,0x95de1196)
HX_LOCAL_STACK_FRAME(_hx_pos_946e85b7554e4386_21_logImpl,"h3d.impl.NullDriver","logImpl",0x4abb80de,"h3d.impl.NullDriver.logImpl","h3d/impl/NullDriver.hx",21,0x95de1196)
HX_LOCAL_STACK_FRAME(_hx_pos_946e85b7554e4386_28_isDisposed,"h3d.impl.NullDriver","isDisposed",0xde58c1d5,"h3d.impl.NullDriver.isDisposed","h3d/impl/NullDriver.hx",28,0x95de1196)
HX_LOCAL_STACK_FRAME(_hx_pos_946e85b7554e4386_32_getDriverName,"h3d.impl.NullDriver","getDriverName",0x97519da3,"h3d.impl.NullDriver.getDriverName","h3d/impl/NullDriver.hx",32,0x95de1196)
HX_LOCAL_STACK_FRAME(_hx_pos_946e85b7554e4386_36_init,"h3d.impl.NullDriver","init",0x5e7c8f76,"h3d.impl.NullDriver.init","h3d/impl/NullDriver.hx",36,0x95de1196)
HX_LOCAL_STACK_FRAME(_hx_pos_946e85b7554e4386_39_selectShader,"h3d.impl.NullDriver","selectShader",0x85bddda7,"h3d.impl.NullDriver.selectShader","h3d/impl/NullDriver.hx",39,0x95de1196)
HX_LOCAL_STACK_FRAME(_hx_pos_946e85b7554e4386_45_getShaderInputNames,"h3d.impl.NullDriver","getShaderInputNames",0x2fef51f3,"h3d.impl.NullDriver.getShaderInputNames","h3d/impl/NullDriver.hx",45,0x95de1196)
HX_LOCAL_STACK_FRAME(_hx_pos_946e85b7554e4386_54_allocTexture,"h3d.impl.NullDriver","allocTexture",0xec8e1f4c,"h3d.impl.NullDriver.allocTexture","h3d/impl/NullDriver.hx",54,0x95de1196)
HX_LOCAL_STACK_FRAME(_hx_pos_946e85b7554e4386_58_allocIndexes,"h3d.impl.NullDriver","allocIndexes",0x2e6cb271,"h3d.impl.NullDriver.allocIndexes","h3d/impl/NullDriver.hx",58,0x95de1196)
HX_LOCAL_STACK_FRAME(_hx_pos_946e85b7554e4386_62_allocVertexes,"h3d.impl.NullDriver","allocVertexes",0x117f2141,"h3d.impl.NullDriver.allocVertexes","h3d/impl/NullDriver.hx",62,0x95de1196)
namespace h3d{
namespace impl{

void NullDriver_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_946e85b7554e4386_8_new)
            	}

Dynamic NullDriver_obj::__CreateEmpty() { return new NullDriver_obj; }

void *NullDriver_obj::_hx_vtable = 0;

Dynamic NullDriver_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NullDriver_obj > _hx_result = new NullDriver_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NullDriver_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7fa9e081) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x7fa9e081;
	} else {
		return inClassId==(int)0x7faa8948;
	}
}

bool NullDriver_obj::hasFeature( ::h3d::impl::Feature f){
            	HX_STACKFRAME(&_hx_pos_946e85b7554e4386_12_hasFeature)
HXDLIN(  12)		return true;
            	}


bool NullDriver_obj::isSupportedFormat( ::hxd::PixelFormat fmt){
            	HX_STACKFRAME(&_hx_pos_946e85b7554e4386_16_isSupportedFormat)
HXDLIN(  16)		return true;
            	}


void NullDriver_obj::logImpl(::String str){
            	HX_STACKFRAME(&_hx_pos_946e85b7554e4386_21_logImpl)
HXDLIN(  21)		::Sys_obj::println(str);
            	}


bool NullDriver_obj::isDisposed(){
            	HX_STACKFRAME(&_hx_pos_946e85b7554e4386_28_isDisposed)
HXDLIN(  28)		return false;
            	}


::String NullDriver_obj::getDriverName(bool details){
            	HX_STACKFRAME(&_hx_pos_946e85b7554e4386_32_getDriverName)
HXDLIN(  32)		return HX_("NullDriver",2f,b6,0f,c5);
            	}


void NullDriver_obj::init( ::Dynamic onCreate,::hx::Null< bool >  __o_forceSoftware){
            		bool forceSoftware = __o_forceSoftware.Default(false);
            	HX_STACKFRAME(&_hx_pos_946e85b7554e4386_36_init)
HXDLIN(  36)		onCreate(false);
            	}


bool NullDriver_obj::selectShader( ::hxsl::RuntimeShader shader){
            	HX_STACKFRAME(&_hx_pos_946e85b7554e4386_39_selectShader)
HXLINE(  40)		if (::hx::IsInstanceEq( this->cur,shader )) {
HXLINE(  40)			return false;
            		}
HXLINE(  41)		this->cur = shader;
HXLINE(  42)		return true;
            	}


 ::h3d::impl::InputNames NullDriver_obj::getShaderInputNames(){
            	HX_STACKFRAME(&_hx_pos_946e85b7554e4386_45_getShaderInputNames)
HXLINE(  46)		::Array< ::String > names = ::Array_obj< ::String >::__new(0);
HXLINE(  47)		{
HXLINE(  47)			int _g = 0;
HXDLIN(  47)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(this->cur->vertex->data->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic)) );
HXDLIN(  47)			while((_g < _g1->length)){
HXLINE(  47)				 ::Dynamic v = _g1->__get(_g);
HXDLIN(  47)				_g = (_g + 1);
HXLINE(  48)				if (::hx::IsPointerEq( v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Input_dyn() )) {
HXLINE(  49)					names->push( ::Dynamic(v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)));
            				}
            			}
            		}
HXLINE(  50)		return ::h3d::impl::InputNames_obj::get(names);
            	}


 ::Dynamic NullDriver_obj::allocTexture( ::h3d::mat::Texture t){
            	HX_STACKFRAME(&_hx_pos_946e85b7554e4386_54_allocTexture)
HXDLIN(  54)		return  ::Dynamic(::hx::Anon_obj::Create(0));
            	}


 ::Dynamic NullDriver_obj::allocIndexes(int count,bool is32){
            	HX_STACKFRAME(&_hx_pos_946e85b7554e4386_58_allocIndexes)
HXDLIN(  58)		return  ::Dynamic(::hx::Anon_obj::Create(0));
            	}


 ::Dynamic NullDriver_obj::allocVertexes( ::h3d::impl::ManagedBuffer m){
            	HX_STACKFRAME(&_hx_pos_946e85b7554e4386_62_allocVertexes)
HXDLIN(  62)		return  ::Dynamic(::hx::Anon_obj::Create(0));
            	}



::hx::ObjectPtr< NullDriver_obj > NullDriver_obj::__new() {
	::hx::ObjectPtr< NullDriver_obj > __this = new NullDriver_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< NullDriver_obj > NullDriver_obj::__alloc(::hx::Ctx *_hx_ctx) {
	NullDriver_obj *__this = (NullDriver_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NullDriver_obj), true, "h3d.impl.NullDriver"));
	*(void **)__this = NullDriver_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NullDriver_obj::NullDriver_obj()
{
}

void NullDriver_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NullDriver);
	HX_MARK_MEMBER_NAME(cur,"cur");
	HX_MARK_END_CLASS();
}

void NullDriver_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cur,"cur");
}

::hx::Val NullDriver_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cur") ) { return ::hx::Val( cur ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"logImpl") ) { return ::hx::Val( logImpl_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hasFeature") ) { return ::hx::Val( hasFeature_dyn() ); }
		if (HX_FIELD_EQ(inName,"isDisposed") ) { return ::hx::Val( isDisposed_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectShader") ) { return ::hx::Val( selectShader_dyn() ); }
		if (HX_FIELD_EQ(inName,"allocTexture") ) { return ::hx::Val( allocTexture_dyn() ); }
		if (HX_FIELD_EQ(inName,"allocIndexes") ) { return ::hx::Val( allocIndexes_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getDriverName") ) { return ::hx::Val( getDriverName_dyn() ); }
		if (HX_FIELD_EQ(inName,"allocVertexes") ) { return ::hx::Val( allocVertexes_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isSupportedFormat") ) { return ::hx::Val( isSupportedFormat_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getShaderInputNames") ) { return ::hx::Val( getShaderInputNames_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NullDriver_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cur") ) { cur=inValue.Cast<  ::hxsl::RuntimeShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NullDriver_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("cur",80,85,4b,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NullDriver_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxsl::RuntimeShader */ ,(int)offsetof(NullDriver_obj,cur),HX_("cur",80,85,4b,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NullDriver_obj_sStaticStorageInfo = 0;
#endif

static ::String NullDriver_obj_sMemberFields[] = {
	HX_("cur",80,85,4b,00),
	HX_("hasFeature",7c,da,30,a5),
	HX_("isSupportedFormat",3b,43,d0,d7),
	HX_("logImpl",84,91,84,6b),
	HX_("isDisposed",ef,1c,53,a2),
	HX_("getDriverName",c9,ae,31,43),
	HX_("init",10,3b,bb,45),
	HX_("selectShader",41,b3,58,01),
	HX_("getShaderInputNames",99,c3,e1,1c),
	HX_("allocTexture",e6,f4,28,68),
	HX_("allocIndexes",0b,88,07,aa),
	HX_("allocVertexes",67,32,5f,bd),
	::String(null()) };

::hx::Class NullDriver_obj::__mClass;

void NullDriver_obj::__register()
{
	NullDriver_obj _hx_dummy;
	NullDriver_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.impl.NullDriver",c8,65,1f,d6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NullDriver_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NullDriver_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NullDriver_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NullDriver_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace impl
