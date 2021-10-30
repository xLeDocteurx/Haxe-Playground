#ifndef INCLUDED_hxsl__Linker_AllocatedVar
#define INCLUDED_hxsl__Linker_AllocatedVar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_08ad6d5cd49e1452_13_new)
HX_DECLARE_CLASS1(hxsl,FunctionKind)
HX_DECLARE_CLASS2(hxsl,_Linker,AllocatedVar)

namespace hxsl{
namespace _Linker{


class HXCPP_CLASS_ATTRIBUTES AllocatedVar_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AllocatedVar_obj OBJ_;
		AllocatedVar_obj();

	public:
		enum { _hx_ClassId = 0x198a5539 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl._Linker.AllocatedVar")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl._Linker.AllocatedVar"); }

		inline static ::hx::ObjectPtr< AllocatedVar_obj > __new() {
			::hx::ObjectPtr< AllocatedVar_obj > __this = new AllocatedVar_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AllocatedVar_obj > __alloc(::hx::Ctx *_hx_ctx) {
			AllocatedVar_obj *__this = (AllocatedVar_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AllocatedVar_obj), true, "hxsl._Linker.AllocatedVar"));
			*(void **)__this = AllocatedVar_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_08ad6d5cd49e1452_13_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AllocatedVar_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AllocatedVar",40,ae,e4,50); }

		int id;
		 ::Dynamic v;
		::String path;
		::Array< ::Dynamic> merged;
		 ::hxsl::FunctionKind kind;
		 ::hxsl::_Linker::AllocatedVar parent;
		::String rootShaderName;
		int instanceIndex;
};

} // end namespace hxsl
} // end namespace _Linker

#endif /* INCLUDED_hxsl__Linker_AllocatedVar */ 
