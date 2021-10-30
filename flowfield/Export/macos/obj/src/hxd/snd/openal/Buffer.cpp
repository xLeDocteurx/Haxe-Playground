#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_Buffer
#include <hxd/snd/openal/Buffer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_867cc0dc13e55edc_143_new,"hxd.snd.openal.Buffer","new",0x808647cc,"hxd.snd.openal.Buffer.new","hxd/snd/openal/Emulator.hx",143,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_867cc0dc13e55edc_157_dispose,"hxd.snd.openal.Buffer","dispose",0x1acd1e0b,"hxd.snd.openal.Buffer.dispose","hxd/snd/openal/Emulator.hx",157,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_867cc0dc13e55edc_163_alloc,"hxd.snd.openal.Buffer","alloc",0xece3cee1,"hxd.snd.openal.Buffer.alloc","hxd/snd/openal/Emulator.hx",163,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_867cc0dc13e55edc_169_toInt,"hxd.snd.openal.Buffer","toInt",0xdf61e8a0,"hxd.snd.openal.Buffer.toInt","hxd/snd/openal/Emulator.hx",169,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_867cc0dc13e55edc_170_ofInt,"hxd.snd.openal.Buffer","ofInt",0xf86e1684,"hxd.snd.openal.Buffer.ofInt","hxd/snd/openal/Emulator.hx",170,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_867cc0dc13e55edc_144_boot,"hxd.snd.openal.Buffer","boot",0xed118b46,"hxd.snd.openal.Buffer.boot","hxd/snd/openal/Emulator.hx",144,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_867cc0dc13e55edc_145_boot,"hxd.snd.openal.Buffer","boot",0xed118b46,"hxd.snd.openal.Buffer.boot","hxd/snd/openal/Emulator.hx",145,0x857ad050)
namespace hxd{
namespace snd{
namespace openal{

void Buffer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_867cc0dc13e55edc_143_new)
HXLINE( 150)		this->samples = 0;
HXLINE( 149)		this->frequency = 1;
HXLINE( 153)		this->id = ++::hxd::snd::openal::Buffer_obj::ID;
HXLINE( 154)		::hxd::snd::openal::Buffer_obj::all->set(this->id,::hx::ObjectPtr<OBJ_>(this));
            	}

Dynamic Buffer_obj::__CreateEmpty() { return new Buffer_obj; }

void *Buffer_obj::_hx_vtable = 0;

Dynamic Buffer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Buffer_obj > _hx_result = new Buffer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Buffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x14a7846a;
}

void Buffer_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_867cc0dc13e55edc_157_dispose)
HXLINE( 158)		this->data = null();
HXLINE( 159)		::hxd::snd::openal::Buffer_obj::all->remove(this->id);
HXLINE( 160)		this->id = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Buffer_obj,dispose,(void))

::Array< Float > Buffer_obj::alloc(int size){
            	HX_STACKFRAME(&_hx_pos_867cc0dc13e55edc_163_alloc)
HXLINE( 164)		bool _hx_tmp;
HXDLIN( 164)		if (::hx::IsNotNull( this->data )) {
HXLINE( 164)			_hx_tmp = (this->data->length != size);
            		}
            		else {
HXLINE( 164)			_hx_tmp = true;
            		}
HXDLIN( 164)		if (_hx_tmp) {
HXLINE( 165)			::Array< Float > this1 = ::Array_obj< Float >::__new(size);
HXDLIN( 165)			this->data = this1;
            		}
HXLINE( 166)		return this->data;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Buffer_obj,alloc,return )

int Buffer_obj::toInt(){
            	HX_STACKFRAME(&_hx_pos_867cc0dc13e55edc_169_toInt)
HXDLIN( 169)		return this->id;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Buffer_obj,toInt,return )

int Buffer_obj::ID;

 ::haxe::ds::IntMap Buffer_obj::all;

 ::hxd::snd::openal::Buffer Buffer_obj::ofInt(int i){
            	HX_STACKFRAME(&_hx_pos_867cc0dc13e55edc_170_ofInt)
HXDLIN( 170)		return ( ( ::hxd::snd::openal::Buffer)(::hxd::snd::openal::Buffer_obj::all->get(i)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Buffer_obj,ofInt,return )


::hx::ObjectPtr< Buffer_obj > Buffer_obj::__new() {
	::hx::ObjectPtr< Buffer_obj > __this = new Buffer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Buffer_obj > Buffer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Buffer_obj *__this = (Buffer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Buffer_obj), true, "hxd.snd.openal.Buffer"));
	*(void **)__this = Buffer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Buffer_obj::Buffer_obj()
{
}

void Buffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Buffer);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(frequency,"frequency");
	HX_MARK_MEMBER_NAME(samples,"samples");
	HX_MARK_END_CLASS();
}

void Buffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(frequency,"frequency");
	HX_VISIT_MEMBER_NAME(samples,"samples");
}

::hx::Val Buffer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return ::hx::Val( alloc_dyn() ); }
		if (HX_FIELD_EQ(inName,"toInt") ) { return ::hx::Val( toInt_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"samples") ) { return ::hx::Val( samples ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frequency") ) { return ::hx::Val( frequency ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Buffer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { outValue = ( ID ); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"all") ) { outValue = ( all ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ofInt") ) { outValue = ofInt_dyn(); return true; }
	}
	return false;
}

::hx::Val Buffer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"samples") ) { samples=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frequency") ) { frequency=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Buffer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=ioValue.Cast< int >(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"all") ) { all=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
	}
	return false;
}

void Buffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("frequency",9c,82,ea,bb));
	outFields->push(HX_("samples",09,c5,c9,83));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Buffer_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Buffer_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Buffer_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsInt,(int)offsetof(Buffer_obj,frequency),HX_("frequency",9c,82,ea,bb)},
	{::hx::fsInt,(int)offsetof(Buffer_obj,samples),HX_("samples",09,c5,c9,83)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Buffer_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Buffer_obj::ID,HX_("ID",db,3f,00,00)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &Buffer_obj::all,HX_("all",21,f9,49,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Buffer_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("data",2a,56,63,42),
	HX_("frequency",9c,82,ea,bb),
	HX_("samples",09,c5,c9,83),
	HX_("dispose",9f,80,4c,bb),
	HX_("alloc",75,a4,93,21),
	HX_("toInt",34,be,11,14),
	::String(null()) };

static void Buffer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Buffer_obj::ID,"ID");
	HX_MARK_MEMBER_NAME(Buffer_obj::all,"all");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Buffer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Buffer_obj::ID,"ID");
	HX_VISIT_MEMBER_NAME(Buffer_obj::all,"all");
};

#endif

::hx::Class Buffer_obj::__mClass;

static ::String Buffer_obj_sStaticFields[] = {
	HX_("ID",db,3f,00,00),
	HX_("all",21,f9,49,00),
	HX_("ofInt",18,ec,1d,2d),
	::String(null())
};

void Buffer_obj::__register()
{
	Buffer_obj _hx_dummy;
	Buffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.openal.Buffer",da,b1,43,12);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Buffer_obj::__GetStatic;
	__mClass->mSetStaticField = &Buffer_obj::__SetStatic;
	__mClass->mMarkFunc = Buffer_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Buffer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Buffer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Buffer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Buffer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Buffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Buffer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Buffer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_867cc0dc13e55edc_144_boot)
HXDLIN( 144)		ID = 0;
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_867cc0dc13e55edc_145_boot)
HXDLIN( 145)		all =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace hxd
} // end namespace snd
} // end namespace openal
