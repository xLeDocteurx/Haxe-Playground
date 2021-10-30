#ifndef INCLUDED_h3d_impl__ManagedBuffer_FreeCell
#define INCLUDED_h3d_impl__ManagedBuffer_FreeCell

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_158ab4ee12d633b5_8_new)
HX_DECLARE_CLASS3(h3d,impl,_ManagedBuffer,FreeCell)

namespace h3d{
namespace impl{
namespace _ManagedBuffer{


class HXCPP_CLASS_ATTRIBUTES FreeCell_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FreeCell_obj OBJ_;
		FreeCell_obj();

	public:
		enum { _hx_ClassId = 0x2d447e23 };

		void __construct(int pos,int count, ::h3d::impl::_ManagedBuffer::FreeCell next);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.impl._ManagedBuffer.FreeCell")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.impl._ManagedBuffer.FreeCell"); }

		inline static ::hx::ObjectPtr< FreeCell_obj > __new(int pos,int count, ::h3d::impl::_ManagedBuffer::FreeCell next) {
			::hx::ObjectPtr< FreeCell_obj > __this = new FreeCell_obj();
			__this->__construct(pos,count,next);
			return __this;
		}

		inline static ::hx::ObjectPtr< FreeCell_obj > __alloc(::hx::Ctx *_hx_ctx,int pos,int count, ::h3d::impl::_ManagedBuffer::FreeCell next) {
			FreeCell_obj *__this = (FreeCell_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FreeCell_obj), true, "h3d.impl._ManagedBuffer.FreeCell"));
			*(void **)__this = FreeCell_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_158ab4ee12d633b5_8_new)
HXLINE(   9)		( ( ::h3d::impl::_ManagedBuffer::FreeCell)(__this) )->pos = pos;
HXLINE(  10)		( ( ::h3d::impl::_ManagedBuffer::FreeCell)(__this) )->count = count;
HXLINE(  11)		( ( ::h3d::impl::_ManagedBuffer::FreeCell)(__this) )->next = next;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FreeCell_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FreeCell",8e,6c,74,de); }

		int pos;
		int count;
		 ::h3d::impl::_ManagedBuffer::FreeCell next;
};

} // end namespace h3d
} // end namespace impl
} // end namespace _ManagedBuffer

#endif /* INCLUDED_h3d_impl__ManagedBuffer_FreeCell */ 
