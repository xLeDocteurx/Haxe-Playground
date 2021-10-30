#include <hxcpp.h>

#ifndef INCLUDED_h2d__Graphics_GraphicsContent
#include <h2d/_Graphics/GraphicsContent.h>
#endif
#ifndef INCLUDED_h3d_Buffer
#include <h3d/Buffer.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_Indexes
#include <h3d/Indexes.h>
#endif
#ifndef INCLUDED_h3d_impl_ManagedBuffer
#include <h3d/impl/ManagedBuffer.h>
#endif
#ifndef INCLUDED_h3d_prim_Primitive
#include <h3d/prim/Primitive.h>
#endif
#ifndef INCLUDED_hxd_impl_Allocator
#include <hxd/impl/Allocator.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_707a240d8e15a89a_41_new,"h2d._Graphics.GraphicsContent","new",0x10c8f848,"h2d._Graphics.GraphicsContent.new","h2d/Graphics.hx",41,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_707a240d8e15a89a_48_addIndex,"h2d._Graphics.GraphicsContent","addIndex",0x0cbaf049,"h2d._Graphics.GraphicsContent.addIndex","h2d/Graphics.hx",48,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_707a240d8e15a89a_53_add,"h2d._Graphics.GraphicsContent","add",0x10bf1a09,"h2d._Graphics.GraphicsContent.add","h2d/Graphics.hx",53,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_707a240d8e15a89a_65_next,"h2d._Graphics.GraphicsContent","next",0x9f10480b,"h2d._Graphics.GraphicsContent.next","h2d/Graphics.hx",65,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_707a240d8e15a89a_76_alloc,"h2d._Graphics.GraphicsContent","alloc",0x1790965d,"h2d._Graphics.GraphicsContent.alloc","h2d/Graphics.hx",76,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_707a240d8e15a89a_92_render,"h2d._Graphics.GraphicsContent","render",0x4c80246e,"h2d._Graphics.GraphicsContent.render","h2d/Graphics.hx",92,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_707a240d8e15a89a_101_flush,"h2d._Graphics.GraphicsContent","flush",0xf89854ac,"h2d._Graphics.GraphicsContent.flush","h2d/Graphics.hx",101,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_707a240d8e15a89a_118_dispose,"h2d._Graphics.GraphicsContent","dispose",0xdfd7bc87,"h2d._Graphics.GraphicsContent.dispose","h2d/Graphics.hx",118,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_707a240d8e15a89a_139_clear,"h2d._Graphics.GraphicsContent","clear",0x3e586375,"h2d._Graphics.GraphicsContent.clear","h2d/Graphics.hx",139,0x5cd0883e)
namespace h2d{
namespace _Graphics{

void GraphicsContent_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_707a240d8e15a89a_41_new)
HXDLIN(  41)		super::__construct();
HXLINE(  42)		this->buffers = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic GraphicsContent_obj::__CreateEmpty() { return new GraphicsContent_obj; }

void *GraphicsContent_obj::_hx_vtable = 0;

Dynamic GraphicsContent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicsContent_obj > _hx_result = new GraphicsContent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GraphicsContent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20451a9e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x20451a9e;
	} else {
		return inClassId==(int)0x566939c8;
	}
}

void GraphicsContent_obj::addIndex(int i){
            	HX_STACKFRAME(&_hx_pos_707a240d8e15a89a_48_addIndex)
HXLINE(  49)		this->index->push(i);
HXLINE(  50)		this->indexDirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GraphicsContent_obj,addIndex,(void))

void GraphicsContent_obj::add(Float x,Float y,Float u,Float v,Float r,Float g,Float b,Float a){
            	HX_STACKFRAME(&_hx_pos_707a240d8e15a89a_53_add)
HXLINE(  54)		this->tmp->push(x);
HXLINE(  55)		this->tmp->push(y);
HXLINE(  56)		this->tmp->push(u);
HXLINE(  57)		this->tmp->push(v);
HXLINE(  58)		this->tmp->push(r);
HXLINE(  59)		this->tmp->push(g);
HXLINE(  60)		this->tmp->push(b);
HXLINE(  61)		this->tmp->push(a);
HXLINE(  62)		this->bufferDirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC8(GraphicsContent_obj,add,(void))

bool GraphicsContent_obj::next(){
            	HX_STACKFRAME(&_hx_pos_707a240d8e15a89a_65_next)
HXLINE(  66)		int nvect = (this->tmp->length >> 3);
HXLINE(  67)		if ((nvect < 32768)) {
HXLINE(  68)			return false;
            		}
HXLINE(  69)		this->buffers->push( ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("buf",33,c3,4a,00),this->tmp)
            			->setFixed(1,HX_("idx",3d,04,50,00),this->index)
            			->setFixed(2,HX_("ibuf",6a,2a,b2,45),null())
            			->setFixed(3,HX_("vbuf",7d,f0,49,4e),null())));
HXLINE(  70)		int length = 0;
HXDLIN(  70)		::Array< Float > this1 = ::Array_obj< Float >::__new();
HXDLIN(  70)		if ((length > 0)) {
HXLINE(  70)			if ((length > this1->length)) {
HXLINE(  70)				this1[(length - 1)] = ((Float)0.);
            			}
            		}
HXDLIN(  70)		this->tmp = this1;
HXLINE(  71)		int length1 = 0;
HXDLIN(  71)		::Array< int > this2 = ::Array_obj< int >::__new();
HXDLIN(  71)		if ((length1 > 0)) {
HXLINE(  71)			if ((length1 > this2->length)) {
HXLINE(  71)				this2[(length1 - 1)] = 0;
            			}
            		}
HXDLIN(  71)		this->index = this2;
HXLINE(  72)		this->super::dispose();
HXLINE(  73)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GraphicsContent_obj,next,return )

void GraphicsContent_obj::alloc( ::h3d::Engine engine){
            	HX_STACKFRAME(&_hx_pos_707a240d8e15a89a_76_alloc)
HXLINE(  77)		if ((this->index->length <= 0)) {
HXLINE(  77)			return;
            		}
HXLINE(  78)		 ::hxd::impl::Allocator alloc = ::hxd::impl::Allocator_obj::get();
HXLINE(  79)		this->buffer = alloc->ofFloats(this->tmp,8,2);
HXLINE(  83)		this->indexes = alloc->ofIndexes(this->index,null());
HXLINE(  84)		{
HXLINE(  84)			int _g = 0;
HXDLIN(  84)			::Array< ::Dynamic> _g1 = this->buffers;
HXDLIN(  84)			while((_g < _g1->length)){
HXLINE(  84)				 ::Dynamic b = _g1->__get(_g);
HXDLIN(  84)				_g = (_g + 1);
HXLINE(  85)				bool _hx_tmp;
HXDLIN(  85)				if (::hx::IsNotNull( b->__Field(HX_("vbuf",7d,f0,49,4e),::hx::paccDynamic) )) {
HXLINE(  85)					 ::h3d::Buffer _this = ( ( ::h3d::Buffer)(b->__Field(HX_("vbuf",7d,f0,49,4e),::hx::paccDynamic)) );
HXDLIN(  85)					if (::hx::IsNotNull( _this->buffer )) {
HXLINE(  85)						_hx_tmp = ::hx::IsNull( _this->buffer->vbuf );
            					}
            					else {
HXLINE(  85)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE(  85)					_hx_tmp = true;
            				}
HXDLIN(  85)				if (_hx_tmp) {
HXLINE(  85)					b->__SetField(HX_("vbuf",7d,f0,49,4e),alloc->ofFloats(( (::Array< Float >)(b->__Field(HX_("buf",33,c3,4a,00),::hx::paccDynamic)) ),8,2),::hx::paccDynamic);
            				}
HXLINE(  86)				bool _hx_tmp1;
HXDLIN(  86)				if (::hx::IsNotNull( b->__Field(HX_("ibuf",6a,2a,b2,45),::hx::paccDynamic) )) {
HXLINE(  86)					_hx_tmp1 = ( ( ::h3d::Indexes)(b->__Field(HX_("ibuf",6a,2a,b2,45),::hx::paccDynamic)) )->isDisposed();
            				}
            				else {
HXLINE(  86)					_hx_tmp1 = true;
            				}
HXDLIN(  86)				if (_hx_tmp1) {
HXLINE(  86)					b->__SetField(HX_("ibuf",6a,2a,b2,45),alloc->ofIndexes(( (::Array< int >)(b->__Field(HX_("idx",3d,04,50,00),::hx::paccDynamic)) ),null()),::hx::paccDynamic);
            				}
            			}
            		}
HXLINE(  88)		this->bufferDirty = false;
HXLINE(  89)		this->indexDirty = false;
            	}


void GraphicsContent_obj::render( ::h3d::Engine engine){
            	HX_STACKFRAME(&_hx_pos_707a240d8e15a89a_92_render)
HXLINE(  93)		if ((this->index->length <= 0)) {
HXLINE(  93)			return;
            		}
HXLINE(  94)		this->flush();
HXLINE(  95)		{
HXLINE(  95)			int _g = 0;
HXDLIN(  95)			::Array< ::Dynamic> _g1 = this->buffers;
HXDLIN(  95)			while((_g < _g1->length)){
HXLINE(  95)				 ::Dynamic b = _g1->__get(_g);
HXDLIN(  95)				_g = (_g + 1);
HXLINE(  96)				engine->renderIndexed(( ( ::h3d::Buffer)(b->__Field(HX_("vbuf",7d,f0,49,4e),::hx::paccDynamic)) ),( ( ::h3d::Indexes)(b->__Field(HX_("ibuf",6a,2a,b2,45),::hx::paccDynamic)) ),null(),null());
            			}
            		}
HXLINE(  97)		this->super::render(engine);
            	}


void GraphicsContent_obj::flush(){
            	HX_STACKFRAME(&_hx_pos_707a240d8e15a89a_101_flush)
HXDLIN( 101)		bool _hx_tmp;
HXDLIN( 101)		if (::hx::IsNotNull( this->buffer )) {
HXDLIN( 101)			 ::h3d::Buffer _this = this->buffer;
HXDLIN( 101)			if (::hx::IsNotNull( _this->buffer )) {
HXDLIN( 101)				_hx_tmp = ::hx::IsNull( _this->buffer->vbuf );
            			}
            			else {
HXDLIN( 101)				_hx_tmp = true;
            			}
            		}
            		else {
HXDLIN( 101)			_hx_tmp = true;
            		}
HXDLIN( 101)		if (_hx_tmp) {
HXLINE( 102)			this->alloc(::h3d::Engine_obj::CURRENT);
            		}
            		else {
HXLINE( 104)			 ::hxd::impl::Allocator allocator = ::hxd::impl::Allocator_obj::get();
HXLINE( 105)			if (this->bufferDirty) {
HXLINE( 106)				allocator->disposeBuffer(this->buffer);
HXLINE( 107)				this->buffer = allocator->ofFloats(this->tmp,8,2);
HXLINE( 108)				this->bufferDirty = false;
            			}
HXLINE( 110)			if (this->indexDirty) {
HXLINE( 111)				allocator->disposeIndexBuffer(this->indexes);
HXLINE( 112)				this->indexes = allocator->ofIndexes(this->index,null());
HXLINE( 113)				this->indexDirty = false;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GraphicsContent_obj,flush,(void))

void GraphicsContent_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_707a240d8e15a89a_118_dispose)
HXLINE( 119)		{
HXLINE( 119)			int _g = 0;
HXDLIN( 119)			::Array< ::Dynamic> _g1 = this->buffers;
HXDLIN( 119)			while((_g < _g1->length)){
HXLINE( 119)				 ::Dynamic b = _g1->__get(_g);
HXDLIN( 119)				_g = (_g + 1);
HXLINE( 120)				if (::hx::IsNotNull( b->__Field(HX_("vbuf",7d,f0,49,4e),::hx::paccDynamic) )) {
HXLINE( 120)					::hxd::impl::Allocator_obj::get()->disposeBuffer(( ( ::h3d::Buffer)(b->__Field(HX_("vbuf",7d,f0,49,4e),::hx::paccDynamic)) ));
            				}
HXLINE( 121)				if (::hx::IsNotNull( b->__Field(HX_("ibuf",6a,2a,b2,45),::hx::paccDynamic) )) {
HXLINE( 121)					::hxd::impl::Allocator_obj::get()->disposeIndexBuffer(( ( ::h3d::Indexes)(b->__Field(HX_("ibuf",6a,2a,b2,45),::hx::paccDynamic)) ));
            				}
HXLINE( 122)				b->__SetField(HX_("vbuf",7d,f0,49,4e),null(),::hx::paccDynamic);
HXLINE( 123)				b->__SetField(HX_("ibuf",6a,2a,b2,45),null(),::hx::paccDynamic);
            			}
            		}
HXLINE( 126)		if (::hx::IsNotNull( this->buffer )) {
HXLINE( 127)			::hxd::impl::Allocator_obj::get()->disposeBuffer(this->buffer);
HXLINE( 128)			this->buffer = null();
            		}
HXLINE( 130)		if (::hx::IsNotNull( this->indexes )) {
HXLINE( 131)			::hxd::impl::Allocator_obj::get()->disposeIndexBuffer(this->indexes);
HXLINE( 132)			this->indexes = null();
            		}
HXLINE( 135)		this->super::dispose();
            	}


void GraphicsContent_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_707a240d8e15a89a_139_clear)
HXLINE( 140)		this->dispose();
HXLINE( 141)		int length = 0;
HXDLIN( 141)		::Array< Float > this1 = ::Array_obj< Float >::__new();
HXDLIN( 141)		if ((length > 0)) {
HXLINE( 141)			if ((length > this1->length)) {
HXLINE( 141)				this1[(length - 1)] = ((Float)0.);
            			}
            		}
HXDLIN( 141)		this->tmp = this1;
HXLINE( 142)		int length1 = 0;
HXDLIN( 142)		::Array< int > this2 = ::Array_obj< int >::__new();
HXDLIN( 142)		if ((length1 > 0)) {
HXLINE( 142)			if ((length1 > this2->length)) {
HXLINE( 142)				this2[(length1 - 1)] = 0;
            			}
            		}
HXDLIN( 142)		this->index = this2;
HXLINE( 143)		this->buffers = ::Array_obj< ::Dynamic>::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(GraphicsContent_obj,clear,(void))


::hx::ObjectPtr< GraphicsContent_obj > GraphicsContent_obj::__new() {
	::hx::ObjectPtr< GraphicsContent_obj > __this = new GraphicsContent_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GraphicsContent_obj > GraphicsContent_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GraphicsContent_obj *__this = (GraphicsContent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicsContent_obj), true, "h2d._Graphics.GraphicsContent"));
	*(void **)__this = GraphicsContent_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GraphicsContent_obj::GraphicsContent_obj()
{
}

void GraphicsContent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsContent);
	HX_MARK_MEMBER_NAME(tmp,"tmp");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(buffers,"buffers");
	HX_MARK_MEMBER_NAME(bufferDirty,"bufferDirty");
	HX_MARK_MEMBER_NAME(indexDirty,"indexDirty");
	 ::h3d::prim::Primitive_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GraphicsContent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tmp,"tmp");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(buffers,"buffers");
	HX_VISIT_MEMBER_NAME(bufferDirty,"bufferDirty");
	HX_VISIT_MEMBER_NAME(indexDirty,"indexDirty");
	 ::h3d::prim::Primitive_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GraphicsContent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tmp") ) { return ::hx::Val( tmp ); }
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		if (HX_FIELD_EQ(inName,"alloc") ) { return ::hx::Val( alloc_dyn() ); }
		if (HX_FIELD_EQ(inName,"flush") ) { return ::hx::Val( flush_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buffers") ) { return ::hx::Val( buffers ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addIndex") ) { return ::hx::Val( addIndex_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"indexDirty") ) { return ::hx::Val( indexDirty ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bufferDirty") ) { return ::hx::Val( bufferDirty ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GraphicsContent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tmp") ) { tmp=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buffers") ) { buffers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"indexDirty") ) { indexDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bufferDirty") ) { bufferDirty=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsContent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("tmp",d7,64,58,00));
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("buffers",73,a3,90,b1));
	outFields->push(HX_("bufferDirty",f2,e2,1b,77));
	outFields->push(HX_("indexDirty",a0,c3,c3,a9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GraphicsContent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(GraphicsContent_obj,tmp),HX_("tmp",d7,64,58,00)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(GraphicsContent_obj,index),HX_("index",12,9b,14,be)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(GraphicsContent_obj,buffers),HX_("buffers",73,a3,90,b1)},
	{::hx::fsBool,(int)offsetof(GraphicsContent_obj,bufferDirty),HX_("bufferDirty",f2,e2,1b,77)},
	{::hx::fsBool,(int)offsetof(GraphicsContent_obj,indexDirty),HX_("indexDirty",a0,c3,c3,a9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GraphicsContent_obj_sStaticStorageInfo = 0;
#endif

static ::String GraphicsContent_obj_sMemberFields[] = {
	HX_("tmp",d7,64,58,00),
	HX_("index",12,9b,14,be),
	HX_("buffers",73,a3,90,b1),
	HX_("bufferDirty",f2,e2,1b,77),
	HX_("indexDirty",a0,c3,c3,a9),
	HX_("addIndex",31,c1,71,37),
	HX_("add",21,f2,49,00),
	HX_("next",f3,84,02,49),
	HX_("alloc",75,a4,93,21),
	HX_("render",56,6b,29,05),
	HX_("flush",c4,62,9b,02),
	HX_("dispose",9f,80,4c,bb),
	HX_("clear",8d,71,5b,48),
	::String(null()) };

::hx::Class GraphicsContent_obj::__mClass;

void GraphicsContent_obj::__register()
{
	GraphicsContent_obj _hx_dummy;
	GraphicsContent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d._Graphics.GraphicsContent",56,74,cd,87);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GraphicsContent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GraphicsContent_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicsContent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicsContent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
} // end namespace _Graphics
