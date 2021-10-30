#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_Buffer
#include <h3d/Buffer.h>
#endif
#ifndef INCLUDED_h3d_BufferFlag
#include <h3d/BufferFlag.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_impl_ManagedBuffer
#include <h3d/impl/ManagedBuffer.h>
#endif
#ifndef INCLUDED_h3d_impl_MemoryManager
#include <h3d/impl/MemoryManager.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5a7f32a39d559c36_52_new,"h3d.Buffer","new",0x4e24d927,"h3d.Buffer.new","h3d/Buffer.hx",52,0x67194008)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7f32a39d559c36_73_isDisposed,"h3d.Buffer","isDisposed",0x2a69cb08,"h3d.Buffer.isDisposed","h3d/Buffer.hx",73,0x67194008)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7f32a39d559c36_77_dispose,"h3d.Buffer","dispose",0x8efef8e6,"h3d.Buffer.dispose","h3d/Buffer.hx",77,0x67194008)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7f32a39d559c36_87_totalVertices,"h3d.Buffer","totalVertices",0xdd299b64,"h3d.Buffer.totalVertices","h3d/Buffer.hx",87,0x67194008)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7f32a39d559c36_97_uploadVector,"h3d.Buffer","uploadVector",0x78060bfd,"h3d.Buffer.uploadVector","h3d/Buffer.hx",97,0x67194008)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7f32a39d559c36_114_uploadBytes,"h3d.Buffer","uploadBytes",0x6acc7271,"h3d.Buffer.uploadBytes","h3d/Buffer.hx",114,0x67194008)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7f32a39d559c36_126_readBytes,"h3d.Buffer","readBytes",0x8df5ad3c,"h3d.Buffer.readBytes","h3d/Buffer.hx",126,0x67194008)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7f32a39d559c36_143_ofFloats,"h3d.Buffer","ofFloats",0x3cce29a7,"h3d.Buffer.ofFloats","h3d/Buffer.hx",143,0x67194008)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7f32a39d559c36_150_ofSubFloats,"h3d.Buffer","ofSubFloats",0xf3532ca7,"h3d.Buffer.ofSubFloats","h3d/Buffer.hx",150,0x67194008)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7f32a39d559c36_39_boot,"h3d.Buffer","boot",0x0a32298b,"h3d.Buffer.boot","h3d/Buffer.hx",39,0x67194008)
namespace h3d{

void Buffer_obj::__construct(int vertices,int stride,::Array< ::Dynamic> flags){
            	HX_STACKFRAME(&_hx_pos_5a7f32a39d559c36_52_new)
HXLINE(  53)		this->id = ::h3d::Buffer_obj::GUID++;
HXLINE(  54)		this->vertices = vertices;
HXLINE(  55)		int this1 = 0;
HXDLIN(  55)		this->flags = this1;
HXLINE(  59)		if (::hx::IsNotNull( flags )) {
HXLINE(  60)			int _g = 0;
HXDLIN(  60)			while((_g < flags->length)){
HXLINE(  60)				 ::h3d::BufferFlag f = flags->__get(_g).StaticCast<  ::h3d::BufferFlag >();
HXDLIN(  60)				_g = (_g + 1);
HXLINE(  61)				 ::h3d::Buffer _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  61)				int _hx_tmp1 = _hx_tmp->flags;
HXDLIN(  61)				_hx_tmp->flags = (_hx_tmp1 | (1 << _hx_getEnumValueIndex(f)));
            			}
            		}
HXLINE(  68)		int this2 = this->flags;
HXDLIN(  68)		if (((this2 & (1 << _hx_getEnumValueIndex(::h3d::BufferFlag_obj::NoAlloc_dyn()))) == 0)) {
HXLINE(  69)			::h3d::Engine_obj::CURRENT->mem->allocBuffer(::hx::ObjectPtr<OBJ_>(this),stride);
            		}
            	}

Dynamic Buffer_obj::__CreateEmpty() { return new Buffer_obj; }

void *Buffer_obj::_hx_vtable = 0;

Dynamic Buffer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Buffer_obj > _hx_result = new Buffer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Buffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x28edb159;
}

bool Buffer_obj::isDisposed(){
            	HX_STACKFRAME(&_hx_pos_5a7f32a39d559c36_73_isDisposed)
HXDLIN(  73)		if (::hx::IsNotNull( this->buffer )) {
HXDLIN(  73)			return ::hx::IsNull( this->buffer->vbuf );
            		}
            		else {
HXDLIN(  73)			return true;
            		}
HXDLIN(  73)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Buffer_obj,isDisposed,return )

void Buffer_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_5a7f32a39d559c36_77_dispose)
HXDLIN(  77)		if (::hx::IsNotNull( this->buffer )) {
HXLINE(  78)			this->buffer->freeBuffer(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  79)			this->buffer = null();
HXLINE(  80)			if (::hx::IsNotNull( this->next )) {
HXLINE(  80)				this->next->dispose();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Buffer_obj,dispose,(void))

int Buffer_obj::totalVertices(){
            	HX_STACKFRAME(&_hx_pos_5a7f32a39d559c36_87_totalVertices)
HXLINE(  88)		int count = 0;
HXLINE(  89)		 ::h3d::Buffer b = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  90)		while(::hx::IsNotNull( b )){
HXLINE(  91)			count = (count + b->vertices);
HXLINE(  92)			b = b->next;
            		}
HXLINE(  94)		return count;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Buffer_obj,totalVertices,return )

void Buffer_obj::uploadVector(::Array< Float > buf,int bufPos,int vertices,::hx::Null< int >  __o_startVertice){
            		int startVertice = __o_startVertice.Default(0);
            	HX_STACKFRAME(&_hx_pos_5a7f32a39d559c36_97_uploadVector)
HXLINE(  98)		 ::h3d::Buffer cur = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  99)		while(true){
HXLINE(  99)			bool _hx_tmp;
HXDLIN(  99)			if (::hx::IsNotNull( cur )) {
HXLINE(  99)				_hx_tmp = (startVertice >= cur->vertices);
            			}
            			else {
HXLINE(  99)				_hx_tmp = false;
            			}
HXDLIN(  99)			if (!(_hx_tmp)) {
HXLINE(  99)				goto _hx_goto_6;
            			}
HXLINE( 100)			startVertice = (startVertice - cur->vertices);
HXLINE( 101)			cur = cur->next;
            		}
            		_hx_goto_6:;
HXLINE( 103)		while((vertices > 0)){
HXLINE( 104)			if (::hx::IsNull( cur )) {
HXLINE( 104)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Too many vertices",ee,04,2d,ec)));
            			}
HXLINE( 105)			int count;
HXDLIN( 105)			if (((vertices + startVertice) > cur->vertices)) {
HXLINE( 105)				count = (cur->vertices - startVertice);
            			}
            			else {
HXLINE( 105)				count = vertices;
            			}
HXLINE( 106)			cur->buffer->uploadVertexBuffer((cur->position + startVertice),count,buf,bufPos);
HXLINE( 107)			startVertice = 0;
HXLINE( 108)			bufPos = (bufPos + (count * this->buffer->stride));
HXLINE( 109)			vertices = (vertices - count);
HXLINE( 110)			cur = cur->next;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Buffer_obj,uploadVector,(void))

void Buffer_obj::uploadBytes( ::haxe::io::Bytes data,int dataPos,int vertices){
            	HX_STACKFRAME(&_hx_pos_5a7f32a39d559c36_114_uploadBytes)
HXLINE( 115)		 ::h3d::Buffer cur = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 116)		while((vertices > 0)){
HXLINE( 117)			if (::hx::IsNull( cur )) {
HXLINE( 117)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Too many vertices",ee,04,2d,ec)));
            			}
HXLINE( 118)			int count;
HXDLIN( 118)			if ((vertices > cur->vertices)) {
HXLINE( 118)				count = cur->vertices;
            			}
            			else {
HXLINE( 118)				count = vertices;
            			}
HXLINE( 119)			cur->buffer->uploadVertexBytes(cur->position,count,data,dataPos);
HXLINE( 120)			dataPos = (dataPos + ((count * this->buffer->stride) * 4));
HXLINE( 121)			vertices = (vertices - count);
HXLINE( 122)			cur = cur->next;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Buffer_obj,uploadBytes,(void))

void Buffer_obj::readBytes( ::haxe::io::Bytes bytes,int bytesPosition,int vertices,::hx::Null< int >  __o_startVertice){
            		int startVertice = __o_startVertice.Default(0);
            	HX_STACKFRAME(&_hx_pos_5a7f32a39d559c36_126_readBytes)
HXLINE( 127)		 ::h3d::Buffer cur = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 128)		while(true){
HXLINE( 128)			bool _hx_tmp;
HXDLIN( 128)			if (::hx::IsNotNull( cur )) {
HXLINE( 128)				_hx_tmp = (startVertice >= cur->vertices);
            			}
            			else {
HXLINE( 128)				_hx_tmp = false;
            			}
HXDLIN( 128)			if (!(_hx_tmp)) {
HXLINE( 128)				goto _hx_goto_11;
            			}
HXLINE( 129)			startVertice = (startVertice - cur->vertices);
HXLINE( 130)			cur = cur->next;
            		}
            		_hx_goto_11:;
HXLINE( 132)		while((vertices > 0)){
HXLINE( 133)			if (::hx::IsNull( cur )) {
HXLINE( 133)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Too many vertices",ee,04,2d,ec)));
            			}
HXLINE( 134)			int count;
HXDLIN( 134)			if (((vertices + startVertice) > cur->vertices)) {
HXLINE( 134)				count = (cur->vertices - startVertice);
            			}
            			else {
HXLINE( 134)				count = vertices;
            			}
HXLINE( 135)			cur->buffer->readVertexBytes((cur->position + startVertice),count,bytes,bytesPosition);
HXLINE( 136)			startVertice = 0;
HXLINE( 137)			bytesPosition = (bytesPosition + ((count * this->buffer->stride) * 4));
HXLINE( 138)			vertices = (vertices - count);
HXLINE( 139)			cur = cur->next;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Buffer_obj,readBytes,(void))

int Buffer_obj::GUID;

 ::h3d::Buffer Buffer_obj::ofFloats(::Array< Float > v,int stride,::Array< ::Dynamic> flags){
            	HX_GC_STACKFRAME(&_hx_pos_5a7f32a39d559c36_143_ofFloats)
HXLINE( 144)		int nvert = ::Std_obj::_hx_int((( (Float)(v->length) ) / ( (Float)(stride) )));
HXLINE( 145)		 ::h3d::Buffer b =  ::h3d::Buffer_obj::__alloc( HX_CTX ,nvert,stride,flags);
HXLINE( 146)		b->uploadVector(v,0,nvert,null());
HXLINE( 147)		return b;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Buffer_obj,ofFloats,return )

 ::h3d::Buffer Buffer_obj::ofSubFloats(::Array< Float > v,int stride,int vertices,::Array< ::Dynamic> flags){
            	HX_GC_STACKFRAME(&_hx_pos_5a7f32a39d559c36_150_ofSubFloats)
HXLINE( 151)		 ::h3d::Buffer b =  ::h3d::Buffer_obj::__alloc( HX_CTX ,vertices,stride,flags);
HXLINE( 152)		b->uploadVector(v,0,vertices,null());
HXLINE( 153)		return b;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Buffer_obj,ofSubFloats,return )


::hx::ObjectPtr< Buffer_obj > Buffer_obj::__new(int vertices,int stride,::Array< ::Dynamic> flags) {
	::hx::ObjectPtr< Buffer_obj > __this = new Buffer_obj();
	__this->__construct(vertices,stride,flags);
	return __this;
}

::hx::ObjectPtr< Buffer_obj > Buffer_obj::__alloc(::hx::Ctx *_hx_ctx,int vertices,int stride,::Array< ::Dynamic> flags) {
	Buffer_obj *__this = (Buffer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Buffer_obj), true, "h3d.Buffer"));
	*(void **)__this = Buffer_obj::_hx_vtable;
	__this->__construct(vertices,stride,flags);
	return __this;
}

Buffer_obj::Buffer_obj()
{
}

void Buffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Buffer);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(flags,"flags");
	HX_MARK_END_CLASS();
}

void Buffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(flags,"flags");
}

::hx::Val Buffer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flags") ) { return ::hx::Val( flags ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return ::hx::Val( buffer ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return ::hx::Val( position ); }
		if (HX_FIELD_EQ(inName,"vertices") ) { return ::hx::Val( vertices ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return ::hx::Val( readBytes_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isDisposed") ) { return ::hx::Val( isDisposed_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"uploadBytes") ) { return ::hx::Val( uploadBytes_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"uploadVector") ) { return ::hx::Val( uploadVector_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"totalVertices") ) { return ::hx::Val( totalVertices_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Buffer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"GUID") ) { outValue = ( GUID ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ofFloats") ) { outValue = ofFloats_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ofSubFloats") ) { outValue = ofSubFloats_dyn(); return true; }
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
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::h3d::Buffer >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flags") ) { flags=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast<  ::h3d::impl::ManagedBuffer >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Buffer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"GUID") ) { GUID=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Buffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("buffer",00,bd,94,d0));
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("vertices",f9,bf,15,6a));
	outFields->push(HX_("next",f3,84,02,49));
	outFields->push(HX_("flags",47,2b,8c,02));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Buffer_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Buffer_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsObject /*  ::h3d::impl::ManagedBuffer */ ,(int)offsetof(Buffer_obj,buffer),HX_("buffer",00,bd,94,d0)},
	{::hx::fsInt,(int)offsetof(Buffer_obj,position),HX_("position",a9,a0,fa,ca)},
	{::hx::fsInt,(int)offsetof(Buffer_obj,vertices),HX_("vertices",f9,bf,15,6a)},
	{::hx::fsObject /*  ::h3d::Buffer */ ,(int)offsetof(Buffer_obj,next),HX_("next",f3,84,02,49)},
	{::hx::fsInt,(int)offsetof(Buffer_obj,flags),HX_("flags",47,2b,8c,02)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Buffer_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Buffer_obj::GUID,HX_("GUID",89,e5,2e,2f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Buffer_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("buffer",00,bd,94,d0),
	HX_("position",a9,a0,fa,ca),
	HX_("vertices",f9,bf,15,6a),
	HX_("next",f3,84,02,49),
	HX_("flags",47,2b,8c,02),
	HX_("isDisposed",ef,1c,53,a2),
	HX_("dispose",9f,80,4c,bb),
	HX_("totalVertices",dd,33,d9,9f),
	HX_("uploadVector",a4,e5,54,ba),
	HX_("uploadBytes",aa,ca,0a,df),
	HX_("readBytes",35,55,7f,8e),
	::String(null()) };

static void Buffer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Buffer_obj::GUID,"GUID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Buffer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Buffer_obj::GUID,"GUID");
};

#endif

::hx::Class Buffer_obj::__mClass;

static ::String Buffer_obj_sStaticFields[] = {
	HX_("GUID",89,e5,2e,2f),
	HX_("ofFloats",ce,63,57,d4),
	HX_("ofSubFloats",e0,84,91,67),
	::String(null())
};

void Buffer_obj::__register()
{
	Buffer_obj _hx_dummy;
	Buffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.Buffer",b5,b9,11,fa);
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
            	HX_STACKFRAME(&_hx_pos_5a7f32a39d559c36_39_boot)
HXDLIN(  39)		GUID = 0;
            	}
}

} // end namespace h3d
