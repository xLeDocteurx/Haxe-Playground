#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_impl_Driver
#include <h3d/impl/Driver.h>
#endif
#ifndef INCLUDED_h3d_impl_InstanceBuffer
#include <h3d/impl/InstanceBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_427231aefb255f80_4_new,"h3d.impl.InstanceBuffer","new",0x4dd6c2a0,"h3d.impl.InstanceBuffer.new","h3d/impl/InstanceBuffer.hx",4,0xc3272870)
HX_LOCAL_STACK_FRAME(_hx_pos_427231aefb255f80_15_setCommand,"h3d.impl.InstanceBuffer","setCommand",0x17886b89,"h3d.impl.InstanceBuffer.setCommand","h3d/impl/InstanceBuffer.hx",15,0xc3272870)
HX_LOCAL_STACK_FRAME(_hx_pos_427231aefb255f80_29_setBuffer,"h3d.impl.InstanceBuffer","setBuffer",0x3ade5482,"h3d.impl.InstanceBuffer.setBuffer","h3d/impl/InstanceBuffer.hx",29,0xc3272870)
HX_LOCAL_STACK_FRAME(_hx_pos_427231aefb255f80_46_dispose,"h3d.impl.InstanceBuffer","dispose",0xc3d592df,"h3d.impl.InstanceBuffer.dispose","h3d/impl/InstanceBuffer.hx",46,0xc3272870)
namespace h3d{
namespace impl{

void InstanceBuffer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_427231aefb255f80_4_new)
HXLINE(   9)		this->triCount = 0;
HXLINE(   8)		this->indexCount = 0;
            	}

Dynamic InstanceBuffer_obj::__CreateEmpty() { return new InstanceBuffer_obj; }

void *InstanceBuffer_obj::_hx_vtable = 0;

Dynamic InstanceBuffer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InstanceBuffer_obj > _hx_result = new InstanceBuffer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InstanceBuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7684162e;
}

void InstanceBuffer_obj::setCommand(int commandCount,int indexCount){
            	HX_STACKFRAME(&_hx_pos_427231aefb255f80_15_setCommand)
HXLINE(  16)		this->commandCount = commandCount;
HXLINE(  17)		this->indexCount = indexCount;
HXLINE(  18)		this->triCount = ::Std_obj::_hx_int((( (Float)((commandCount * indexCount)) ) / ( (Float)(3) )));
            	}


HX_DEFINE_DYNAMIC_FUNC2(InstanceBuffer_obj,setCommand,(void))

void InstanceBuffer_obj::setBuffer(int commandCount, ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_427231aefb255f80_29_setBuffer)
HXLINE(  30)		this->dispose();
HXLINE(  32)		{
HXLINE(  32)			int _g = 0;
HXDLIN(  32)			int _g1 = commandCount;
HXDLIN(  32)			while((_g < _g1)){
HXLINE(  32)				_g = (_g + 1);
HXDLIN(  32)				int i = (_g - 1);
HXLINE(  33)				int pos = (i * 20);
HXDLIN(  33)				int idxCount = (((( (int)(bytes->b->__get(pos)) ) | (( (int)(bytes->b->__get((pos + 1))) ) << 8)) | (( (int)(bytes->b->__get((pos + 2))) ) << 16)) | (( (int)(bytes->b->__get((pos + 3))) ) << 24));
HXLINE(  34)				int pos1 = ((i * 20) + 4);
HXDLIN(  34)				int instCount = (((( (int)(bytes->b->__get(pos1)) ) | (( (int)(bytes->b->__get((pos1 + 1))) ) << 8)) | (( (int)(bytes->b->__get((pos1 + 2))) ) << 16)) | (( (int)(bytes->b->__get((pos1 + 3))) ) << 24));
HXLINE(  35)				int tri = ::Std_obj::_hx_int((( (Float)((idxCount * instCount)) ) / ( (Float)(3) )));
HXLINE(  36)				 ::h3d::impl::InstanceBuffer _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  36)				_hx_tmp->triCount = (_hx_tmp->triCount + tri);
            			}
            		}
HXLINE(  39)		this->commandCount = commandCount;
HXLINE(  40)		this->indexCount = 0;
HXLINE(  41)		this->driver = ::h3d::Engine_obj::CURRENT->driver;
HXLINE(  42)		this->driver->allocInstanceBuffer(::hx::ObjectPtr<OBJ_>(this),bytes);
            	}


HX_DEFINE_DYNAMIC_FUNC2(InstanceBuffer_obj,setBuffer,(void))

void InstanceBuffer_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_427231aefb255f80_46_dispose)
HXDLIN(  46)		if (::hx::IsNotNull( this->data )) {
HXDLIN(  46)			this->driver->disposeInstanceBuffer(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(InstanceBuffer_obj,dispose,(void))


::hx::ObjectPtr< InstanceBuffer_obj > InstanceBuffer_obj::__new() {
	::hx::ObjectPtr< InstanceBuffer_obj > __this = new InstanceBuffer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< InstanceBuffer_obj > InstanceBuffer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	InstanceBuffer_obj *__this = (InstanceBuffer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InstanceBuffer_obj), true, "h3d.impl.InstanceBuffer"));
	*(void **)__this = InstanceBuffer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

InstanceBuffer_obj::InstanceBuffer_obj()
{
}

void InstanceBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InstanceBuffer);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(driver,"driver");
	HX_MARK_MEMBER_NAME(indexCount,"indexCount");
	HX_MARK_MEMBER_NAME(triCount,"triCount");
	HX_MARK_MEMBER_NAME(commandCount,"commandCount");
	HX_MARK_END_CLASS();
}

void InstanceBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(driver,"driver");
	HX_VISIT_MEMBER_NAME(indexCount,"indexCount");
	HX_VISIT_MEMBER_NAME(triCount,"triCount");
	HX_VISIT_MEMBER_NAME(commandCount,"commandCount");
}

::hx::Val InstanceBuffer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"driver") ) { return ::hx::Val( driver ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"triCount") ) { return ::hx::Val( triCount ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setBuffer") ) { return ::hx::Val( setBuffer_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"indexCount") ) { return ::hx::Val( indexCount ); }
		if (HX_FIELD_EQ(inName,"setCommand") ) { return ::hx::Val( setCommand_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"commandCount") ) { return ::hx::Val( commandCount ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val InstanceBuffer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"driver") ) { driver=inValue.Cast<  ::h3d::impl::Driver >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"triCount") ) { triCount=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"indexCount") ) { indexCount=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"commandCount") ) { commandCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InstanceBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("driver",28,80,1f,e5));
	outFields->push(HX_("indexCount",5d,b8,56,1a));
	outFields->push(HX_("triCount",a4,2f,74,48));
	outFields->push(HX_("commandCount",84,b3,8d,61));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo InstanceBuffer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(InstanceBuffer_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsObject /*  ::h3d::impl::Driver */ ,(int)offsetof(InstanceBuffer_obj,driver),HX_("driver",28,80,1f,e5)},
	{::hx::fsInt,(int)offsetof(InstanceBuffer_obj,indexCount),HX_("indexCount",5d,b8,56,1a)},
	{::hx::fsInt,(int)offsetof(InstanceBuffer_obj,triCount),HX_("triCount",a4,2f,74,48)},
	{::hx::fsInt,(int)offsetof(InstanceBuffer_obj,commandCount),HX_("commandCount",84,b3,8d,61)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *InstanceBuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String InstanceBuffer_obj_sMemberFields[] = {
	HX_("data",2a,56,63,42),
	HX_("driver",28,80,1f,e5),
	HX_("indexCount",5d,b8,56,1a),
	HX_("triCount",a4,2f,74,48),
	HX_("commandCount",84,b3,8d,61),
	HX_("setCommand",c9,95,4c,d4),
	HX_("setBuffer",42,32,3c,30),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class InstanceBuffer_obj::__mClass;

void InstanceBuffer_obj::__register()
{
	InstanceBuffer_obj _hx_dummy;
	InstanceBuffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.impl.InstanceBuffer",ae,32,e1,f1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(InstanceBuffer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< InstanceBuffer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InstanceBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InstanceBuffer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace impl
