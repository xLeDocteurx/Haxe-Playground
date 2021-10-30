#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxsl_Error
#include <hxsl/Error.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_975c1571958ce567_43_new,"hxsl.Error","new",0x38f78b95,"hxsl.Error.new","hxsl/Ast.hx",43,0x84860dc2)
HX_LOCAL_STACK_FRAME(_hx_pos_975c1571958ce567_49_toString,"hxsl.Error","toString",0xbe4f5557,"hxsl.Error.toString","hxsl/Ast.hx",49,0x84860dc2)
HX_LOCAL_STACK_FRAME(_hx_pos_975c1571958ce567_53_t,"hxsl.Error","t",0x7bbf1469,"hxsl.Error.t","hxsl/Ast.hx",53,0x84860dc2)
namespace hxsl{

void Error_obj::__construct(::String msg, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_975c1571958ce567_43_new)
HXLINE(  44)		this->msg = msg;
HXLINE(  45)		this->pos = pos;
            	}

Dynamic Error_obj::__CreateEmpty() { return new Error_obj; }

void *Error_obj::_hx_vtable = 0;

Dynamic Error_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Error_obj > _hx_result = new Error_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Error_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x08d06163;
}

::String Error_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_975c1571958ce567_49_toString)
HXDLIN(  49)		::String _hx_tmp = ((HX_("Error(",80,f7,fc,85) + this->msg) + HX_(")@",f7,23,00,00));
HXDLIN(  49)		return (_hx_tmp + ::Std_obj::string(this->pos));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Error_obj,toString,return )

 ::Dynamic Error_obj::t(::String msg, ::Dynamic pos){
            	HX_GC_STACKFRAME(&_hx_pos_975c1571958ce567_53_t)
HXDLIN(  53)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hxsl::Error_obj::__alloc( HX_CTX ,msg,pos)));
HXDLIN(  53)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Error_obj,t,return )


::hx::ObjectPtr< Error_obj > Error_obj::__new(::String msg, ::Dynamic pos) {
	::hx::ObjectPtr< Error_obj > __this = new Error_obj();
	__this->__construct(msg,pos);
	return __this;
}

::hx::ObjectPtr< Error_obj > Error_obj::__alloc(::hx::Ctx *_hx_ctx,::String msg, ::Dynamic pos) {
	Error_obj *__this = (Error_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Error_obj), true, "hxsl.Error"));
	*(void **)__this = Error_obj::_hx_vtable;
	__this->__construct(msg,pos);
	return __this;
}

Error_obj::Error_obj()
{
}

void Error_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Error);
	HX_MARK_MEMBER_NAME(msg,"msg");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_END_CLASS();
}

void Error_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(msg,"msg");
	HX_VISIT_MEMBER_NAME(pos,"pos");
}

::hx::Val Error_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"msg") ) { return ::hx::Val( msg ); }
		if (HX_FIELD_EQ(inName,"pos") ) { return ::hx::Val( pos ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Error_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"t") ) { outValue = t_dyn(); return true; }
	}
	return false;
}

::hx::Val Error_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"msg") ) { msg=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Error_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("msg",41,1a,53,00));
	outFields->push(HX_("pos",94,5d,55,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Error_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Error_obj,msg),HX_("msg",41,1a,53,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Error_obj,pos),HX_("pos",94,5d,55,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Error_obj_sStaticStorageInfo = 0;
#endif

static ::String Error_obj_sMemberFields[] = {
	HX_("msg",41,1a,53,00),
	HX_("pos",94,5d,55,00),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class Error_obj::__mClass;

static ::String Error_obj_sStaticFields[] = {
	HX_("t",74,00,00,00),
	::String(null())
};

void Error_obj::__register()
{
	Error_obj _hx_dummy;
	Error_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.Error",23,1d,e3,a6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Error_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Error_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Error_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Error_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Error_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Error_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
