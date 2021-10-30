#ifndef INCLUDED_hxsl__Splitter_VarProps
#define INCLUDED_hxsl__Splitter_VarProps

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_7179c891d0f5d20d_10_new)
HX_DECLARE_CLASS2(hxsl,_Splitter,VarProps)

namespace hxsl{
namespace _Splitter{


class HXCPP_CLASS_ATTRIBUTES VarProps_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef VarProps_obj OBJ_;
		VarProps_obj();

	public:
		enum { _hx_ClassId = 0x4633fa82 };

		void __construct( ::Dynamic v);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl._Splitter.VarProps")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl._Splitter.VarProps"); }

		inline static ::hx::ObjectPtr< VarProps_obj > __new( ::Dynamic v) {
			::hx::ObjectPtr< VarProps_obj > __this = new VarProps_obj();
			__this->__construct(v);
			return __this;
		}

		inline static ::hx::ObjectPtr< VarProps_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic v) {
			VarProps_obj *__this = (VarProps_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VarProps_obj), true, "hxsl._Splitter.VarProps"));
			*(void **)__this = VarProps_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_7179c891d0f5d20d_10_new)
HXLINE(  11)		( ( ::hxsl::_Splitter::VarProps)(__this) )->v = v;
HXLINE(  12)		( ( ::hxsl::_Splitter::VarProps)(__this) )->read = 0;
HXLINE(  13)		( ( ::hxsl::_Splitter::VarProps)(__this) )->write = 0;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VarProps_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VarProps",29,cf,00,e9); }

		 ::Dynamic v;
		int read;
		int write;
		bool local;
		bool requireInit;
};

} // end namespace hxsl
} // end namespace _Splitter

#endif /* INCLUDED_hxsl__Splitter_VarProps */ 
