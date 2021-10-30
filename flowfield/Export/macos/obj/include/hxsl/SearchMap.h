#ifndef INCLUDED_hxsl_SearchMap
#define INCLUDED_hxsl_SearchMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_cb263f4c6a0c1f29_8_new)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS1(hxsl,RuntimeShader)
HX_DECLARE_CLASS1(hxsl,SearchMap)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES SearchMap_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SearchMap_obj OBJ_;
		SearchMap_obj();

	public:
		enum { _hx_ClassId = 0x2947d887 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl.SearchMap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl.SearchMap"); }

		inline static ::hx::ObjectPtr< SearchMap_obj > __new() {
			::hx::ObjectPtr< SearchMap_obj > __this = new SearchMap_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SearchMap_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SearchMap_obj *__this = (SearchMap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SearchMap_obj), true, "hxsl.SearchMap"));
			*(void **)__this = SearchMap_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_cb263f4c6a0c1f29_8_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SearchMap_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SearchMap",f4,93,21,91); }

		 ::hxsl::RuntimeShader linked;
		 ::haxe::ds::IntMap next;
};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_SearchMap */ 
