#include <hxcpp.h>

#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_Indexes
#include <h3d/Indexes.h>
#endif
#ifndef INCLUDED_h3d_impl_Driver
#include <h3d/impl/Driver.h>
#endif
#ifndef INCLUDED_h3d_impl_MemoryManager
#include <h3d/impl/MemoryManager.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_adaee2136b292b5c_15_new,"h3d.Indexes","new",0xeae2d01d,"h3d.Indexes.new","h3d/Indexes.hx",15,0xfa75cd34)
HX_LOCAL_STACK_FRAME(_hx_pos_adaee2136b292b5c_26_isDisposed,"h3d.Indexes","isDisposed",0xbf703ed2,"h3d.Indexes.isDisposed","h3d/Indexes.hx",26,0xfa75cd34)
HX_LOCAL_STACK_FRAME(_hx_pos_adaee2136b292b5c_30_upload,"h3d.Indexes","upload",0x38e17e64,"h3d.Indexes.upload","h3d/Indexes.hx",30,0xfa75cd34)
HX_LOCAL_STACK_FRAME(_hx_pos_adaee2136b292b5c_34_uploadBytes,"h3d.Indexes","uploadBytes",0x3b6b4f67,"h3d.Indexes.uploadBytes","h3d/Indexes.hx",34,0xfa75cd34)
HX_LOCAL_STACK_FRAME(_hx_pos_adaee2136b292b5c_38_readBytes,"h3d.Indexes","readBytes",0x6c3040b2,"h3d.Indexes.readBytes","h3d/Indexes.hx",38,0xfa75cd34)
HX_LOCAL_STACK_FRAME(_hx_pos_adaee2136b292b5c_42_dispose,"h3d.Indexes","dispose",0x0582a2dc,"h3d.Indexes.dispose","h3d/Indexes.hx",42,0xfa75cd34)
HX_LOCAL_STACK_FRAME(_hx_pos_adaee2136b292b5c_46_alloc,"h3d.Indexes","alloc",0x0dafcd72,"h3d.Indexes.alloc","h3d/Indexes.hx",46,0xfa75cd34)
namespace h3d{

void Indexes_obj::__construct(int count,::hx::Null< bool >  __o_is32){
            		bool is32 = __o_is32.Default(false);
            	HX_STACKFRAME(&_hx_pos_adaee2136b292b5c_15_new)
HXLINE(  16)		this->mem = ::h3d::Engine_obj::CURRENT->mem;
HXLINE(  17)		this->count = count;
HXLINE(  18)		this->is32 = is32;
HXLINE(  19)		this->mem->allocIndexes(::hx::ObjectPtr<OBJ_>(this));
            	}

Dynamic Indexes_obj::__CreateEmpty() { return new Indexes_obj; }

void *Indexes_obj::_hx_vtable = 0;

Dynamic Indexes_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Indexes_obj > _hx_result = new Indexes_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Indexes_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x08869ceb;
}

bool Indexes_obj::isDisposed(){
            	HX_STACKFRAME(&_hx_pos_adaee2136b292b5c_26_isDisposed)
HXDLIN(  26)		return ::hx::IsNull( this->ibuf );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Indexes_obj,isDisposed,return )

void Indexes_obj::upload(::Array< int > indexes,int pos,int count,::hx::Null< int >  __o_bufferPos){
            		int bufferPos = __o_bufferPos.Default(0);
            	HX_STACKFRAME(&_hx_pos_adaee2136b292b5c_30_upload)
HXDLIN(  30)		this->mem->driver->uploadIndexBuffer(this->ibuf,pos,count,indexes,bufferPos);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Indexes_obj,upload,(void))

void Indexes_obj::uploadBytes( ::haxe::io::Bytes bytes,int dataPos,int indices){
            	HX_STACKFRAME(&_hx_pos_adaee2136b292b5c_34_uploadBytes)
HXDLIN(  34)		this->mem->driver->uploadIndexBytes(this->ibuf,0,indices,bytes,dataPos);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Indexes_obj,uploadBytes,(void))

void Indexes_obj::readBytes( ::haxe::io::Bytes bytes,int bytesPosition,int indices,::hx::Null< int >  __o_startIndice){
            		int startIndice = __o_startIndice.Default(0);
            	HX_STACKFRAME(&_hx_pos_adaee2136b292b5c_38_readBytes)
HXDLIN(  38)		this->mem->driver->readIndexBytes(this->ibuf,startIndice,indices,bytes,bytesPosition);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Indexes_obj,readBytes,(void))

void Indexes_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_adaee2136b292b5c_42_dispose)
HXDLIN(  42)		if (::hx::IsNotNull( this->ibuf )) {
HXLINE(  43)			this->mem->deleteIndexes(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Indexes_obj,dispose,(void))

 ::h3d::Indexes Indexes_obj::alloc(::Array< int > i,::hx::Null< int >  __o_startPos,::hx::Null< int >  __o_length){
            		int startPos = __o_startPos.Default(0);
            		int length = __o_length.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_adaee2136b292b5c_46_alloc)
HXLINE(  47)		if ((length < 0)) {
HXLINE(  47)			length = i->length;
            		}
HXLINE(  48)		 ::h3d::Indexes idx =  ::h3d::Indexes_obj::__alloc( HX_CTX ,length,null());
HXLINE(  49)		idx->upload(i,0,length,null());
HXLINE(  50)		return idx;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Indexes_obj,alloc,return )


::hx::ObjectPtr< Indexes_obj > Indexes_obj::__new(int count,::hx::Null< bool >  __o_is32) {
	::hx::ObjectPtr< Indexes_obj > __this = new Indexes_obj();
	__this->__construct(count,__o_is32);
	return __this;
}

::hx::ObjectPtr< Indexes_obj > Indexes_obj::__alloc(::hx::Ctx *_hx_ctx,int count,::hx::Null< bool >  __o_is32) {
	Indexes_obj *__this = (Indexes_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Indexes_obj), true, "h3d.Indexes"));
	*(void **)__this = Indexes_obj::_hx_vtable;
	__this->__construct(count,__o_is32);
	return __this;
}

Indexes_obj::Indexes_obj()
{
}

void Indexes_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Indexes);
	HX_MARK_MEMBER_NAME(mem,"mem");
	HX_MARK_MEMBER_NAME(ibuf,"ibuf");
	HX_MARK_MEMBER_NAME(is32,"is32");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_END_CLASS();
}

void Indexes_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mem,"mem");
	HX_VISIT_MEMBER_NAME(ibuf,"ibuf");
	HX_VISIT_MEMBER_NAME(is32,"is32");
	HX_VISIT_MEMBER_NAME(count,"count");
}

::hx::Val Indexes_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mem") ) { return ::hx::Val( mem ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ibuf") ) { return ::hx::Val( ibuf ); }
		if (HX_FIELD_EQ(inName,"is32") ) { return ::hx::Val( is32 ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { return ::hx::Val( count ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"upload") ) { return ::hx::Val( upload_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return ::hx::Val( readBytes_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isDisposed") ) { return ::hx::Val( isDisposed_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"uploadBytes") ) { return ::hx::Val( uploadBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Indexes_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { outValue = alloc_dyn(); return true; }
	}
	return false;
}

::hx::Val Indexes_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mem") ) { mem=inValue.Cast<  ::h3d::impl::MemoryManager >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ibuf") ) { ibuf=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"is32") ) { is32=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Indexes_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mem",15,0e,53,00));
	outFields->push(HX_("ibuf",6a,2a,b2,45));
	outFields->push(HX_("is32",09,d7,be,45));
	outFields->push(HX_("count",cf,44,63,4a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Indexes_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::impl::MemoryManager */ ,(int)offsetof(Indexes_obj,mem),HX_("mem",15,0e,53,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Indexes_obj,ibuf),HX_("ibuf",6a,2a,b2,45)},
	{::hx::fsBool,(int)offsetof(Indexes_obj,is32),HX_("is32",09,d7,be,45)},
	{::hx::fsInt,(int)offsetof(Indexes_obj,count),HX_("count",cf,44,63,4a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Indexes_obj_sStaticStorageInfo = 0;
#endif

static ::String Indexes_obj_sMemberFields[] = {
	HX_("mem",15,0e,53,00),
	HX_("ibuf",6a,2a,b2,45),
	HX_("is32",09,d7,be,45),
	HX_("count",cf,44,63,4a),
	HX_("isDisposed",ef,1c,53,a2),
	HX_("upload",01,ca,59,8c),
	HX_("uploadBytes",aa,ca,0a,df),
	HX_("readBytes",35,55,7f,8e),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class Indexes_obj::__mClass;

static ::String Indexes_obj_sStaticFields[] = {
	HX_("alloc",75,a4,93,21),
	::String(null())
};

void Indexes_obj::__register()
{
	Indexes_obj _hx_dummy;
	Indexes_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.Indexes",ab,7d,9f,04);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Indexes_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Indexes_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Indexes_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Indexes_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Indexes_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Indexes_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
