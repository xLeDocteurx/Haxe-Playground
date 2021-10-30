#include <hxcpp.h>

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
#ifndef INCLUDED_h3d_impl_Driver
#include <h3d/impl/Driver.h>
#endif
#ifndef INCLUDED_h3d_impl_ManagedBuffer
#include <h3d/impl/ManagedBuffer.h>
#endif
#ifndef INCLUDED_h3d_impl_MemoryManager
#include <h3d/impl/MemoryManager.h>
#endif
#ifndef INCLUDED_h3d_impl__ManagedBuffer_FreeCell
#include <h3d/impl/_ManagedBuffer/FreeCell.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b24f96a3fe434fbf_30_new,"h3d.impl.ManagedBuffer","new",0xe1d9e698,"h3d.impl.ManagedBuffer.new","h3d/impl/ManagedBuffer.hx",30,0xc1621038)
HX_LOCAL_STACK_FRAME(_hx_pos_b24f96a3fe434fbf_45_uploadVertexBuffer,"h3d.impl.ManagedBuffer","uploadVertexBuffer",0x0aa8ebed,"h3d.impl.ManagedBuffer.uploadVertexBuffer","h3d/impl/ManagedBuffer.hx",45,0xc1621038)
HX_LOCAL_STACK_FRAME(_hx_pos_b24f96a3fe434fbf_49_uploadVertexBytes,"h3d.impl.ManagedBuffer","uploadVertexBytes",0x8b57d61e,"h3d.impl.ManagedBuffer.uploadVertexBytes","h3d/impl/ManagedBuffer.hx",49,0xc1621038)
HX_LOCAL_STACK_FRAME(_hx_pos_b24f96a3fe434fbf_53_readVertexBytes,"h3d.impl.ManagedBuffer","readVertexBytes",0xd8965ce9,"h3d.impl.ManagedBuffer.readVertexBytes","h3d/impl/ManagedBuffer.hx",53,0xc1621038)
HX_LOCAL_STACK_FRAME(_hx_pos_b24f96a3fe434fbf_56_alloc,"h3d.impl.ManagedBuffer","alloc",0x0175b8ad,"h3d.impl.ManagedBuffer.alloc","h3d/impl/ManagedBuffer.hx",56,0xc1621038)
HX_LOCAL_STACK_FRAME(_hx_pos_b24f96a3fe434fbf_72_getFreeVertices,"h3d.impl.ManagedBuffer","getFreeVertices",0xf20d84b3,"h3d.impl.ManagedBuffer.getFreeVertices","h3d/impl/ManagedBuffer.hx",72,0xc1621038)
HX_LOCAL_STACK_FRAME(_hx_pos_b24f96a3fe434fbf_82_allocPosition,"h3d.impl.ManagedBuffer","allocPosition",0xb3be0a76,"h3d.impl.ManagedBuffer.allocPosition","h3d/impl/ManagedBuffer.hx",82,0xc1621038)
HX_LOCAL_STACK_FRAME(_hx_pos_b24f96a3fe434fbf_107_allocBuffer,"h3d.impl.ManagedBuffer","allocBuffer",0x93ba298d,"h3d.impl.ManagedBuffer.allocBuffer","h3d/impl/ManagedBuffer.hx",107,0xc1621038)
HX_LOCAL_STACK_FRAME(_hx_pos_b24f96a3fe434fbf_123_freeBuffer,"h3d.impl.ManagedBuffer","freeBuffer",0x5f463794,"h3d.impl.ManagedBuffer.freeBuffer","h3d/impl/ManagedBuffer.hx",123,0xc1621038)
HX_LOCAL_STACK_FRAME(_hx_pos_b24f96a3fe434fbf_175_dispose,"h3d.impl.ManagedBuffer","dispose",0xe70612d7,"h3d.impl.ManagedBuffer.dispose","h3d/impl/ManagedBuffer.hx",175,0xc1621038)
HX_LOCAL_STACK_FRAME(_hx_pos_b24f96a3fe434fbf_179_isDisposed,"h3d.impl.ManagedBuffer","isDisposed",0x7664bdb7,"h3d.impl.ManagedBuffer.isDisposed","h3d/impl/ManagedBuffer.hx",179,0xc1621038)
namespace h3d{
namespace impl{

void ManagedBuffer_obj::__construct(int stride,int size,::Array< ::Dynamic> flags){
            	HX_GC_STACKFRAME(&_hx_pos_b24f96a3fe434fbf_30_new)
HXLINE(  31)		int this1 = 0;
HXDLIN(  31)		this->flags = this1;
HXLINE(  32)		if (::hx::IsNotNull( flags )) {
HXLINE(  33)			int _g = 0;
HXDLIN(  33)			while((_g < flags->length)){
HXLINE(  33)				 ::h3d::BufferFlag f = flags->__get(_g).StaticCast<  ::h3d::BufferFlag >();
HXDLIN(  33)				_g = (_g + 1);
HXLINE(  34)				 ::h3d::impl::ManagedBuffer _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  34)				int _hx_tmp1 = _hx_tmp->flags;
HXDLIN(  34)				_hx_tmp->flags = (_hx_tmp1 | (1 << _hx_getEnumValueIndex(f)));
            			}
            		}
HXLINE(  35)		this->size = size;
HXLINE(  36)		this->stride = stride;
HXLINE(  37)		this->freeList =  ::h3d::impl::_ManagedBuffer::FreeCell_obj::__alloc( HX_CTX ,0,size,null());
HXLINE(  39)		this->mem = ::h3d::Engine_obj::CURRENT->mem;
HXLINE(  40)		this->mem->allocManaged(::hx::ObjectPtr<OBJ_>(this));
            	}

Dynamic ManagedBuffer_obj::__CreateEmpty() { return new ManagedBuffer_obj; }

void *ManagedBuffer_obj::_hx_vtable = 0;

Dynamic ManagedBuffer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ManagedBuffer_obj > _hx_result = new ManagedBuffer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ManagedBuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x13f0e1ee;
}

void ManagedBuffer_obj::uploadVertexBuffer(int start,int vertices,::Array< Float > buf,::hx::Null< int >  __o_bufPos){
            		int bufPos = __o_bufPos.Default(0);
            	HX_STACKFRAME(&_hx_pos_b24f96a3fe434fbf_45_uploadVertexBuffer)
HXDLIN(  45)		this->mem->driver->uploadVertexBuffer(this->vbuf,start,vertices,buf,bufPos);
            	}


HX_DEFINE_DYNAMIC_FUNC4(ManagedBuffer_obj,uploadVertexBuffer,(void))

void ManagedBuffer_obj::uploadVertexBytes(int start,int vertices, ::haxe::io::Bytes data,::hx::Null< int >  __o_dataPos){
            		int dataPos = __o_dataPos.Default(0);
            	HX_STACKFRAME(&_hx_pos_b24f96a3fe434fbf_49_uploadVertexBytes)
HXDLIN(  49)		this->mem->driver->uploadVertexBytes(this->vbuf,start,vertices,data,dataPos);
            	}


HX_DEFINE_DYNAMIC_FUNC4(ManagedBuffer_obj,uploadVertexBytes,(void))

void ManagedBuffer_obj::readVertexBytes(int start,int vertices, ::haxe::io::Bytes data,::hx::Null< int >  __o_dataPos){
            		int dataPos = __o_dataPos.Default(0);
            	HX_STACKFRAME(&_hx_pos_b24f96a3fe434fbf_53_readVertexBytes)
HXDLIN(  53)		this->mem->driver->readVertexBytes(this->vbuf,start,vertices,data,dataPos);
            	}


HX_DEFINE_DYNAMIC_FUNC4(ManagedBuffer_obj,readVertexBytes,(void))

 ::h3d::Buffer ManagedBuffer_obj::alloc(int vertices,int align){
            	HX_GC_STACKFRAME(&_hx_pos_b24f96a3fe434fbf_56_alloc)
HXLINE(  57)		int p = this->allocPosition(vertices,align);
HXLINE(  58)		if ((p < 0)) {
HXLINE(  59)			return null();
            		}
HXLINE(  60)		 ::h3d::Buffer b =  ::h3d::Buffer_obj::__alloc( HX_CTX ,vertices,this->stride,::Array_obj< ::Dynamic>::__new(1)->init(0,::h3d::BufferFlag_obj::NoAlloc_dyn()));
HXLINE(  61)		{
HXLINE(  62)			b->position = p;
HXLINE(  63)			b->buffer = ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE(  69)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ManagedBuffer_obj,alloc,return )

int ManagedBuffer_obj::getFreeVertices(){
            	HX_STACKFRAME(&_hx_pos_b24f96a3fe434fbf_72_getFreeVertices)
HXLINE(  73)		int m = 0;
HXLINE(  74)		 ::h3d::impl::_ManagedBuffer::FreeCell l = this->freeList;
HXLINE(  75)		while(::hx::IsNotNull( l )){
HXLINE(  76)			m = (m + l->count);
HXLINE(  77)			l = l->next;
            		}
HXLINE(  79)		return m;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ManagedBuffer_obj,getFreeVertices,return )

int ManagedBuffer_obj::allocPosition(int nvert,int align){
            	HX_GC_STACKFRAME(&_hx_pos_b24f96a3fe434fbf_82_allocPosition)
HXLINE(  83)		 ::h3d::impl::_ManagedBuffer::FreeCell free = this->freeList;
HXLINE(  84)		while(::hx::IsNotNull( free )){
HXLINE(  85)			if ((free->count >= nvert)) {
HXLINE(  86)				int d = ::hx::Mod((align - ::hx::Mod(free->pos,align)),align);
HXLINE(  87)				if ((d == 0)) {
HXLINE(  88)					goto _hx_goto_8;
            				}
HXLINE(  90)				if ((free->count >= (nvert + d))) {
HXLINE(  91)					free->next =  ::h3d::impl::_ManagedBuffer::FreeCell_obj::__alloc( HX_CTX ,(free->pos + d),(free->count - d),free->next);
HXLINE(  92)					free->count = d;
HXLINE(  93)					free = free->next;
HXLINE(  94)					goto _hx_goto_8;
            				}
            			}
HXLINE(  97)			free = free->next;
            		}
            		_hx_goto_8:;
HXLINE(  99)		if (::hx::IsNull( free )) {
HXLINE( 100)			return -1;
            		}
HXLINE( 101)		int pos = free->pos;
HXLINE( 102)		 ::h3d::impl::_ManagedBuffer::FreeCell free1 = free;
HXDLIN( 102)		free1->pos = (free1->pos + nvert);
HXLINE( 103)		 ::h3d::impl::_ManagedBuffer::FreeCell free2 = free;
HXDLIN( 103)		free2->count = (free2->count - nvert);
HXLINE( 104)		return pos;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ManagedBuffer_obj,allocPosition,return )

bool ManagedBuffer_obj::allocBuffer( ::h3d::Buffer b){
            	HX_STACKFRAME(&_hx_pos_b24f96a3fe434fbf_107_allocBuffer)
HXLINE( 108)		int align;
HXDLIN( 108)		int this1 = b->flags;
HXDLIN( 108)		if (((this1 & (1 << _hx_getEnumValueIndex(::h3d::BufferFlag_obj::Quads_dyn()))) != 0)) {
HXLINE( 108)			align = 4;
            		}
            		else {
HXLINE( 108)			int this1 = b->flags;
HXDLIN( 108)			if (((this1 & (1 << _hx_getEnumValueIndex(::h3d::BufferFlag_obj::Triangles_dyn()))) != 0)) {
HXLINE( 108)				align = 3;
            			}
            			else {
HXLINE( 108)				align = 1;
            			}
            		}
HXLINE( 109)		int p = this->allocPosition(b->vertices,align);
HXLINE( 110)		if ((p < 0)) {
HXLINE( 110)			return false;
            		}
HXLINE( 111)		{
HXLINE( 112)			b->position = p;
HXLINE( 113)			b->buffer = ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 119)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ManagedBuffer_obj,allocBuffer,return )

void ManagedBuffer_obj::freeBuffer( ::h3d::Buffer b){
            	HX_GC_STACKFRAME(&_hx_pos_b24f96a3fe434fbf_123_freeBuffer)
HXLINE( 124)		 ::h3d::impl::_ManagedBuffer::FreeCell prev = null();
HXLINE( 125)		 ::h3d::impl::_ManagedBuffer::FreeCell f = this->freeList;
HXLINE( 126)		int nvert = b->vertices;
HXLINE( 127)		int end = (b->position + nvert);
HXLINE( 128)		while(::hx::IsNotNull( f )){
HXLINE( 129)			if ((f->pos == end)) {
HXLINE( 130)				 ::h3d::impl::_ManagedBuffer::FreeCell f1 = f;
HXDLIN( 130)				f1->pos = (f1->pos - nvert);
HXLINE( 131)				 ::h3d::impl::_ManagedBuffer::FreeCell f2 = f;
HXDLIN( 131)				f2->count = (f2->count + nvert);
HXLINE( 132)				bool _hx_tmp;
HXDLIN( 132)				if (::hx::IsNotNull( prev )) {
HXLINE( 132)					_hx_tmp = ((prev->pos + prev->count) == f->pos);
            				}
            				else {
HXLINE( 132)					_hx_tmp = false;
            				}
HXDLIN( 132)				if (_hx_tmp) {
HXLINE( 133)					 ::h3d::impl::_ManagedBuffer::FreeCell prev1 = prev;
HXDLIN( 133)					prev1->count = (prev1->count + f->count);
HXLINE( 134)					prev->next = f->next;
            				}
HXLINE( 136)				nvert = 0;
HXLINE( 137)				goto _hx_goto_11;
            			}
HXLINE( 139)			if ((f->pos > end)) {
HXLINE( 140)				bool _hx_tmp;
HXDLIN( 140)				if (::hx::IsNotNull( prev )) {
HXLINE( 140)					_hx_tmp = ((prev->pos + prev->count) == b->position);
            				}
            				else {
HXLINE( 140)					_hx_tmp = false;
            				}
HXDLIN( 140)				if (_hx_tmp) {
HXLINE( 141)					 ::h3d::impl::_ManagedBuffer::FreeCell prev1 = prev;
HXDLIN( 141)					prev1->count = (prev1->count + nvert);
            				}
            				else {
HXLINE( 143)					 ::h3d::impl::_ManagedBuffer::FreeCell n =  ::h3d::impl::_ManagedBuffer::FreeCell_obj::__alloc( HX_CTX ,b->position,nvert,f);
HXLINE( 144)					if (::hx::IsNull( prev )) {
HXLINE( 144)						this->freeList = n;
            					}
            					else {
HXLINE( 144)						prev->next = n;
            					}
            				}
HXLINE( 146)				nvert = 0;
HXLINE( 147)				goto _hx_goto_11;
            			}
HXLINE( 149)			prev = f;
HXLINE( 150)			f = f->next;
            		}
            		_hx_goto_11:;
HXLINE( 152)		if ((nvert != 0)) {
HXLINE( 153)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            		}
HXLINE( 170)		bool _hx_tmp;
HXDLIN( 170)		if ((this->freeList->count == this->size)) {
HXLINE( 170)			int this1 = this->flags;
HXDLIN( 170)			_hx_tmp = ((this1 & (1 << _hx_getEnumValueIndex(::h3d::BufferFlag_obj::Managed_dyn()))) == 0);
            		}
            		else {
HXLINE( 170)			_hx_tmp = false;
            		}
HXDLIN( 170)		if (_hx_tmp) {
HXLINE( 171)			this->dispose();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ManagedBuffer_obj,freeBuffer,(void))

void ManagedBuffer_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_b24f96a3fe434fbf_175_dispose)
HXDLIN( 175)		this->mem->freeManaged(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ManagedBuffer_obj,dispose,(void))

bool ManagedBuffer_obj::isDisposed(){
            	HX_STACKFRAME(&_hx_pos_b24f96a3fe434fbf_179_isDisposed)
HXDLIN( 179)		return ::hx::IsNull( this->vbuf );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ManagedBuffer_obj,isDisposed,return )


::hx::ObjectPtr< ManagedBuffer_obj > ManagedBuffer_obj::__new(int stride,int size,::Array< ::Dynamic> flags) {
	::hx::ObjectPtr< ManagedBuffer_obj > __this = new ManagedBuffer_obj();
	__this->__construct(stride,size,flags);
	return __this;
}

::hx::ObjectPtr< ManagedBuffer_obj > ManagedBuffer_obj::__alloc(::hx::Ctx *_hx_ctx,int stride,int size,::Array< ::Dynamic> flags) {
	ManagedBuffer_obj *__this = (ManagedBuffer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ManagedBuffer_obj), true, "h3d.impl.ManagedBuffer"));
	*(void **)__this = ManagedBuffer_obj::_hx_vtable;
	__this->__construct(stride,size,flags);
	return __this;
}

ManagedBuffer_obj::ManagedBuffer_obj()
{
}

void ManagedBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ManagedBuffer);
	HX_MARK_MEMBER_NAME(mem,"mem");
	HX_MARK_MEMBER_NAME(stride,"stride");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(flags,"flags");
	HX_MARK_MEMBER_NAME(vbuf,"vbuf");
	HX_MARK_MEMBER_NAME(freeList,"freeList");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ManagedBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mem,"mem");
	HX_VISIT_MEMBER_NAME(stride,"stride");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(flags,"flags");
	HX_VISIT_MEMBER_NAME(vbuf,"vbuf");
	HX_VISIT_MEMBER_NAME(freeList,"freeList");
	HX_VISIT_MEMBER_NAME(next,"next");
}

::hx::Val ManagedBuffer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mem") ) { return ::hx::Val( mem ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size ); }
		if (HX_FIELD_EQ(inName,"vbuf") ) { return ::hx::Val( vbuf ); }
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flags") ) { return ::hx::Val( flags ); }
		if (HX_FIELD_EQ(inName,"alloc") ) { return ::hx::Val( alloc_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stride") ) { return ::hx::Val( stride ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"freeList") ) { return ::hx::Val( freeList ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"freeBuffer") ) { return ::hx::Val( freeBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"isDisposed") ) { return ::hx::Val( isDisposed_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"allocBuffer") ) { return ::hx::Val( allocBuffer_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allocPosition") ) { return ::hx::Val( allocPosition_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readVertexBytes") ) { return ::hx::Val( readVertexBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFreeVertices") ) { return ::hx::Val( getFreeVertices_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"uploadVertexBytes") ) { return ::hx::Val( uploadVertexBytes_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"uploadVertexBuffer") ) { return ::hx::Val( uploadVertexBuffer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ManagedBuffer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mem") ) { mem=inValue.Cast<  ::h3d::impl::MemoryManager >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vbuf") ) { vbuf=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::h3d::impl::ManagedBuffer >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flags") ) { flags=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stride") ) { stride=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"freeList") ) { freeList=inValue.Cast<  ::h3d::impl::_ManagedBuffer::FreeCell >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ManagedBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mem",15,0e,53,00));
	outFields->push(HX_("stride",19,20,30,11));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("flags",47,2b,8c,02));
	outFields->push(HX_("vbuf",7d,f0,49,4e));
	outFields->push(HX_("freeList",2a,ab,b8,0a));
	outFields->push(HX_("next",f3,84,02,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ManagedBuffer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::impl::MemoryManager */ ,(int)offsetof(ManagedBuffer_obj,mem),HX_("mem",15,0e,53,00)},
	{::hx::fsInt,(int)offsetof(ManagedBuffer_obj,stride),HX_("stride",19,20,30,11)},
	{::hx::fsInt,(int)offsetof(ManagedBuffer_obj,size),HX_("size",c1,a0,53,4c)},
	{::hx::fsInt,(int)offsetof(ManagedBuffer_obj,flags),HX_("flags",47,2b,8c,02)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ManagedBuffer_obj,vbuf),HX_("vbuf",7d,f0,49,4e)},
	{::hx::fsObject /*  ::h3d::impl::_ManagedBuffer::FreeCell */ ,(int)offsetof(ManagedBuffer_obj,freeList),HX_("freeList",2a,ab,b8,0a)},
	{::hx::fsObject /*  ::h3d::impl::ManagedBuffer */ ,(int)offsetof(ManagedBuffer_obj,next),HX_("next",f3,84,02,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ManagedBuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String ManagedBuffer_obj_sMemberFields[] = {
	HX_("mem",15,0e,53,00),
	HX_("stride",19,20,30,11),
	HX_("size",c1,a0,53,4c),
	HX_("flags",47,2b,8c,02),
	HX_("vbuf",7d,f0,49,4e),
	HX_("freeList",2a,ab,b8,0a),
	HX_("next",f3,84,02,49),
	HX_("uploadVertexBuffer",25,43,5d,8f),
	HX_("uploadVertexBytes",e6,4d,8c,14),
	HX_("readVertexBytes",b1,d2,2b,f9),
	HX_("alloc",75,a4,93,21),
	HX_("getFreeVertices",7b,fa,a2,12),
	HX_("allocPosition",3e,fe,d8,20),
	HX_("allocBuffer",55,1b,5f,d8),
	HX_("freeBuffer",cc,96,34,8b),
	HX_("dispose",9f,80,4c,bb),
	HX_("isDisposed",ef,1c,53,a2),
	::String(null()) };

::hx::Class ManagedBuffer_obj::__mClass;

void ManagedBuffer_obj::__register()
{
	ManagedBuffer_obj _hx_dummy;
	ManagedBuffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.impl.ManagedBuffer",a6,fa,94,a7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ManagedBuffer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ManagedBuffer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ManagedBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ManagedBuffer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace impl
