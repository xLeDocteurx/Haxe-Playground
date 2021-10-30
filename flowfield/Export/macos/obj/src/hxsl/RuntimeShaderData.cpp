#include <hxcpp.h>

#ifndef INCLUDED_hxsl_AllocGlobal
#include <hxsl/AllocGlobal.h>
#endif
#ifndef INCLUDED_hxsl_AllocParam
#include <hxsl/AllocParam.h>
#endif
#ifndef INCLUDED_hxsl_RuntimeShaderData
#include <hxsl/RuntimeShaderData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_01a920fe5ba4c43f_59_new,"hxsl.RuntimeShaderData","new",0x2e9306b4,"hxsl.RuntimeShaderData.new","hxsl/RuntimeShader.hx",59,0xe95fb147)
namespace hxsl{

void RuntimeShaderData_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_01a920fe5ba4c43f_59_new)
            	}

Dynamic RuntimeShaderData_obj::__CreateEmpty() { return new RuntimeShaderData_obj; }

void *RuntimeShaderData_obj::_hx_vtable = 0;

Dynamic RuntimeShaderData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RuntimeShaderData_obj > _hx_result = new RuntimeShaderData_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RuntimeShaderData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3e50be5a;
}


RuntimeShaderData_obj::RuntimeShaderData_obj()
{
}

void RuntimeShaderData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RuntimeShaderData);
	HX_MARK_MEMBER_NAME(vertex,"vertex");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(code,"code");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(paramsSize,"paramsSize");
	HX_MARK_MEMBER_NAME(globals,"globals");
	HX_MARK_MEMBER_NAME(globalsSize,"globalsSize");
	HX_MARK_MEMBER_NAME(textures,"textures");
	HX_MARK_MEMBER_NAME(texturesCount,"texturesCount");
	HX_MARK_MEMBER_NAME(buffers,"buffers");
	HX_MARK_MEMBER_NAME(bufferCount,"bufferCount");
	HX_MARK_MEMBER_NAME(consts,"consts");
	HX_MARK_END_CLASS();
}

void RuntimeShaderData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(vertex,"vertex");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(code,"code");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(paramsSize,"paramsSize");
	HX_VISIT_MEMBER_NAME(globals,"globals");
	HX_VISIT_MEMBER_NAME(globalsSize,"globalsSize");
	HX_VISIT_MEMBER_NAME(textures,"textures");
	HX_VISIT_MEMBER_NAME(texturesCount,"texturesCount");
	HX_VISIT_MEMBER_NAME(buffers,"buffers");
	HX_VISIT_MEMBER_NAME(bufferCount,"bufferCount");
	HX_VISIT_MEMBER_NAME(consts,"consts");
}

::hx::Val RuntimeShaderData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		if (HX_FIELD_EQ(inName,"code") ) { return ::hx::Val( code ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vertex") ) { return ::hx::Val( vertex ); }
		if (HX_FIELD_EQ(inName,"params") ) { return ::hx::Val( params ); }
		if (HX_FIELD_EQ(inName,"consts") ) { return ::hx::Val( consts ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"globals") ) { return ::hx::Val( globals ); }
		if (HX_FIELD_EQ(inName,"buffers") ) { return ::hx::Val( buffers ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textures") ) { return ::hx::Val( textures ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"paramsSize") ) { return ::hx::Val( paramsSize ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"globalsSize") ) { return ::hx::Val( globalsSize ); }
		if (HX_FIELD_EQ(inName,"bufferCount") ) { return ::hx::Val( bufferCount ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"texturesCount") ) { return ::hx::Val( texturesCount ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RuntimeShaderData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"code") ) { code=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vertex") ) { vertex=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"params") ) { params=inValue.Cast<  ::hxsl::AllocParam >(); return inValue; }
		if (HX_FIELD_EQ(inName,"consts") ) { consts=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"globals") ) { globals=inValue.Cast<  ::hxsl::AllocGlobal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffers") ) { buffers=inValue.Cast<  ::hxsl::AllocParam >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textures") ) { textures=inValue.Cast<  ::hxsl::AllocParam >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"paramsSize") ) { paramsSize=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"globalsSize") ) { globalsSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bufferCount") ) { bufferCount=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"texturesCount") ) { texturesCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RuntimeShaderData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("vertex",64,db,47,a1));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("code",2d,b1,c4,41));
	outFields->push(HX_("params",46,fb,7a,ed));
	outFields->push(HX_("paramsSize",27,e3,4d,4b));
	outFields->push(HX_("globals",b0,05,39,14));
	outFields->push(HX_("globalsSize",91,6a,52,b3));
	outFields->push(HX_("textures",38,f7,ce,65));
	outFields->push(HX_("texturesCount",77,92,1e,37));
	outFields->push(HX_("buffers",73,a3,90,b1));
	outFields->push(HX_("bufferCount",af,d7,ae,e7));
	outFields->push(HX_("consts",b0,3d,dc,c7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RuntimeShaderData_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(RuntimeShaderData_obj,vertex),HX_("vertex",64,db,47,a1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(RuntimeShaderData_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsString,(int)offsetof(RuntimeShaderData_obj,code),HX_("code",2d,b1,c4,41)},
	{::hx::fsObject /*  ::hxsl::AllocParam */ ,(int)offsetof(RuntimeShaderData_obj,params),HX_("params",46,fb,7a,ed)},
	{::hx::fsInt,(int)offsetof(RuntimeShaderData_obj,paramsSize),HX_("paramsSize",27,e3,4d,4b)},
	{::hx::fsObject /*  ::hxsl::AllocGlobal */ ,(int)offsetof(RuntimeShaderData_obj,globals),HX_("globals",b0,05,39,14)},
	{::hx::fsInt,(int)offsetof(RuntimeShaderData_obj,globalsSize),HX_("globalsSize",91,6a,52,b3)},
	{::hx::fsObject /*  ::hxsl::AllocParam */ ,(int)offsetof(RuntimeShaderData_obj,textures),HX_("textures",38,f7,ce,65)},
	{::hx::fsInt,(int)offsetof(RuntimeShaderData_obj,texturesCount),HX_("texturesCount",77,92,1e,37)},
	{::hx::fsObject /*  ::hxsl::AllocParam */ ,(int)offsetof(RuntimeShaderData_obj,buffers),HX_("buffers",73,a3,90,b1)},
	{::hx::fsInt,(int)offsetof(RuntimeShaderData_obj,bufferCount),HX_("bufferCount",af,d7,ae,e7)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(RuntimeShaderData_obj,consts),HX_("consts",b0,3d,dc,c7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RuntimeShaderData_obj_sStaticStorageInfo = 0;
#endif

static ::String RuntimeShaderData_obj_sMemberFields[] = {
	HX_("vertex",64,db,47,a1),
	HX_("data",2a,56,63,42),
	HX_("code",2d,b1,c4,41),
	HX_("params",46,fb,7a,ed),
	HX_("paramsSize",27,e3,4d,4b),
	HX_("globals",b0,05,39,14),
	HX_("globalsSize",91,6a,52,b3),
	HX_("textures",38,f7,ce,65),
	HX_("texturesCount",77,92,1e,37),
	HX_("buffers",73,a3,90,b1),
	HX_("bufferCount",af,d7,ae,e7),
	HX_("consts",b0,3d,dc,c7),
	::String(null()) };

::hx::Class RuntimeShaderData_obj::__mClass;

void RuntimeShaderData_obj::__register()
{
	RuntimeShaderData_obj _hx_dummy;
	RuntimeShaderData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.RuntimeShaderData",c2,dc,7c,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RuntimeShaderData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RuntimeShaderData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RuntimeShaderData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RuntimeShaderData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
