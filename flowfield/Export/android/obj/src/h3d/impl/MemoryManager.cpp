#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_h3d_Indexes
#include <h3d/Indexes.h>
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
#ifndef INCLUDED_h3d_mat_DepthBuffer
#include <h3d/mat/DepthBuffer.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_Timer
#include <hxd/Timer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_3_new,"h3d.impl.MemoryManager","new",0x2d5badc5,"h3d.impl.MemoryManager.new","h3d/impl/MemoryManager.hx",3,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_27_init,"h3d.impl.MemoryManager","init",0x7f95160b,"h3d.impl.MemoryManager.init","h3d/impl/MemoryManager.hx",27,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_35_initIndexes,"h3d.impl.MemoryManager","initIndexes",0x46151535,"h3d.impl.MemoryManager.initIndexes","h3d/impl/MemoryManager.hx",35,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_59___default_garbage,"h3d.impl.MemoryManager","__default_garbage",0xc064f6fc,"h3d.impl.MemoryManager.__default_garbage","h3d/impl/MemoryManager.hx",59,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_68_cleanManagedBuffers,"h3d.impl.MemoryManager","cleanManagedBuffers",0x6dafcda2,"h3d.impl.MemoryManager.cleanManagedBuffers","h3d/impl/MemoryManager.hx",68,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_85_allocManaged,"h3d.impl.MemoryManager","allocManaged",0x7dff8c65,"h3d.impl.MemoryManager.allocManaged","h3d/impl/MemoryManager.hx",85,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_110_freeManaged,"h3d.impl.MemoryManager","freeManaged",0x51eb9578,"h3d.impl.MemoryManager.freeManaged","h3d/impl/MemoryManager.hx",110,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_131_allocBuffer,"h3d.impl.MemoryManager","allocBuffer",0x854a65ba,"h3d.impl.MemoryManager.allocBuffer","h3d/impl/MemoryManager.hx",131,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_211_deleteIndexes,"h3d.impl.MemoryManager","deleteIndexes",0x75675cba,"h3d.impl.MemoryManager.deleteIndexes","h3d/impl/MemoryManager.hx",211,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_219_allocIndexes,"h3d.impl.MemoryManager","allocIndexes",0x4afd5606,"h3d.impl.MemoryManager.allocIndexes","h3d/impl/MemoryManager.hx",219,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_229_bpp,"h3d.impl.MemoryManager","bpp",0x2d529c47,"h3d.impl.MemoryManager.bpp","h3d/impl/MemoryManager.hx",229,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_232_cleanTextures,"h3d.impl.MemoryManager","cleanTextures",0x8384c386,"h3d.impl.MemoryManager.cleanTextures","h3d/impl/MemoryManager.hx",232,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_245_sortByLRU,"h3d.impl.MemoryManager","sortByLRU",0x61b0e87f,"h3d.impl.MemoryManager.sortByLRU","h3d/impl/MemoryManager.hx",245,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_249_deleteTexture,"h3d.impl.MemoryManager","deleteTexture",0x3388c995,"h3d.impl.MemoryManager.deleteTexture","h3d/impl/MemoryManager.hx",249,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_256_allocTexture,"h3d.impl.MemoryManager","allocTexture",0x091ec2e1,"h3d.impl.MemoryManager.allocTexture","h3d/impl/MemoryManager.hx",256,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_270_allocDepth,"h3d.impl.MemoryManager","allocDepth",0xb2173d89,"h3d.impl.MemoryManager.allocDepth","h3d/impl/MemoryManager.hx",270,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_284_deleteDepth,"h3d.impl.MemoryManager","deleteDepth",0x140a6f3d,"h3d.impl.MemoryManager.deleteDepth","h3d/impl/MemoryManager.hx",284,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_292_onContextLost,"h3d.impl.MemoryManager","onContextLost",0xbdc41a39,"h3d.impl.MemoryManager.onContextLost","h3d/impl/MemoryManager.hx",292,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_297_dispose,"h3d.impl.MemoryManager","dispose",0x2d7f7484,"h3d.impl.MemoryManager.dispose","h3d/impl/MemoryManager.hx",297,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_325_freeMemorySize,"h3d.impl.MemoryManager","freeMemorySize",0x76d4dee9,"h3d.impl.MemoryManager.freeMemorySize","h3d/impl/MemoryManager.hx",325,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_341_stats,"h3d.impl.MemoryManager","stats",0xe8d136c4,"h3d.impl.MemoryManager.stats","h3d/impl/MemoryManager.hx",341,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_372_allocStats,"h3d.impl.MemoryManager","allocStats",0x5ef8c2a5,"h3d.impl.MemoryManager.allocStats","h3d/impl/MemoryManager.hx",372,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_5_boot,"h3d.impl.MemoryManager","boot",0x7af55f2d,"h3d.impl.MemoryManager.boot","h3d/impl/MemoryManager.hx",5,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_6_boot,"h3d.impl.MemoryManager","boot",0x7af55f2d,"h3d.impl.MemoryManager.boot","h3d/impl/MemoryManager.hx",6,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_7_boot,"h3d.impl.MemoryManager","boot",0x7af55f2d,"h3d.impl.MemoryManager.boot","h3d/impl/MemoryManager.hx",7,0x525e0dab)
HX_LOCAL_STACK_FRAME(_hx_pos_f3256e8b3e1003e4_8_boot,"h3d.impl.MemoryManager","boot",0x7af55f2d,"h3d.impl.MemoryManager.boot","h3d/impl/MemoryManager.hx",8,0x525e0dab)
namespace h3d{
namespace impl{

void MemoryManager_obj::__construct( ::h3d::impl::Driver driver){
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_3_new)
HXLINE(  21)		this->bufferCount = 0;
HXLINE(  20)		this->texMemory = ((Float)0);
HXLINE(  19)		this->usedMemory = ((Float)0);
HXLINE(  24)		this->driver = driver;
            	}

Dynamic MemoryManager_obj::__CreateEmpty() { return new MemoryManager_obj; }

void *MemoryManager_obj::_hx_vtable = 0;

Dynamic MemoryManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MemoryManager_obj > _hx_result = new MemoryManager_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MemoryManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x19006137;
}

void MemoryManager_obj::init(){
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_27_init)
HXLINE(  28)		this->indexes = ::Array_obj< ::Dynamic>::__new();
HXLINE(  29)		this->textures = ::Array_obj< ::Dynamic>::__new();
HXLINE(  30)		this->buffers = ::Array_obj< ::Dynamic>::__new();
HXLINE(  31)		this->depths = ::Array_obj< ::Dynamic>::__new();
HXLINE(  32)		this->initIndexes();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MemoryManager_obj,init,(void))

void MemoryManager_obj::initIndexes(){
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_35_initIndexes)
HXLINE(  36)		int length = 0;
HXDLIN(  36)		::Array< int > this1 = ::Array_obj< int >::__new();
HXDLIN(  36)		if ((length > 0)) {
HXLINE(  36)			if ((length > this1->length)) {
HXLINE(  36)				this1[(length - 1)] = 0;
            			}
            		}
HXDLIN(  36)		::Array< int > indices = this1;
HXLINE(  37)		{
HXLINE(  37)			int _g = 0;
HXDLIN(  37)			while((_g < 65533)){
HXLINE(  37)				_g = (_g + 1);
HXDLIN(  37)				int i = (_g - 1);
HXDLIN(  37)				indices->push(i);
            			}
            		}
HXLINE(  38)		this->triIndexes = ::h3d::Indexes_obj::alloc(indices,null(),null());
HXLINE(  40)		int length1 = 0;
HXDLIN(  40)		::Array< int > this2 = ::Array_obj< int >::__new();
HXDLIN(  40)		if ((length1 > 0)) {
HXLINE(  40)			if ((length1 > this2->length)) {
HXLINE(  40)				this2[(length1 - 1)] = 0;
            			}
            		}
HXDLIN(  40)		::Array< int > indices1 = this2;
HXLINE(  41)		int p = 0;
HXLINE(  42)		{
HXLINE(  42)			int _g1 = 0;
HXDLIN(  42)			int _g2 = 16383;
HXDLIN(  42)			while((_g1 < _g2)){
HXLINE(  42)				_g1 = (_g1 + 1);
HXDLIN(  42)				int i = (_g1 - 1);
HXLINE(  43)				int k = (i << 2);
HXLINE(  44)				indices1->push(k);
HXLINE(  45)				indices1->push((k + 1));
HXLINE(  46)				indices1->push((k + 2));
HXLINE(  47)				indices1->push((k + 2));
HXLINE(  48)				indices1->push((k + 1));
HXLINE(  49)				indices1->push((k + 3));
            			}
            		}
HXLINE(  51)		indices1->push(65533);
HXLINE(  52)		this->quadIndexes = ::h3d::Indexes_obj::alloc(indices1,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(MemoryManager_obj,initIndexes,(void))

HX_BEGIN_DEFAULT_FUNC(__default_garbage,MemoryManager_obj)
void _hx_run(){
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_59___default_garbage)
            	}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

void MemoryManager_obj::cleanManagedBuffers(){
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_68_cleanManagedBuffers)
HXDLIN(  68)		int _g = 1;
HXDLIN(  68)		int _g1 = this->buffers->length;
HXDLIN(  68)		while((_g < _g1)){
HXDLIN(  68)			_g = (_g + 1);
HXDLIN(  68)			int i = (_g - 1);
HXLINE(  69)			 ::h3d::impl::ManagedBuffer b = this->buffers->__get(i).StaticCast<  ::h3d::impl::ManagedBuffer >();
HXDLIN(  69)			 ::h3d::impl::ManagedBuffer prev = null();
HXLINE(  70)			while(::hx::IsNotNull( b )){
HXLINE(  71)				if ((b->freeList->count == b->size)) {
HXLINE(  72)					b->dispose();
HXLINE(  73)					if (::hx::IsNull( prev )) {
HXLINE(  74)						this->buffers[i] = b->next;
            					}
            					else {
HXLINE(  76)						prev->next = b->next;
            					}
            				}
            				else {
HXLINE(  78)					prev = b;
            				}
HXLINE(  79)				b = b->next;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MemoryManager_obj,cleanManagedBuffers,(void))

void MemoryManager_obj::allocManaged( ::h3d::impl::ManagedBuffer m){
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_85_allocManaged)
HXLINE(  86)		if (::hx::IsNotNull( m->vbuf )) {
HXLINE(  86)			return;
            		}
HXLINE(  88)		int mem = ((m->size * m->stride) * 4);
HXLINE(  90)		if ((mem == 0)) {
HXLINE(  90)			return;
            		}
HXLINE(  92)		while(true){
HXLINE(  92)			bool _hx_tmp;
HXDLIN(  92)			bool _hx_tmp1;
HXDLIN(  92)			if (!(((this->usedMemory + mem) > ((Float)4294967296.)))) {
HXLINE(  92)				_hx_tmp1 = (this->bufferCount >= 65536);
            			}
            			else {
HXLINE(  92)				_hx_tmp1 = true;
            			}
HXDLIN(  92)			if (!(_hx_tmp1)) {
HXLINE(  92)				_hx_tmp = ::hx::IsNull( (m->vbuf = this->driver->allocVertexes(m)) );
            			}
            			else {
HXLINE(  92)				_hx_tmp = true;
            			}
HXDLIN(  92)			if (!(_hx_tmp)) {
HXLINE(  92)				goto _hx_goto_9;
            			}
HXLINE(  94)			if (this->driver->isDisposed()) {
HXLINE(  94)				return;
            			}
HXLINE(  96)			Float size = this->usedMemory;
HXDLIN(  96)			Float size1 = (size - ( (Float)(this->freeMemorySize()) ));
HXLINE(  97)			this->garbage();
HXLINE(  98)			this->cleanManagedBuffers();
HXLINE(  99)			Float _hx_tmp2 = this->usedMemory;
HXDLIN(  99)			if (((_hx_tmp2 - ( (Float)(this->freeMemorySize()) )) == size1)) {
HXLINE( 100)				if ((this->bufferCount >= 65536)) {
HXLINE( 101)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Too many buffers",1e,f4,df,14)));
            				}
HXLINE( 102)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Memory full (",76,f6,6e,c3) + ::Math_obj::fceil((size1 / ( (Float)(1024) )))) + HX_(" KB,",95,f6,5f,15)) + this->bufferCount) + HX_(" buffers)",76,81,2b,0b))));
            			}
            		}
            		_hx_goto_9:;
HXLINE( 105)		 ::h3d::impl::MemoryManager _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 105)		_hx_tmp->usedMemory = (_hx_tmp->usedMemory + mem);
HXLINE( 106)		this->bufferCount++;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MemoryManager_obj,allocManaged,(void))

void MemoryManager_obj::freeManaged( ::h3d::impl::ManagedBuffer m){
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_110_freeManaged)
HXLINE( 111)		if (::hx::IsNull( m->vbuf )) {
HXLINE( 111)			return;
            		}
HXLINE( 112)		this->driver->disposeVertexes(m->vbuf);
HXLINE( 113)		m->vbuf = null();
HXLINE( 114)		 ::h3d::impl::MemoryManager _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 114)		_hx_tmp->usedMemory = (_hx_tmp->usedMemory - ( (Float)(((m->size * m->stride) * 4)) ));
HXLINE( 115)		this->bufferCount--;
HXLINE( 116)		int this1 = m->flags;
HXDLIN( 116)		if (((this1 & (1 << _hx_getEnumValueIndex(::h3d::BufferFlag_obj::Managed_dyn()))) == 0)) {
HXLINE( 117)			 ::h3d::impl::ManagedBuffer c = this->buffers->__get(0).StaticCast<  ::h3d::impl::ManagedBuffer >();
HXDLIN( 117)			 ::h3d::impl::ManagedBuffer prev = null();
HXLINE( 118)			while(::hx::IsNotNull( c )){
HXLINE( 119)				if (::hx::IsInstanceEq( c,m )) {
HXLINE( 120)					if (::hx::IsNull( prev )) {
HXLINE( 120)						this->buffers[0] = m->next;
            					}
            					else {
HXLINE( 120)						prev->next = m->next;
            					}
HXLINE( 121)					goto _hx_goto_11;
            				}
HXLINE( 123)				prev = c;
HXLINE( 124)				c = c->next;
            			}
            			_hx_goto_11:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MemoryManager_obj,freeManaged,(void))

void MemoryManager_obj::allocBuffer( ::h3d::Buffer b,int stride){
            	HX_GC_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_131_allocBuffer)
HXLINE( 133)		int max;
HXDLIN( 133)		int this1 = b->flags;
HXDLIN( 133)		if (((this1 & (1 << _hx_getEnumValueIndex(::h3d::BufferFlag_obj::Quads_dyn()))) != 0)) {
HXLINE( 133)			max = 65532;
            		}
            		else {
HXLINE( 133)			int this1 = b->flags;
HXDLIN( 133)			if (((this1 & (1 << _hx_getEnumValueIndex(::h3d::BufferFlag_obj::Triangles_dyn()))) != 0)) {
HXLINE( 133)				max = 65533;
            			}
            			else {
HXLINE( 133)				max = 65534;
            			}
            		}
HXLINE( 134)		bool _hx_tmp;
HXDLIN( 134)		bool _hx_tmp1;
HXDLIN( 134)		if ((b->vertices > max)) {
HXLINE( 134)			int this1 = b->flags;
HXDLIN( 134)			_hx_tmp1 = ((this1 & (1 << _hx_getEnumValueIndex(::h3d::BufferFlag_obj::UniformBuffer_dyn()))) == 0);
            		}
            		else {
HXLINE( 134)			_hx_tmp1 = false;
            		}
HXDLIN( 134)		if (_hx_tmp1) {
HXLINE( 134)			int this1 = b->flags;
HXDLIN( 134)			_hx_tmp = ((this1 & (1 << _hx_getEnumValueIndex(::h3d::BufferFlag_obj::LargeBuffer_dyn()))) == 0);
            		}
            		else {
HXLINE( 134)			_hx_tmp = false;
            		}
HXDLIN( 134)		if (_hx_tmp) {
HXLINE( 135)			if ((max == 65534)) {
HXLINE( 136)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Cannot split buffer with ",1d,84,c4,a5) + b->vertices) + HX_(" vertices if it's not Quads/Triangles",ae,60,fb,35))));
            			}
HXLINE( 137)			int rem = (b->vertices - max);
HXLINE( 138)			b->vertices = max;
HXLINE( 140)			this->allocBuffer(b,stride);
HXLINE( 142)			 ::h3d::Buffer n = b;
HXLINE( 143)			while(::hx::IsNotNull( n->next )){
HXLINE( 143)				n = n->next;
            			}
HXLINE( 145)			::Array< ::Dynamic> flags = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 146)			{
HXLINE( 146)				int _g = 0;
HXDLIN( 146)				::Array< ::Dynamic> _g1 = ::h3d::impl::MemoryManager_obj::ALL_FLAGS;
HXDLIN( 146)				while((_g < _g1->length)){
HXLINE( 146)					 ::h3d::BufferFlag f = _g1->__get(_g).StaticCast<  ::h3d::BufferFlag >();
HXDLIN( 146)					_g = (_g + 1);
HXLINE( 147)					int this1 = b->flags;
HXDLIN( 147)					if (((this1 & (1 << _hx_getEnumValueIndex(f))) != 0)) {
HXLINE( 148)						flags->push(f);
            					}
            				}
            			}
HXLINE( 149)			n->next =  ::h3d::Buffer_obj::__alloc( HX_CTX ,rem,stride,flags);
HXLINE( 150)			return;
            		}
HXLINE( 153)		int this2 = b->flags;
HXDLIN( 153)		if (((this2 & (1 << _hx_getEnumValueIndex(::h3d::BufferFlag_obj::Managed_dyn()))) == 0)) {
HXLINE( 154)			::Array< ::Dynamic> flags = null();
HXLINE( 155)			int this1 = b->flags;
HXDLIN( 155)			if (((this1 & (1 << _hx_getEnumValueIndex(::h3d::BufferFlag_obj::Dynamic_dyn()))) != 0)) {
HXLINE( 155)				if (::hx::IsNull( flags )) {
HXLINE( 155)					flags = ::Array_obj< ::Dynamic>::__new(0);
            				}
HXDLIN( 155)				flags->push(::h3d::BufferFlag_obj::Dynamic_dyn());
            			}
HXLINE( 156)			int this2 = b->flags;
HXDLIN( 156)			if (((this2 & (1 << _hx_getEnumValueIndex(::h3d::BufferFlag_obj::UniformBuffer_dyn()))) != 0)) {
HXLINE( 156)				if (::hx::IsNull( flags )) {
HXLINE( 156)					flags = ::Array_obj< ::Dynamic>::__new(0);
            				}
HXDLIN( 156)				flags->push(::h3d::BufferFlag_obj::UniformBuffer_dyn());
            			}
HXLINE( 157)			 ::h3d::impl::ManagedBuffer m =  ::h3d::impl::ManagedBuffer_obj::__alloc( HX_CTX ,stride,b->vertices,flags);
HXLINE( 158)			m->next = this->buffers->__get(0).StaticCast<  ::h3d::impl::ManagedBuffer >();
HXLINE( 159)			this->buffers[0] = m;
HXLINE( 160)			if (!(m->allocBuffer(b))) {
HXLINE( 160)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            			}
HXLINE( 161)			return;
            		}
HXLINE( 165)		 ::h3d::impl::ManagedBuffer m = this->buffers->__get(stride).StaticCast<  ::h3d::impl::ManagedBuffer >();
HXDLIN( 165)		 ::h3d::impl::ManagedBuffer prev = null();
HXLINE( 166)		while(::hx::IsNotNull( m )){
HXLINE( 167)			if (m->allocBuffer(b)) {
HXLINE( 168)				return;
            			}
HXLINE( 169)			prev = m;
HXLINE( 170)			m = m->next;
            		}
HXLINE( 174)		int align;
HXDLIN( 174)		int this3 = b->flags;
HXDLIN( 174)		if (((this3 & (1 << _hx_getEnumValueIndex(::h3d::BufferFlag_obj::Triangles_dyn()))) != 0)) {
HXLINE( 174)			align = 3;
            		}
            		else {
HXLINE( 174)			int this1 = b->flags;
HXDLIN( 174)			if (((this1 & (1 << _hx_getEnumValueIndex(::h3d::BufferFlag_obj::Quads_dyn()))) != 0)) {
HXLINE( 174)				align = 4;
            			}
            			else {
HXLINE( 174)				align = 0;
            			}
            		}
HXLINE( 175)		bool _hx_tmp2;
HXDLIN( 175)		if (::hx::IsNull( m )) {
HXLINE( 175)			_hx_tmp2 = (align > 0);
            		}
            		else {
HXLINE( 175)			_hx_tmp2 = false;
            		}
HXDLIN( 175)		if (_hx_tmp2) {
HXLINE( 176)			int total = b->vertices;
HXLINE( 177)			int size = total;
HXLINE( 178)			while((size > 2048)){
HXLINE( 179)				m = this->buffers->__get(stride).StaticCast<  ::h3d::impl::ManagedBuffer >();
HXLINE( 180)				size = (size >> 1);
HXLINE( 181)				size = (size - ::hx::Mod(size,align));
HXLINE( 182)				b->vertices = size;
HXLINE( 183)				while(::hx::IsNotNull( m )){
HXLINE( 184)					if (m->allocBuffer(b)) {
HXLINE( 185)						::Array< ::Dynamic> flags = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 186)						{
HXLINE( 186)							int _g = 0;
HXDLIN( 186)							::Array< ::Dynamic> _g1 = ::h3d::impl::MemoryManager_obj::ALL_FLAGS;
HXDLIN( 186)							while((_g < _g1->length)){
HXLINE( 186)								 ::h3d::BufferFlag f = _g1->__get(_g).StaticCast<  ::h3d::BufferFlag >();
HXDLIN( 186)								_g = (_g + 1);
HXLINE( 187)								int this1 = b->flags;
HXDLIN( 187)								if (((this1 & (1 << _hx_getEnumValueIndex(f))) != 0)) {
HXLINE( 188)									flags->push(f);
            								}
            							}
            						}
HXLINE( 189)						b->next =  ::h3d::Buffer_obj::__alloc( HX_CTX ,(total - size),stride,flags);
HXLINE( 190)						return;
            					}
HXLINE( 192)					m = m->next;
            				}
            			}
HXLINE( 195)			b->vertices = total;
            		}
HXLINE( 199)		m =  ::h3d::impl::ManagedBuffer_obj::__alloc( HX_CTX ,stride,65533,::Array_obj< ::Dynamic>::__new(1)->init(0,::h3d::BufferFlag_obj::Managed_dyn()));
HXLINE( 200)		if (::hx::IsNull( prev )) {
HXLINE( 201)			this->buffers[stride] = m;
            		}
            		else {
HXLINE( 203)			prev->next = m;
            		}
HXLINE( 205)		if (!(m->allocBuffer(b))) {
HXLINE( 205)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(MemoryManager_obj,allocBuffer,(void))

void MemoryManager_obj::deleteIndexes( ::h3d::Indexes i){
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_211_deleteIndexes)
HXLINE( 212)		this->indexes->remove(i);
HXLINE( 213)		this->driver->disposeIndexes(i->ibuf);
HXLINE( 214)		i->ibuf = null();
HXLINE( 215)		 ::h3d::impl::MemoryManager _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 215)		int _hx_tmp1;
HXDLIN( 215)		if (i->is32) {
HXLINE( 215)			_hx_tmp1 = 4;
            		}
            		else {
HXLINE( 215)			_hx_tmp1 = 2;
            		}
HXDLIN( 215)		_hx_tmp->usedMemory = (_hx_tmp->usedMemory - ( (Float)((i->count * _hx_tmp1)) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(MemoryManager_obj,deleteIndexes,(void))

void MemoryManager_obj::allocIndexes( ::h3d::Indexes i){
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_219_allocIndexes)
HXLINE( 220)		i->ibuf = this->driver->allocIndexes(i->count,i->is32);
HXLINE( 221)		this->indexes->push(i);
HXLINE( 222)		 ::h3d::impl::MemoryManager _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 222)		int _hx_tmp1;
HXDLIN( 222)		if (i->is32) {
HXLINE( 222)			_hx_tmp1 = 4;
            		}
            		else {
HXLINE( 222)			_hx_tmp1 = 2;
            		}
HXDLIN( 222)		_hx_tmp->usedMemory = (_hx_tmp->usedMemory + (i->count * _hx_tmp1));
            	}


HX_DEFINE_DYNAMIC_FUNC1(MemoryManager_obj,allocIndexes,(void))

int MemoryManager_obj::bpp( ::h3d::mat::Texture t){
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_229_bpp)
HXDLIN( 229)		return 4;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MemoryManager_obj,bpp,return )

bool MemoryManager_obj::cleanTextures(::hx::Null< bool >  __o_force){
            		bool force = __o_force.Default(true);
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_232_cleanTextures)
HXLINE( 233)		this->textures->sort(this->sortByLRU_dyn());
HXLINE( 234)		{
HXLINE( 234)			int _g = 0;
HXDLIN( 234)			::Array< ::Dynamic> _g1 = this->textures;
HXDLIN( 234)			while((_g < _g1->length)){
HXLINE( 234)				 ::h3d::mat::Texture t = _g1->__get(_g).StaticCast<  ::h3d::mat::Texture >();
HXDLIN( 234)				_g = (_g + 1);
HXLINE( 235)				bool _hx_tmp;
HXDLIN( 235)				if (::hx::IsNotNull( t->realloc )) {
HXLINE( 235)					if (::hx::IsNull( t->t )) {
HXLINE( 235)						_hx_tmp = ::hx::IsNull( t->realloc );
            					}
            					else {
HXLINE( 235)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 235)					_hx_tmp = true;
            				}
HXDLIN( 235)				if (_hx_tmp) {
HXLINE( 235)					continue;
            				}
HXLINE( 236)				bool _hx_tmp1;
HXDLIN( 236)				if (!(force)) {
HXLINE( 236)					int _hx_tmp = t->get_lastFrame();
HXDLIN( 236)					_hx_tmp1 = (_hx_tmp < (::hxd::Timer_obj::frameCount - 3600));
            				}
            				else {
HXLINE( 236)					_hx_tmp1 = true;
            				}
HXDLIN( 236)				if (_hx_tmp1) {
HXLINE( 237)					t->dispose();
HXLINE( 238)					return true;
            				}
            			}
            		}
HXLINE( 241)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MemoryManager_obj,cleanTextures,return )

int MemoryManager_obj::sortByLRU( ::h3d::mat::Texture t1, ::h3d::mat::Texture t2){
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_245_sortByLRU)
HXDLIN( 245)		int _hx_tmp = t1->get_lastFrame();
HXDLIN( 245)		return (_hx_tmp - t2->get_lastFrame());
            	}


HX_DEFINE_DYNAMIC_FUNC2(MemoryManager_obj,sortByLRU,return )

void MemoryManager_obj::deleteTexture( ::h3d::mat::Texture t){
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_249_deleteTexture)
HXLINE( 250)		if (!(this->textures->remove(t))) {
HXLINE( 250)			return;
            		}
HXLINE( 251)		this->driver->disposeTexture(t);
HXLINE( 252)		 ::h3d::impl::MemoryManager _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)		Float _hx_tmp1 = _hx_tmp->texMemory;
HXDLIN( 252)		int _hx_tmp2 = (t->width * t->height);
HXDLIN( 252)		_hx_tmp->texMemory = (_hx_tmp1 - ( (Float)((_hx_tmp2 * this->bpp(t))) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(MemoryManager_obj,deleteTexture,(void))

void MemoryManager_obj::allocTexture( ::h3d::mat::Texture t){
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_256_allocTexture)
HXLINE( 257)		bool free = this->cleanTextures(false);
HXLINE( 258)		t->t = this->driver->allocTexture(t);
HXLINE( 259)		if (::hx::IsNull( t->t )) {
HXLINE( 260)			if (this->driver->isDisposed()) {
HXLINE( 260)				return;
            			}
HXLINE( 261)			if (!(this->cleanTextures(true))) {
HXLINE( 261)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Maximum texture memory reached",78,08,7b,00)));
            			}
HXLINE( 262)			this->allocTexture(t);
HXLINE( 263)			return;
            		}
HXLINE( 265)		this->textures->push(t);
HXLINE( 266)		 ::h3d::impl::MemoryManager _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)		Float _hx_tmp1 = _hx_tmp->texMemory;
HXDLIN( 266)		int _hx_tmp2 = (t->width * t->height);
HXDLIN( 266)		_hx_tmp->texMemory = (_hx_tmp1 + (_hx_tmp2 * this->bpp(t)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(MemoryManager_obj,allocTexture,(void))

void MemoryManager_obj::allocDepth( ::h3d::mat::DepthBuffer b){
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_270_allocDepth)
HXLINE( 271)		bool free = this->cleanTextures(false);
HXLINE( 272)		b->b = this->driver->allocDepthBuffer(b);
HXLINE( 273)		if (::hx::IsNull( b->b )) {
HXLINE( 274)			if (this->driver->isDisposed()) {
HXLINE( 274)				return;
            			}
HXLINE( 275)			if (!(this->cleanTextures(true))) {
HXLINE( 275)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Maximum texture memory reached",78,08,7b,00)));
            			}
HXLINE( 276)			this->allocDepth(b);
HXLINE( 277)			return;
            		}
HXLINE( 279)		this->depths->push(b);
HXLINE( 280)		 ::h3d::impl::MemoryManager _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)		_hx_tmp->texMemory = (_hx_tmp->texMemory + ((b->width * b->height) * 4));
            	}


HX_DEFINE_DYNAMIC_FUNC1(MemoryManager_obj,allocDepth,(void))

void MemoryManager_obj::deleteDepth( ::h3d::mat::DepthBuffer b){
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_284_deleteDepth)
HXLINE( 285)		if (!(this->depths->remove(b))) {
HXLINE( 285)			return;
            		}
HXLINE( 286)		this->driver->disposeDepthBuffer(b);
HXLINE( 287)		 ::h3d::impl::MemoryManager _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)		_hx_tmp->texMemory = (_hx_tmp->texMemory - ( (Float)(((b->width * b->height) * 4)) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(MemoryManager_obj,deleteDepth,(void))

void MemoryManager_obj::onContextLost(){
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_292_onContextLost)
HXLINE( 293)		this->dispose();
HXLINE( 294)		this->initIndexes();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MemoryManager_obj,onContextLost,(void))

void MemoryManager_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_297_dispose)
HXLINE( 298)		if (::hx::IsNotNull( this->triIndexes )) {
HXLINE( 298)			this->triIndexes->dispose();
            		}
HXLINE( 299)		if (::hx::IsNotNull( this->quadIndexes )) {
HXLINE( 299)			this->quadIndexes->dispose();
            		}
HXLINE( 300)		this->triIndexes = null();
HXLINE( 301)		this->quadIndexes = null();
HXLINE( 302)		{
HXLINE( 302)			int _g = 0;
HXDLIN( 302)			::Array< ::Dynamic> _g1 = this->textures->copy();
HXDLIN( 302)			while((_g < _g1->length)){
HXLINE( 302)				 ::h3d::mat::Texture t = _g1->__get(_g).StaticCast<  ::h3d::mat::Texture >();
HXDLIN( 302)				_g = (_g + 1);
HXLINE( 303)				t->dispose();
            			}
            		}
HXLINE( 304)		{
HXLINE( 304)			int _g2 = 0;
HXDLIN( 304)			::Array< ::Dynamic> _g3 = this->depths->copy();
HXDLIN( 304)			while((_g2 < _g3->length)){
HXLINE( 304)				 ::h3d::mat::DepthBuffer b = _g3->__get(_g2).StaticCast<  ::h3d::mat::DepthBuffer >();
HXDLIN( 304)				_g2 = (_g2 + 1);
HXLINE( 305)				b->dispose();
            			}
            		}
HXLINE( 306)		{
HXLINE( 306)			int _g4 = 0;
HXDLIN( 306)			::Array< ::Dynamic> _g5 = this->buffers->copy();
HXDLIN( 306)			while((_g4 < _g5->length)){
HXLINE( 306)				 ::h3d::impl::ManagedBuffer b = _g5->__get(_g4).StaticCast<  ::h3d::impl::ManagedBuffer >();
HXDLIN( 306)				_g4 = (_g4 + 1);
HXLINE( 307)				 ::h3d::impl::ManagedBuffer b1 = b;
HXLINE( 308)				while(::hx::IsNotNull( b1 )){
HXLINE( 309)					b1->dispose();
HXLINE( 310)					b1 = b1->next;
            				}
            			}
            		}
HXLINE( 313)		{
HXLINE( 313)			int _g6 = 0;
HXDLIN( 313)			::Array< ::Dynamic> _g7 = this->indexes->copy();
HXDLIN( 313)			while((_g6 < _g7->length)){
HXLINE( 313)				 ::h3d::Indexes i = _g7->__get(_g6).StaticCast<  ::h3d::Indexes >();
HXDLIN( 313)				_g6 = (_g6 + 1);
HXLINE( 314)				i->dispose();
            			}
            		}
HXLINE( 315)		this->buffers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 316)		this->indexes = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 317)		this->textures = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 318)		this->bufferCount = 0;
HXLINE( 319)		this->usedMemory = ( (Float)(0) );
HXLINE( 320)		this->texMemory = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(MemoryManager_obj,dispose,(void))

int MemoryManager_obj::freeMemorySize(){
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_325_freeMemorySize)
HXLINE( 326)		int size = 0;
HXLINE( 327)		{
HXLINE( 327)			int _g = 0;
HXDLIN( 327)			::Array< ::Dynamic> _g1 = this->buffers;
HXDLIN( 327)			while((_g < _g1->length)){
HXLINE( 327)				 ::h3d::impl::ManagedBuffer b = _g1->__get(_g).StaticCast<  ::h3d::impl::ManagedBuffer >();
HXDLIN( 327)				_g = (_g + 1);
HXLINE( 328)				 ::h3d::impl::ManagedBuffer b1 = b;
HXLINE( 329)				while(::hx::IsNotNull( b1 )){
HXLINE( 330)					 ::h3d::impl::_ManagedBuffer::FreeCell free = b1->freeList;
HXLINE( 331)					while(::hx::IsNotNull( free )){
HXLINE( 332)						size = (size + ((free->count * b1->stride) * 4));
HXLINE( 333)						free = free->next;
            					}
HXLINE( 335)					b1 = b1->next;
            				}
            			}
            		}
HXLINE( 338)		return size;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MemoryManager_obj,freeMemorySize,return )

 ::Dynamic MemoryManager_obj::stats(){
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_341_stats)
HXLINE( 342)		int total = 0;
HXDLIN( 342)		int free = 0;
HXDLIN( 342)		int count = 0;
HXLINE( 343)		{
HXLINE( 343)			int _g = 0;
HXDLIN( 343)			::Array< ::Dynamic> _g1 = this->buffers;
HXDLIN( 343)			while((_g < _g1->length)){
HXLINE( 343)				 ::h3d::impl::ManagedBuffer b = _g1->__get(_g).StaticCast<  ::h3d::impl::ManagedBuffer >();
HXDLIN( 343)				_g = (_g + 1);
HXLINE( 344)				 ::h3d::impl::ManagedBuffer b1 = b;
HXLINE( 345)				while(::hx::IsNotNull( b1 )){
HXLINE( 346)					total = (total + ((b1->stride * b1->size) * 4));
HXLINE( 347)					 ::h3d::impl::_ManagedBuffer::FreeCell f = b1->freeList;
HXLINE( 348)					while(::hx::IsNotNull( f )){
HXLINE( 349)						free = (free + ((f->count * b1->stride) * 4));
HXLINE( 350)						f = f->next;
            					}
HXLINE( 352)					count = (count + 1);
HXLINE( 353)					b1 = b1->next;
            				}
            			}
            		}
HXLINE( 356)		return  ::Dynamic(::hx::Anon_obj::Create(6)
            			->setFixed(0,HX_("textureMemory",3c,9e,d7,97),this->texMemory)
            			->setFixed(1,HX_("managedMemory",c0,62,06,c0),total)
            			->setFixed(2,HX_("totalMemory",e5,bd,f5,ca),(this->usedMemory + this->texMemory))
            			->setFixed(3,HX_("bufferCount",af,d7,ae,e7),this->bufferCount)
            			->setFixed(4,HX_("textureCount",f4,f1,02,43),this->textures->length)
            			->setFixed(5,HX_("freeManagedMemory",74,9a,36,7e),free));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MemoryManager_obj,stats,return )

::Array< ::Dynamic> MemoryManager_obj::allocStats(){
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_372_allocStats)
HXDLIN( 372)		return ::Array_obj< ::Dynamic>::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(MemoryManager_obj,allocStats,return )

Float MemoryManager_obj::MAX_MEMORY;

int MemoryManager_obj::MAX_BUFFERS;

int MemoryManager_obj::SIZE;

::Array< ::Dynamic> MemoryManager_obj::ALL_FLAGS;


void MemoryManager_obj::__alloc_dynamic_functions(::hx::Ctx *_hx_ctx,MemoryManager_obj *_hx_obj) {
	if (!_hx_obj->garbage.mPtr) _hx_obj->garbage = new __default_garbage(_hx_obj);
}
::hx::ObjectPtr< MemoryManager_obj > MemoryManager_obj::__new( ::h3d::impl::Driver driver) {
	::hx::ObjectPtr< MemoryManager_obj > __this = new MemoryManager_obj();
	__this->__construct(driver);
	return __this;
}

::hx::ObjectPtr< MemoryManager_obj > MemoryManager_obj::__alloc(::hx::Ctx *_hx_ctx, ::h3d::impl::Driver driver) {
	MemoryManager_obj *__this = (MemoryManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MemoryManager_obj), true, "h3d.impl.MemoryManager"));
	*(void **)__this = MemoryManager_obj::_hx_vtable;
	h3d::impl::MemoryManager_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(driver);
	return __this;
}

MemoryManager_obj::MemoryManager_obj()
{
	garbage = new __default_garbage(this);
}

void MemoryManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MemoryManager);
	HX_MARK_MEMBER_NAME(driver,"driver");
	HX_MARK_MEMBER_NAME(buffers,"buffers");
	HX_MARK_MEMBER_NAME(indexes,"indexes");
	HX_MARK_MEMBER_NAME(textures,"textures");
	HX_MARK_MEMBER_NAME(depths,"depths");
	HX_MARK_MEMBER_NAME(triIndexes,"triIndexes");
	HX_MARK_MEMBER_NAME(quadIndexes,"quadIndexes");
	HX_MARK_MEMBER_NAME(usedMemory,"usedMemory");
	HX_MARK_MEMBER_NAME(texMemory,"texMemory");
	HX_MARK_MEMBER_NAME(bufferCount,"bufferCount");
	HX_MARK_MEMBER_NAME(garbage,"garbage");
	HX_MARK_END_CLASS();
}

void MemoryManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(driver,"driver");
	HX_VISIT_MEMBER_NAME(buffers,"buffers");
	HX_VISIT_MEMBER_NAME(indexes,"indexes");
	HX_VISIT_MEMBER_NAME(textures,"textures");
	HX_VISIT_MEMBER_NAME(depths,"depths");
	HX_VISIT_MEMBER_NAME(triIndexes,"triIndexes");
	HX_VISIT_MEMBER_NAME(quadIndexes,"quadIndexes");
	HX_VISIT_MEMBER_NAME(usedMemory,"usedMemory");
	HX_VISIT_MEMBER_NAME(texMemory,"texMemory");
	HX_VISIT_MEMBER_NAME(bufferCount,"bufferCount");
	HX_VISIT_MEMBER_NAME(garbage,"garbage");
}

::hx::Val MemoryManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bpp") ) { return ::hx::Val( bpp_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stats") ) { return ::hx::Val( stats_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"driver") ) { return ::hx::Val( driver ); }
		if (HX_FIELD_EQ(inName,"depths") ) { return ::hx::Val( depths ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buffers") ) { return ::hx::Val( buffers ); }
		if (HX_FIELD_EQ(inName,"indexes") ) { return ::hx::Val( indexes ); }
		if (HX_FIELD_EQ(inName,"garbage") ) { return ::hx::Val( garbage ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textures") ) { return ::hx::Val( textures ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"texMemory") ) { return ::hx::Val( texMemory ); }
		if (HX_FIELD_EQ(inName,"sortByLRU") ) { return ::hx::Val( sortByLRU_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"triIndexes") ) { return ::hx::Val( triIndexes ); }
		if (HX_FIELD_EQ(inName,"usedMemory") ) { return ::hx::Val( usedMemory ); }
		if (HX_FIELD_EQ(inName,"allocDepth") ) { return ::hx::Val( allocDepth_dyn() ); }
		if (HX_FIELD_EQ(inName,"allocStats") ) { return ::hx::Val( allocStats_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"quadIndexes") ) { return ::hx::Val( quadIndexes ); }
		if (HX_FIELD_EQ(inName,"bufferCount") ) { return ::hx::Val( bufferCount ); }
		if (HX_FIELD_EQ(inName,"initIndexes") ) { return ::hx::Val( initIndexes_dyn() ); }
		if (HX_FIELD_EQ(inName,"freeManaged") ) { return ::hx::Val( freeManaged_dyn() ); }
		if (HX_FIELD_EQ(inName,"allocBuffer") ) { return ::hx::Val( allocBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"deleteDepth") ) { return ::hx::Val( deleteDepth_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"allocManaged") ) { return ::hx::Val( allocManaged_dyn() ); }
		if (HX_FIELD_EQ(inName,"allocIndexes") ) { return ::hx::Val( allocIndexes_dyn() ); }
		if (HX_FIELD_EQ(inName,"allocTexture") ) { return ::hx::Val( allocTexture_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"deleteIndexes") ) { return ::hx::Val( deleteIndexes_dyn() ); }
		if (HX_FIELD_EQ(inName,"cleanTextures") ) { return ::hx::Val( cleanTextures_dyn() ); }
		if (HX_FIELD_EQ(inName,"deleteTexture") ) { return ::hx::Val( deleteTexture_dyn() ); }
		if (HX_FIELD_EQ(inName,"onContextLost") ) { return ::hx::Val( onContextLost_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"freeMemorySize") ) { return ::hx::Val( freeMemorySize_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"cleanManagedBuffers") ) { return ::hx::Val( cleanManagedBuffers_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MemoryManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"ALL_FLAGS") ) { outValue = ( ALL_FLAGS ); return true; }
	}
	return false;
}

::hx::Val MemoryManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"driver") ) { driver=inValue.Cast<  ::h3d::impl::Driver >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depths") ) { depths=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buffers") ) { buffers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexes") ) { indexes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"garbage") ) { garbage=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textures") ) { textures=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"texMemory") ) { texMemory=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"triIndexes") ) { triIndexes=inValue.Cast<  ::h3d::Indexes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"usedMemory") ) { usedMemory=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"quadIndexes") ) { quadIndexes=inValue.Cast<  ::h3d::Indexes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bufferCount") ) { bufferCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MemoryManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"ALL_FLAGS") ) { ALL_FLAGS=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

void MemoryManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("driver",28,80,1f,e5));
	outFields->push(HX_("buffers",73,a3,90,b1));
	outFields->push(HX_("indexes",00,5c,bf,e0));
	outFields->push(HX_("textures",38,f7,ce,65));
	outFields->push(HX_("depths",10,f2,88,6d));
	outFields->push(HX_("triIndexes",15,66,00,35));
	outFields->push(HX_("quadIndexes",f9,01,74,b7));
	outFields->push(HX_("usedMemory",1e,9d,18,ad));
	outFields->push(HX_("texMemory",48,84,ae,dd));
	outFields->push(HX_("bufferCount",af,d7,ae,e7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MemoryManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::impl::Driver */ ,(int)offsetof(MemoryManager_obj,driver),HX_("driver",28,80,1f,e5)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(MemoryManager_obj,buffers),HX_("buffers",73,a3,90,b1)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(MemoryManager_obj,indexes),HX_("indexes",00,5c,bf,e0)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(MemoryManager_obj,textures),HX_("textures",38,f7,ce,65)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(MemoryManager_obj,depths),HX_("depths",10,f2,88,6d)},
	{::hx::fsObject /*  ::h3d::Indexes */ ,(int)offsetof(MemoryManager_obj,triIndexes),HX_("triIndexes",15,66,00,35)},
	{::hx::fsObject /*  ::h3d::Indexes */ ,(int)offsetof(MemoryManager_obj,quadIndexes),HX_("quadIndexes",f9,01,74,b7)},
	{::hx::fsFloat,(int)offsetof(MemoryManager_obj,usedMemory),HX_("usedMemory",1e,9d,18,ad)},
	{::hx::fsFloat,(int)offsetof(MemoryManager_obj,texMemory),HX_("texMemory",48,84,ae,dd)},
	{::hx::fsInt,(int)offsetof(MemoryManager_obj,bufferCount),HX_("bufferCount",af,d7,ae,e7)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MemoryManager_obj,garbage),HX_("garbage",b5,c6,7f,68)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MemoryManager_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &MemoryManager_obj::MAX_MEMORY,HX_("MAX_MEMORY",9c,7a,c2,34)},
	{::hx::fsInt,(void *) &MemoryManager_obj::MAX_BUFFERS,HX_("MAX_BUFFERS",58,9b,e7,83)},
	{::hx::fsInt,(void *) &MemoryManager_obj::SIZE,HX_("SIZE",c1,68,14,37)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &MemoryManager_obj::ALL_FLAGS,HX_("ALL_FLAGS",29,76,06,5f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MemoryManager_obj_sMemberFields[] = {
	HX_("driver",28,80,1f,e5),
	HX_("buffers",73,a3,90,b1),
	HX_("indexes",00,5c,bf,e0),
	HX_("textures",38,f7,ce,65),
	HX_("depths",10,f2,88,6d),
	HX_("triIndexes",15,66,00,35),
	HX_("quadIndexes",f9,01,74,b7),
	HX_("usedMemory",1e,9d,18,ad),
	HX_("texMemory",48,84,ae,dd),
	HX_("bufferCount",af,d7,ae,e7),
	HX_("init",10,3b,bb,45),
	HX_("initIndexes",d0,ca,29,99),
	HX_("garbage",b5,c6,7f,68),
	HX_("cleanManagedBuffers",3d,16,2c,5c),
	HX_("allocManaged",6a,be,09,dd),
	HX_("freeManaged",13,4b,00,a5),
	HX_("allocBuffer",55,1b,5f,d8),
	HX_("deleteIndexes",15,ef,48,3f),
	HX_("allocIndexes",0b,88,07,aa),
	HX_("bpp",e2,be,4a,00),
	HX_("cleanTextures",e1,55,66,4d),
	HX_("sortByLRU",5a,71,ed,c5),
	HX_("deleteTexture",f0,5b,6a,fd),
	HX_("allocTexture",e6,f4,28,68),
	HX_("allocDepth",4e,74,d2,02),
	HX_("deleteDepth",d8,24,1f,67),
	HX_("onContextLost",94,ac,a5,87),
	HX_("dispose",9f,80,4c,bb),
	HX_("freeMemorySize",2e,5c,53,52),
	HX_("stats",1f,76,0b,84),
	HX_("allocStats",6a,f9,b3,af),
	::String(null()) };

static void MemoryManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MemoryManager_obj::MAX_MEMORY,"MAX_MEMORY");
	HX_MARK_MEMBER_NAME(MemoryManager_obj::MAX_BUFFERS,"MAX_BUFFERS");
	HX_MARK_MEMBER_NAME(MemoryManager_obj::SIZE,"SIZE");
	HX_MARK_MEMBER_NAME(MemoryManager_obj::ALL_FLAGS,"ALL_FLAGS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MemoryManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MemoryManager_obj::MAX_MEMORY,"MAX_MEMORY");
	HX_VISIT_MEMBER_NAME(MemoryManager_obj::MAX_BUFFERS,"MAX_BUFFERS");
	HX_VISIT_MEMBER_NAME(MemoryManager_obj::SIZE,"SIZE");
	HX_VISIT_MEMBER_NAME(MemoryManager_obj::ALL_FLAGS,"ALL_FLAGS");
};

#endif

::hx::Class MemoryManager_obj::__mClass;

static ::String MemoryManager_obj_sStaticFields[] = {
	HX_("MAX_MEMORY",9c,7a,c2,34),
	HX_("MAX_BUFFERS",58,9b,e7,83),
	HX_("SIZE",c1,68,14,37),
	HX_("ALL_FLAGS",29,76,06,5f),
	::String(null())
};

void MemoryManager_obj::__register()
{
	MemoryManager_obj _hx_dummy;
	MemoryManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.impl.MemoryManager",53,67,9e,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MemoryManager_obj::__GetStatic;
	__mClass->mSetStaticField = &MemoryManager_obj::__SetStatic;
	__mClass->mMarkFunc = MemoryManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MemoryManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MemoryManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MemoryManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MemoryManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MemoryManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MemoryManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MemoryManager_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_5_boot)
HXDLIN(   5)		MAX_MEMORY = ((Float)4294967296.);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_6_boot)
HXDLIN(   6)		MAX_BUFFERS = 65536;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_7_boot)
HXDLIN(   7)		SIZE = 65533;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f3256e8b3e1003e4_8_boot)
HXDLIN(   8)		ALL_FLAGS = ::Type_obj::allEnums(::hx::ClassOf< ::h3d::BufferFlag >());
            	}
}

} // end namespace h3d
} // end namespace impl
