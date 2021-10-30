#ifndef INCLUDED_hxsl_ShaderList
#define INCLUDED_hxsl_ShaderList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,ShaderList)
HX_DECLARE_CLASS2(hxsl,_ShaderList,ShaderIterator)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES ShaderList_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ShaderList_obj OBJ_;
		ShaderList_obj();

	public:
		enum { _hx_ClassId = 0x7f320970 };

		void __construct( ::hxsl::Shader s, ::hxsl::ShaderList n);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl.ShaderList")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl.ShaderList"); }
		static ::hx::ObjectPtr< ShaderList_obj > __new( ::hxsl::Shader s, ::hxsl::ShaderList n);
		static ::hx::ObjectPtr< ShaderList_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxsl::Shader s, ::hxsl::ShaderList n);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShaderList_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShaderList",43,02,fd,2c); }

		static  ::hxsl::ShaderList addSort( ::hxsl::Shader s, ::hxsl::ShaderList shaders);
		static ::Dynamic addSort_dyn();

		 ::hxsl::Shader s;
		 ::hxsl::ShaderList next;
		 ::hxsl::ShaderList clone();
		::Dynamic clone_dyn();

		 ::hxsl::_ShaderList::ShaderIterator iterator();
		::Dynamic iterator_dyn();

		 ::hxsl::_ShaderList::ShaderIterator iterateTo( ::hxsl::ShaderList s);
		::Dynamic iterateTo_dyn();

};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_ShaderList */ 
