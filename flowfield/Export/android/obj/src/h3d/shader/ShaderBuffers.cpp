#include <hxcpp.h>

#ifndef INCLUDED_h3d_Buffer
#include <h3d/Buffer.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_shader_ShaderBuffers
#include <h3d/shader/ShaderBuffers.h>
#endif
#ifndef INCLUDED_hxsl_RuntimeShaderData
#include <hxsl/RuntimeShaderData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4ed27117ac531e3f_19_new,"h3d.shader.ShaderBuffers","new",0xd257f4ec,"h3d.shader.ShaderBuffers.new","h3d/shader/Buffers.hx",19,0x495c6b9f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ed27117ac531e3f_26_grow,"h3d.shader.ShaderBuffers","grow",0x3607b207,"h3d.shader.ShaderBuffers.grow","h3d/shader/Buffers.hx",26,0x495c6b9f)
namespace h3d{
namespace shader{

void ShaderBuffers_obj::__construct( ::hxsl::RuntimeShaderData s){
            	HX_STACKFRAME(&_hx_pos_4ed27117ac531e3f_19_new)
HXLINE(  20)		::Array< Float > this1 = ::Array_obj< Float >::__new((s->globalsSize << 2));
HXDLIN(  20)		this->globals = this1;
HXLINE(  21)		::Array< Float > this2 = ::Array_obj< Float >::__new((s->paramsSize << 2));
HXDLIN(  21)		this->params = this2;
HXLINE(  22)		::Array< ::Dynamic> this3 = ::Array_obj< ::Dynamic>::__new(s->texturesCount);
HXDLIN(  22)		this->tex = this3;
HXLINE(  23)		::Array< ::Dynamic> _hx_tmp;
HXDLIN(  23)		if ((s->bufferCount > 0)) {
HXLINE(  23)			::Array< ::Dynamic> this1 = ::Array_obj< ::Dynamic>::__new(s->bufferCount);
HXDLIN(  23)			_hx_tmp = this1;
            		}
            		else {
HXLINE(  23)			_hx_tmp = null();
            		}
HXDLIN(  23)		this->buffers = _hx_tmp;
            	}

Dynamic ShaderBuffers_obj::__CreateEmpty() { return new ShaderBuffers_obj; }

void *ShaderBuffers_obj::_hx_vtable = 0;

Dynamic ShaderBuffers_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShaderBuffers_obj > _hx_result = new ShaderBuffers_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ShaderBuffers_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x274c98b4;
}

void ShaderBuffers_obj::grow( ::hxsl::RuntimeShaderData s){
            	HX_STACKFRAME(&_hx_pos_4ed27117ac531e3f_26_grow)
HXLINE(  27)		int ng = (s->globalsSize << 2);
HXLINE(  28)		int np = (s->paramsSize << 2);
HXLINE(  29)		int nt = s->texturesCount;
HXLINE(  30)		int nb = s->bufferCount;
HXLINE(  31)		if ((this->globals->length < ng)) {
HXLINE(  31)			::Array< Float > this1 = ::Array_obj< Float >::__new(ng);
HXDLIN(  31)			this->globals = this1;
            		}
HXLINE(  32)		if ((this->params->length < np)) {
HXLINE(  32)			::Array< Float > this1 = ::Array_obj< Float >::__new(np);
HXDLIN(  32)			this->params = this1;
            		}
HXLINE(  33)		if ((this->tex->length < nt)) {
HXLINE(  33)			::Array< ::Dynamic> this1 = ::Array_obj< ::Dynamic>::__new(nt);
HXDLIN(  33)			this->tex = this1;
            		}
HXLINE(  34)		bool _hx_tmp;
HXDLIN(  34)		if ((nb > 0)) {
HXLINE(  34)			if (::hx::IsNotNull( this->buffers )) {
HXLINE(  34)				_hx_tmp = (this->buffers->length < nb);
            			}
            			else {
HXLINE(  34)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(  34)			_hx_tmp = false;
            		}
HXDLIN(  34)		if (_hx_tmp) {
HXLINE(  34)			::Array< ::Dynamic> this1 = ::Array_obj< ::Dynamic>::__new(nb);
HXDLIN(  34)			this->buffers = this1;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderBuffers_obj,grow,(void))


::hx::ObjectPtr< ShaderBuffers_obj > ShaderBuffers_obj::__new( ::hxsl::RuntimeShaderData s) {
	::hx::ObjectPtr< ShaderBuffers_obj > __this = new ShaderBuffers_obj();
	__this->__construct(s);
	return __this;
}

::hx::ObjectPtr< ShaderBuffers_obj > ShaderBuffers_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxsl::RuntimeShaderData s) {
	ShaderBuffers_obj *__this = (ShaderBuffers_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderBuffers_obj), true, "h3d.shader.ShaderBuffers"));
	*(void **)__this = ShaderBuffers_obj::_hx_vtable;
	__this->__construct(s);
	return __this;
}

ShaderBuffers_obj::ShaderBuffers_obj()
{
}

void ShaderBuffers_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderBuffers);
	HX_MARK_MEMBER_NAME(globals,"globals");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(tex,"tex");
	HX_MARK_MEMBER_NAME(buffers,"buffers");
	HX_MARK_END_CLASS();
}

void ShaderBuffers_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(globals,"globals");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(tex,"tex");
	HX_VISIT_MEMBER_NAME(buffers,"buffers");
}

::hx::Val ShaderBuffers_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tex") ) { return ::hx::Val( tex ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"grow") ) { return ::hx::Val( grow_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return ::hx::Val( params ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"globals") ) { return ::hx::Val( globals ); }
		if (HX_FIELD_EQ(inName,"buffers") ) { return ::hx::Val( buffers ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ShaderBuffers_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tex") ) { tex=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { params=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"globals") ) { globals=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffers") ) { buffers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderBuffers_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("globals",b0,05,39,14));
	outFields->push(HX_("params",46,fb,7a,ed));
	outFields->push(HX_("tex",e7,5d,58,00));
	outFields->push(HX_("buffers",73,a3,90,b1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShaderBuffers_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(ShaderBuffers_obj,globals),HX_("globals",b0,05,39,14)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(ShaderBuffers_obj,params),HX_("params",46,fb,7a,ed)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ShaderBuffers_obj,tex),HX_("tex",e7,5d,58,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ShaderBuffers_obj,buffers),HX_("buffers",73,a3,90,b1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ShaderBuffers_obj_sStaticStorageInfo = 0;
#endif

static ::String ShaderBuffers_obj_sMemberFields[] = {
	HX_("globals",b0,05,39,14),
	HX_("params",46,fb,7a,ed),
	HX_("tex",e7,5d,58,00),
	HX_("buffers",73,a3,90,b1),
	HX_("grow",13,dc,6b,44),
	::String(null()) };

::hx::Class ShaderBuffers_obj::__mClass;

void ShaderBuffers_obj::__register()
{
	ShaderBuffers_obj _hx_dummy;
	ShaderBuffers_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.ShaderBuffers",fa,4e,30,a8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShaderBuffers_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShaderBuffers_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderBuffers_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderBuffers_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace shader
