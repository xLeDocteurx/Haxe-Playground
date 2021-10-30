#ifndef INCLUDED_h2d_impl__BatchDrawState_StateEntry
#define INCLUDED_h2d_impl__BatchDrawState_StateEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(h2d,impl,_BatchDrawState,StateEntry)
HX_DECLARE_CLASS2(h3d,mat,Texture)

namespace h2d{
namespace impl{
namespace _BatchDrawState{


class HXCPP_CLASS_ATTRIBUTES StateEntry_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StateEntry_obj OBJ_;
		StateEntry_obj();

	public:
		enum { _hx_ClassId = 0x1a582d05 };

		void __construct( ::h3d::mat::Texture texture);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h2d.impl._BatchDrawState.StateEntry")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h2d.impl._BatchDrawState.StateEntry"); }
		static ::hx::ObjectPtr< StateEntry_obj > __new( ::h3d::mat::Texture texture);
		static ::hx::ObjectPtr< StateEntry_obj > __alloc(::hx::Ctx *_hx_ctx, ::h3d::mat::Texture texture);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StateEntry_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StateEntry",c1,d8,1e,d7); }

		 ::h3d::mat::Texture texture;
		int count;
		 ::h2d::impl::_BatchDrawState::StateEntry next;
		 ::h2d::impl::_BatchDrawState::StateEntry set( ::h3d::mat::Texture texture);
		::Dynamic set_dyn();

};

} // end namespace h2d
} // end namespace impl
} // end namespace _BatchDrawState

#endif /* INCLUDED_h2d_impl__BatchDrawState_StateEntry */ 
