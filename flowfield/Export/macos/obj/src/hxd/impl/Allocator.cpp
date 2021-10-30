#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h3d_Buffer
#include <h3d/Buffer.h>
#endif
#ifndef INCLUDED_h3d_BufferFlag
#include <h3d/BufferFlag.h>
#endif
#ifndef INCLUDED_h3d_Indexes
#include <h3d/Indexes.h>
#endif
#ifndef INCLUDED_hxd_impl_Allocator
#include <hxd/impl/Allocator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c33e808a470afab4_15_new,"hxd.impl.Allocator","new",0xa2f6c4e9,"hxd.impl.Allocator.new","hxd/impl/Allocator.hx",15,0x455b7707)
HX_LOCAL_STACK_FRAME(_hx_pos_c33e808a470afab4_21_allocBuffer,"hxd.impl.Allocator","allocBuffer",0xe84740de,"hxd.impl.Allocator.allocBuffer","hxd/impl/Allocator.hx",21,0x455b7707)
HX_LOCAL_STACK_FRAME(_hx_pos_c33e808a470afab4_30_ofFloats,"hxd.impl.Allocator","ofFloats",0x41645ea5,"hxd.impl.Allocator.ofFloats","hxd/impl/Allocator.hx",30,0x455b7707)
HX_LOCAL_STACK_FRAME(_hx_pos_c33e808a470afab4_38_disposeBuffer,"hxd.impl.Allocator","disposeBuffer",0xc70dccc8,"hxd.impl.Allocator.disposeBuffer","hxd/impl/Allocator.hx",38,0x455b7707)
HX_LOCAL_STACK_FRAME(_hx_pos_c33e808a470afab4_42_allocIndexBuffer,"hxd.impl.Allocator","allocIndexBuffer",0x3c331d14,"hxd.impl.Allocator.allocIndexBuffer","hxd/impl/Allocator.hx",42,0x455b7707)
HX_LOCAL_STACK_FRAME(_hx_pos_c33e808a470afab4_45_ofIndexes,"hxd.impl.Allocator","ofIndexes",0xed2504f2,"hxd.impl.Allocator.ofIndexes","hxd/impl/Allocator.hx",45,0x455b7707)
HX_LOCAL_STACK_FRAME(_hx_pos_c33e808a470afab4_53_disposeIndexBuffer,"hxd.impl.Allocator","disposeIndexBuffer",0x3a5720ea,"hxd.impl.Allocator.disposeIndexBuffer","hxd/impl/Allocator.hx",53,0x455b7707)
HX_LOCAL_STACK_FRAME(_hx_pos_c33e808a470afab4_56_onContextLost,"hxd.impl.Allocator","onContextLost",0x7e09065d,"hxd.impl.Allocator.onContextLost","hxd/impl/Allocator.hx",56,0x455b7707)
HX_LOCAL_STACK_FRAME(_hx_pos_c33e808a470afab4_62_allocFloats,"hxd.impl.Allocator","allocFloats",0x5908a735,"hxd.impl.Allocator.allocFloats","hxd/impl/Allocator.hx",62,0x455b7707)
HX_LOCAL_STACK_FRAME(_hx_pos_c33e808a470afab4_65_disposeFloats,"hxd.impl.Allocator","disposeFloats",0x37cf331f,"hxd.impl.Allocator.disposeFloats","hxd/impl/Allocator.hx",65,0x455b7707)
HX_LOCAL_STACK_FRAME(_hx_pos_c33e808a470afab4_69_allocIndexes,"hxd.impl.Allocator","allocIndexes",0x85403a62,"hxd.impl.Allocator.allocIndexes","hxd/impl/Allocator.hx",69,0x455b7707)
HX_LOCAL_STACK_FRAME(_hx_pos_c33e808a470afab4_72_disposeIndexes,"hxd.impl.Allocator","disposeIndexes",0x94341b38,"hxd.impl.Allocator.disposeIndexes","hxd/impl/Allocator.hx",72,0x455b7707)
HX_LOCAL_STACK_FRAME(_hx_pos_c33e808a470afab4_77_set,"hxd.impl.Allocator","set",0xa2fa902b,"hxd.impl.Allocator.set","hxd/impl/Allocator.hx",77,0x455b7707)
HX_LOCAL_STACK_FRAME(_hx_pos_c33e808a470afab4_79_get,"hxd.impl.Allocator","get",0xa2f1751f,"hxd.impl.Allocator.get","hxd/impl/Allocator.hx",79,0x455b7707)
namespace hxd{
namespace impl{

void Allocator_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c33e808a470afab4_15_new)
            	}

Dynamic Allocator_obj::__CreateEmpty() { return new Allocator_obj; }

void *Allocator_obj::_hx_vtable = 0;

Dynamic Allocator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Allocator_obj > _hx_result = new Allocator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Allocator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x056b488f;
}

 ::h3d::Buffer Allocator_obj::allocBuffer(int vertices,int stride,int flags){
            	HX_GC_STACKFRAME(&_hx_pos_c33e808a470afab4_21_allocBuffer)
HXLINE(  22)		::Array< ::Dynamic> _hx_tmp;
HXDLIN(  22)		switch((int)(flags)){
            			case (int)0: {
HXLINE(  22)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(1)->init(0,::h3d::BufferFlag_obj::Dynamic_dyn());
            			}
            			break;
            			case (int)1: {
HXLINE(  22)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(2)->init(0,::h3d::BufferFlag_obj::UniformBuffer_dyn())->init(1,::h3d::BufferFlag_obj::Dynamic_dyn());
            			}
            			break;
            			case (int)2: {
HXLINE(  22)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(1)->init(0,::h3d::BufferFlag_obj::RawFormat_dyn());
            			}
            			break;
            			case (int)3: {
HXLINE(  22)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(2)->init(0,::h3d::BufferFlag_obj::Quads_dyn())->init(1,::h3d::BufferFlag_obj::RawFormat_dyn());
            			}
            			break;
            		}
HXLINE(  21)		return  ::h3d::Buffer_obj::__alloc( HX_CTX ,vertices,stride,_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Allocator_obj,allocBuffer,return )

 ::h3d::Buffer Allocator_obj::ofFloats(::Array< Float > v,int stride,int flags){
            	HX_STACKFRAME(&_hx_pos_c33e808a470afab4_30_ofFloats)
HXLINE(  31)		int nvert = ::Std_obj::_hx_int((( (Float)(v->length) ) / ( (Float)(stride) )));
HXLINE(  32)		 ::h3d::Buffer b = this->allocBuffer(nvert,stride,flags);
HXLINE(  33)		b->uploadVector(v,0,nvert,null());
HXLINE(  34)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Allocator_obj,ofFloats,return )

void Allocator_obj::disposeBuffer( ::h3d::Buffer b){
            	HX_STACKFRAME(&_hx_pos_c33e808a470afab4_38_disposeBuffer)
HXDLIN(  38)		b->dispose();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Allocator_obj,disposeBuffer,(void))

 ::h3d::Indexes Allocator_obj::allocIndexBuffer(int count){
            	HX_GC_STACKFRAME(&_hx_pos_c33e808a470afab4_42_allocIndexBuffer)
HXDLIN(  42)		return  ::h3d::Indexes_obj::__alloc( HX_CTX ,count,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Allocator_obj,allocIndexBuffer,return )

 ::h3d::Indexes Allocator_obj::ofIndexes(::Array< int > ib,::hx::Null< int >  __o_length){
            		int length = __o_length.Default(-1);
            	HX_STACKFRAME(&_hx_pos_c33e808a470afab4_45_ofIndexes)
HXLINE(  46)		bool _hx_tmp;
HXDLIN(  46)		if ((length < 0)) {
HXLINE(  46)			_hx_tmp = ::hx::IsNotNull( ib );
            		}
            		else {
HXLINE(  46)			_hx_tmp = false;
            		}
HXDLIN(  46)		if (_hx_tmp) {
HXLINE(  46)			length = ib->length;
            		}
HXLINE(  47)		 ::h3d::Indexes idx = this->allocIndexBuffer(length);
HXLINE(  48)		idx->upload(ib,0,length,null());
HXLINE(  49)		return idx;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Allocator_obj,ofIndexes,return )

void Allocator_obj::disposeIndexBuffer( ::h3d::Indexes i){
            	HX_STACKFRAME(&_hx_pos_c33e808a470afab4_53_disposeIndexBuffer)
HXDLIN(  53)		i->dispose();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Allocator_obj,disposeIndexBuffer,(void))

void Allocator_obj::onContextLost(){
            	HX_STACKFRAME(&_hx_pos_c33e808a470afab4_56_onContextLost)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Allocator_obj,onContextLost,(void))

::Array< Float > Allocator_obj::allocFloats(int count){
            	HX_STACKFRAME(&_hx_pos_c33e808a470afab4_62_allocFloats)
HXDLIN(  62)		::Array< Float > this1 = ::Array_obj< Float >::__new();
HXDLIN(  62)		if ((count > 0)) {
HXDLIN(  62)			if ((count > this1->length)) {
HXDLIN(  62)				this1[(count - 1)] = ((Float)0.);
            			}
            		}
HXDLIN(  62)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Allocator_obj,allocFloats,return )

void Allocator_obj::disposeFloats(::Array< Float > f){
            	HX_STACKFRAME(&_hx_pos_c33e808a470afab4_65_disposeFloats)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Allocator_obj,disposeFloats,(void))

::Array< int > Allocator_obj::allocIndexes(int count){
            	HX_STACKFRAME(&_hx_pos_c33e808a470afab4_69_allocIndexes)
HXDLIN(  69)		::Array< int > this1 = ::Array_obj< int >::__new();
HXDLIN(  69)		if ((count > 0)) {
HXDLIN(  69)			if ((count > this1->length)) {
HXDLIN(  69)				this1[(count - 1)] = 0;
            			}
            		}
HXDLIN(  69)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Allocator_obj,allocIndexes,return )

void Allocator_obj::disposeIndexes(::Array< int > i){
            	HX_STACKFRAME(&_hx_pos_c33e808a470afab4_72_disposeIndexes)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Allocator_obj,disposeIndexes,(void))

 ::hxd::impl::Allocator Allocator_obj::inst;

void Allocator_obj::set( ::hxd::impl::Allocator a){
            	HX_STACKFRAME(&_hx_pos_c33e808a470afab4_77_set)
HXDLIN(  77)		::hxd::impl::Allocator_obj::inst = a;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Allocator_obj,set,(void))

 ::hxd::impl::Allocator Allocator_obj::get(){
            	HX_GC_STACKFRAME(&_hx_pos_c33e808a470afab4_79_get)
HXLINE(  80)		if (::hx::IsNull( ::hxd::impl::Allocator_obj::inst )) {
HXLINE(  80)			::hxd::impl::Allocator_obj::inst =  ::hxd::impl::Allocator_obj::__alloc( HX_CTX );
            		}
HXLINE(  81)		return ::hxd::impl::Allocator_obj::inst;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Allocator_obj,get,return )


::hx::ObjectPtr< Allocator_obj > Allocator_obj::__new() {
	::hx::ObjectPtr< Allocator_obj > __this = new Allocator_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Allocator_obj > Allocator_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Allocator_obj *__this = (Allocator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Allocator_obj), false, "hxd.impl.Allocator"));
	*(void **)__this = Allocator_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Allocator_obj::Allocator_obj()
{
}

::hx::Val Allocator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"ofFloats") ) { return ::hx::Val( ofFloats_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ofIndexes") ) { return ::hx::Val( ofIndexes_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"allocBuffer") ) { return ::hx::Val( allocBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"allocFloats") ) { return ::hx::Val( allocFloats_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"allocIndexes") ) { return ::hx::Val( allocIndexes_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"disposeBuffer") ) { return ::hx::Val( disposeBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"onContextLost") ) { return ::hx::Val( onContextLost_dyn() ); }
		if (HX_FIELD_EQ(inName,"disposeFloats") ) { return ::hx::Val( disposeFloats_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"disposeIndexes") ) { return ::hx::Val( disposeIndexes_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"allocIndexBuffer") ) { return ::hx::Val( allocIndexBuffer_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"disposeIndexBuffer") ) { return ::hx::Val( disposeIndexBuffer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Allocator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"inst") ) { outValue = ( inst ); return true; }
	}
	return false;
}

bool Allocator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"inst") ) { inst=ioValue.Cast<  ::hxd::impl::Allocator >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Allocator_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Allocator_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::impl::Allocator */ ,(void *) &Allocator_obj::inst,HX_("inst",c6,43,bb,45)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Allocator_obj_sMemberFields[] = {
	HX_("allocBuffer",55,1b,5f,d8),
	HX_("ofFloats",ce,63,57,d4),
	HX_("disposeBuffer",ff,72,aa,d0),
	HX_("allocIndexBuffer",3d,f3,dc,f9),
	HX_("ofIndexes",a9,83,d6,ee),
	HX_("disposeIndexBuffer",53,93,c1,16),
	HX_("onContextLost",94,ac,a5,87),
	HX_("allocFloats",ac,81,20,49),
	HX_("disposeFloats",56,d9,6b,41),
	HX_("allocIndexes",0b,88,07,aa),
	HX_("disposeIndexes",21,e5,a8,f3),
	::String(null()) };

static void Allocator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Allocator_obj::inst,"inst");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Allocator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Allocator_obj::inst,"inst");
};

#endif

::hx::Class Allocator_obj::__mClass;

static ::String Allocator_obj_sStaticFields[] = {
	HX_("inst",c6,43,bb,45),
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	::String(null())
};

void Allocator_obj::__register()
{
	Allocator_obj _hx_dummy;
	Allocator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.impl.Allocator",77,1c,4e,88);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Allocator_obj::__GetStatic;
	__mClass->mSetStaticField = &Allocator_obj::__SetStatic;
	__mClass->mMarkFunc = Allocator_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Allocator_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Allocator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Allocator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Allocator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Allocator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Allocator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace impl
