#include <hxcpp.h>

#ifndef INCLUDED_hxd_fs_Command
#include <hxd/fs/Command.h>
#endif
#ifndef INCLUDED_hxd_fs_Convert
#include <hxd/fs/Convert.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eb920f7f803de142_98_new,"hxd.fs.Command","new",0xdb4d36d6,"hxd.fs.Command.new","hxd/fs/Convert.hx",98,0x59888052)
HX_LOCAL_STACK_FRAME(_hx_pos_eb920f7f803de142_105_convert,"hxd.fs.Command","convert",0x36b6d769,"hxd.fs.Command.convert","hxd/fs/Convert.hx",105,0x59888052)
namespace hxd{
namespace fs{

void Command_obj::__construct( ::Dynamic fr,::String to,::String cmd,::Array< ::String > args){
            	HX_STACKFRAME(&_hx_pos_eb920f7f803de142_98_new)
HXLINE(  99)		super::__construct(fr,to);
HXLINE( 100)		this->cmd = cmd;
HXLINE( 101)		this->args = args;
            	}

Dynamic Command_obj::__CreateEmpty() { return new Command_obj; }

void *Command_obj::_hx_vtable = 0;

Dynamic Command_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Command_obj > _hx_result = new Command_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Command_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f05f3aa) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1f05f3aa;
	} else {
		return inClassId==(int)0x7a5db4d6;
	}
}

void Command_obj::convert(){
            	HX_STACKFRAME(&_hx_pos_eb920f7f803de142_105_convert)
HXDLIN( 105)		::String _hx_tmp = this->cmd;
HXDLIN( 105)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN( 105)		{
HXDLIN( 105)			int _g1 = 0;
HXDLIN( 105)			::Array< ::String > _g2 = this->args;
HXDLIN( 105)			while((_g1 < _g2->length)){
HXDLIN( 105)				::String a = _g2->__get(_g1);
HXDLIN( 105)				_g1 = (_g1 + 1);
HXDLIN( 105)				if ((a == HX_("%SRC",bf,27,b4,18))) {
HXDLIN( 105)					_g->push(this->srcPath);
            				}
            				else {
HXDLIN( 105)					if ((a == HX_("%DST",e0,c6,a8,18))) {
HXDLIN( 105)						_g->push(this->dstPath);
            					}
            					else {
HXDLIN( 105)						_g->push(a);
            					}
            				}
            			}
            		}
HXDLIN( 105)		this->command(_hx_tmp,_g);
            	}



::hx::ObjectPtr< Command_obj > Command_obj::__new( ::Dynamic fr,::String to,::String cmd,::Array< ::String > args) {
	::hx::ObjectPtr< Command_obj > __this = new Command_obj();
	__this->__construct(fr,to,cmd,args);
	return __this;
}

::hx::ObjectPtr< Command_obj > Command_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic fr,::String to,::String cmd,::Array< ::String > args) {
	Command_obj *__this = (Command_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Command_obj), true, "hxd.fs.Command"));
	*(void **)__this = Command_obj::_hx_vtable;
	__this->__construct(fr,to,cmd,args);
	return __this;
}

Command_obj::Command_obj()
{
}

void Command_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Command);
	HX_MARK_MEMBER_NAME(cmd,"cmd");
	HX_MARK_MEMBER_NAME(args,"args");
	 ::hxd::fs::Convert_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Command_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cmd,"cmd");
	HX_VISIT_MEMBER_NAME(args,"args");
	 ::hxd::fs::Convert_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Command_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cmd") ) { return ::hx::Val( cmd ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"args") ) { return ::hx::Val( args ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"convert") ) { return ::hx::Val( convert_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Command_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cmd") ) { cmd=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"args") ) { args=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Command_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("cmd",7a,7e,4b,00));
	outFields->push(HX_("args",5d,8d,74,40));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Command_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Command_obj,cmd),HX_("cmd",7a,7e,4b,00)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Command_obj,args),HX_("args",5d,8d,74,40)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Command_obj_sStaticStorageInfo = 0;
#endif

static ::String Command_obj_sMemberFields[] = {
	HX_("cmd",7a,7e,4b,00),
	HX_("args",5d,8d,74,40),
	HX_("convert",f3,fd,c9,1a),
	::String(null()) };

::hx::Class Command_obj::__mClass;

void Command_obj::__register()
{
	Command_obj _hx_dummy;
	Command_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fs.Command",e4,d3,4f,95);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Command_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Command_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Command_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Command_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fs
