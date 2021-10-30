#include <hxcpp.h>

#ifndef INCLUDED_h3d_Buffer
#include <h3d/Buffer.h>
#endif
#ifndef INCLUDED_h3d_BufferOffset
#include <h3d/BufferOffset.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_928cb69c79b832d2_172_new,"h3d.BufferOffset","new",0x98bfd01a,"h3d.BufferOffset.new","h3d/Buffer.hx",172,0x67194008)
HX_LOCAL_STACK_FRAME(_hx_pos_928cb69c79b832d2_180_clone,"h3d.BufferOffset","clone",0xd399f597,"h3d.BufferOffset.clone","h3d/Buffer.hx",180,0x67194008)
HX_LOCAL_STACK_FRAME(_hx_pos_928cb69c79b832d2_188_dispose,"h3d.BufferOffset","dispose",0xababe559,"h3d.BufferOffset.dispose","h3d/Buffer.hx",188,0x67194008)
namespace h3d{

void BufferOffset_obj::__construct( ::h3d::Buffer buffer,int offset){
            	HX_STACKFRAME(&_hx_pos_928cb69c79b832d2_172_new)
HXLINE( 176)		this->buffer = buffer;
HXLINE( 177)		this->offset = offset;
            	}

Dynamic BufferOffset_obj::__CreateEmpty() { return new BufferOffset_obj; }

void *BufferOffset_obj::_hx_vtable = 0;

Dynamic BufferOffset_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BufferOffset_obj > _hx_result = new BufferOffset_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BufferOffset_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7992c5cc;
}

 ::h3d::BufferOffset BufferOffset_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_928cb69c79b832d2_180_clone)
HXLINE( 181)		 ::h3d::BufferOffset b =  ::h3d::BufferOffset_obj::__alloc( HX_CTX ,this->buffer,this->offset);
HXLINE( 185)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BufferOffset_obj,clone,return )

void BufferOffset_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_928cb69c79b832d2_188_dispose)
HXLINE( 189)		if (::hx::IsNotNull( this->buffer )) {
HXLINE( 190)			this->buffer->dispose();
HXLINE( 191)			this->buffer = null();
            		}
HXLINE( 193)		this->next = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BufferOffset_obj,dispose,(void))


::hx::ObjectPtr< BufferOffset_obj > BufferOffset_obj::__new( ::h3d::Buffer buffer,int offset) {
	::hx::ObjectPtr< BufferOffset_obj > __this = new BufferOffset_obj();
	__this->__construct(buffer,offset);
	return __this;
}

::hx::ObjectPtr< BufferOffset_obj > BufferOffset_obj::__alloc(::hx::Ctx *_hx_ctx, ::h3d::Buffer buffer,int offset) {
	BufferOffset_obj *__this = (BufferOffset_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BufferOffset_obj), true, "h3d.BufferOffset"));
	*(void **)__this = BufferOffset_obj::_hx_vtable;
	__this->__construct(buffer,offset);
	return __this;
}

BufferOffset_obj::BufferOffset_obj()
{
}

void BufferOffset_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BufferOffset);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void BufferOffset_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(next,"next");
}

::hx::Val BufferOffset_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return ::hx::Val( buffer ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BufferOffset_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::h3d::BufferOffset >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast<  ::h3d::Buffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BufferOffset_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("buffer",00,bd,94,d0));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("next",f3,84,02,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BufferOffset_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::Buffer */ ,(int)offsetof(BufferOffset_obj,buffer),HX_("buffer",00,bd,94,d0)},
	{::hx::fsInt,(int)offsetof(BufferOffset_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsObject /*  ::h3d::BufferOffset */ ,(int)offsetof(BufferOffset_obj,next),HX_("next",f3,84,02,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BufferOffset_obj_sStaticStorageInfo = 0;
#endif

static ::String BufferOffset_obj_sMemberFields[] = {
	HX_("buffer",00,bd,94,d0),
	HX_("offset",93,97,3f,60),
	HX_("next",f3,84,02,49),
	HX_("clone",5d,13,63,48),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class BufferOffset_obj::__mClass;

void BufferOffset_obj::__register()
{
	BufferOffset_obj _hx_dummy;
	BufferOffset_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.BufferOffset",28,7b,23,5b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BufferOffset_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BufferOffset_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BufferOffset_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BufferOffset_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
